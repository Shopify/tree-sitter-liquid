const PREC = {
    primary: 1,
    else_if: 1,
    else: 2,
}

// refences
// https://github.com/ngalaiko/tree-sitter-go-template/

module.exports = grammar({
  name: "liquid",

  word: $ => $.identifier,

  conflicts: $ => [
    [$.else_tag],
    [$.elseif_tag],
    [$.when_tag]
  ],

  precedences: (_) => [
    [
      "unary_not",
      "binary_exp",
      "binary_times",
      "binary_plus",
      "binary_in",
      "binary_compare",
      "binary_relation",
      "clause_connective",
      "contains"
    ],
  ],

  rules: {

    template: ($) =>
      repeat(
        $._node
      ),

    _node: ($) => 
      choice(
        $.tag,
        $.content,
      ),

    content: (_) => prec.right(repeat1(choice(/[^{]+|\{/, '{%%', '{{{'))),

    tag: ($) => prec(2, choice($._unpaired_tag, $._paired_tag)),


    //TODO:
    //raw tag
    //form tag
    //javascript tag
    //stylesheet tag
    //capture tag
    //handle schemea tags inject json
    _paired_tag: ($) => 
      choice(
        $.if_tag,
        $.unless_tag,
        $.case_tag,
        $.for_loop_tag,
        alias($._paired_comment, $.comment),
      ),

    _unpaired_tag: ($) => 
      seq(
        $._tag_open,
        choice($.expression, $.statement, $.liquid_tag),
        $._tag_close,
      ),

    liquid_tag: ($) => seq("liquid", $._liquid_block),

    _liquid_block: ($) =>
      repeat1(
        seq(
          choice(
            $.expression,
            $.statement,
            $._paired_statement,
          ),
          /(\r\n|\r|\n)/,
        )
      ),

    statement: ($) =>
      choice(
        $.assignment,
        $.render,
        $.include,
        $.section,
        $.sections,
        $.echo,
        $.increment,
        $.decrement,
      ),

    expression: ($) => 
      choice(
        $._literal,
        $.filter,
        $.identifier,
        $.predicate,
        $.access,
      ),


    //TODO: handle needed paired tags -> statements for liquid tag
    _paired_statement: ($) =>
      choice(
        $.if_statement,
        $.unless_statement,
        $.case_statment,
        $.for_loop_statement
      ),

    /////////////////
    // Paired Tags //
    /////////////////

    //TODO: cycle, pageinate, tablerow.. handle break & continue explicitly?
    // https://shopify.dev/docs/api/liquid/tags/iteration-tags
    //
    // cleanup precs and test further, esp with mulit node else/ifelse blocks
    for_loop_tag: ($) => 
      prec(1,
        seq(
          seq(
            $._tag_open,
            "for",
            field("item", $.identifier),
            "in", 
            choice(
              seq(
                field("iterator", choice($.identifier, $.access)), 
                optional(field("modifier", choice($.argument_list, $.identifier))), 
              ),
              field("range", $.range)
            ),
            $._tag_close
          ),
          field("block", repeat($._node)),
          optional($.else_tag),
          $._tag_open, "endfor", $._tag_close,
        )
      ),

    unless_tag: ($) =>
      seq(
        $._tag_open, "unless", field("condition", $.expression), $._tag_close,
        field("consequence", alias(repeat($._node), $.block)),
        $._tag_open, "endunless", $._tag_close, 
      ),

    if_tag: ($) =>
      seq(
        $._tag_open, "if", field("condition", $.expression), $._tag_close, 
        repeat($._node),
        repeat($.elseif_tag),
        optional($.else_tag),
        prec.right(0, seq($._tag_open, "endif", $._tag_close)), 
      ),

    elseif_tag: ($) =>
      prec.dynamic(
        PREC.else_if,
        seq(
          $._tag_open, "elseif", field("condition", $.expression), $._tag_close,
          alias(repeat($._node), $.block),
        ),
      ),

    else_tag: ($) =>
      prec.dynamic(
        PREC.else,
        seq(
          $._tag_open, "else", $._tag_close,
          alias(repeat($._node), $.block),
      )),

    when_tag: ($) => 
      prec.dynamic(
        PREC.else_if,
        seq(
          //condtion should be more constrained -- https://shopify.dev/docs/api/liquid/tags/case
          $._tag_open, "when", field("condition", $.expression), $._tag_close,
          field("consequence", alias(repeat($._node), $.block)),
        ),
      ),

    case_tag: ($) =>
      seq(
        $._tag_open, "case", field("receiver", choice($.identifier, $.access)), $._tag_close,
        repeat(field("consequence", $.when_tag)),
        optional(field("alternative", $.else_tag)),
        prec.right(0, seq($._tag_open, "endcase", $._tag_close)),
      ),


    //////////////////////////////////////
    // Paired Statements For Liquid Tag //
    //////////////////////////////////////
    //
    //TODO: test / handle multi node if/case and set precs, re: paired tags
    
    for_loop_statement: ($) => 
      prec(1,
        seq(
          seq(
            "for",
            field("item", $.identifier),
            "in", 
            choice(
              seq(
                field("iterator", choice($.identifier, $.access)), 
                optional(field("modifier", choice($.argument_list, $.identifier))), 
              ),
              field("range", $.range)
            ),
          ),
          field("block", $._liquid_block),
          optional($.else_statement),
          "endfor"
        )
      ),

    unless_statement: ($) =>
      seq(
        seq("unless", field("condition", $.expression)),
        field("consequence", alias($._liquid_block, $.block)),
        "endunless"
      ),

    if_statement: ($) =>
      seq(
        "if", field("condition", $.expression),
        field("consequence", alias($._liquid_block, $.block)),
        repeat(field("alternatives", $.elseif_statement)),
        optional(field("alternatives", $.else_statement)),
        "endif"
      ),

    elseif_statement: ($) =>
      prec.left(
        1,
        seq(
          "elseif", field("condition", $.expression),
          field("consequence", alias($._liquid_block, $.block)),
        ),
      ),

    else_statement: ($) =>
      prec.left(
        1,
        seq(
          "else",
          field("consequence", alias($._liquid_block, $.block))
        ),
      ),

    when_statement: ($) => 
      prec.left(
        1,
        seq(
          //condtion should be more constrained -- https://shopify.dev/docs/api/liquid/tags/case
          "when", field("condition", $.expression),
          field("consequence", alias($._liquid_block, $.block)),
        ),
      ),

    case_statment: ($) =>
      seq(
        "case", field("receiver", choice($.identifier, $.access)),
        repeat1(field("consequence", $.when_statement)),
        optional(field("alternative", $.else_statement)),
        "endcase", 
      ),

    //should probably just explicitly define these lol
    ...[
      ["include", "string"],
      ["section", "string"],
      ["sections", "string"],
      ["echo", "expression"],
      ["increment", "identifier"],
      ["decrement", "identifier"],
    ].reduce(
      (symbols, [identifier, arg_type]) => 
        (symbols[identifier] = ($) => 
          seq(identifier, $[arg_type]),
          symbols
        ),
      {},
    ),
    layout: ($) => seq("layout", choice($.string, "none")),


    filter: ($) =>
      seq(
        field("body", $.expression),
        "|",
        field("name", $.identifier),
        optional(seq(":", $.argument_list))
      ),

    access: ($) =>
      seq(
        field("receiver", choice($.access, $.identifier)),
        choice(
          seq(
            ".",
            field("method", $.identifier)
          ),
          seq(
            "[", 
            field("method", choice($.number, $.string)), 
            "]"
          )
        ),
      ),

    argument_list: ($) =>
      seq(
        choice($._literal, $.identifier, $.access, $.argument),
        repeat(seq(",", choice($._literal, $.identifier, $.access, $.argument)))
      ),

    argument: ($) =>
      seq(
        field("key", $.identifier),
        ":",
        field("value", choice($._literal, $.identifier, $.access))
      ),

    assignment: ($) =>
      seq(
        "assign",
        field("variable_name", $.identifier),
        "=",
        field("value", $.expression)
      ),

    _literal: ($) => choice($.string, $.number, $.boolean),

    string: (_) => 
      choice(
        seq("'", /[^']*/, "'"),
        seq('"', /[^"]*/, '"')
      ),

    number: (_) => /-?\d*\.?\d+/,

    boolean: (_) => choice("true", "false"),


    render: ($) =>
      seq(
        field("render", "render"),
        field( "rendered_file", $.string),
        optional(
          field(
            "param",
            choice(
              seq(",", $.argument_list),
              $.opt_as_expr)
          )
        )
      ),

    opt_as_expr: ($) => 
      seq(
        choice("with", "for"),
        field("item", $.identifier),
        optional(
          seq(
            "as",
            field("identifier", $.identifier)
          )
        )
      ),

    identifier: (_) => /([a-zA-Z][0-9a-zA-Z_-]*)/,

    predicate: ($) =>
      choice(
        ...[
          ["+", "binary_plus"],
          ["-", "binary_plus"],
          ["*", "binary_times"],
          ["/", "binary_times"],
          ["%", "binary_times"],
          ["^", "binary_exp"],
          ["==", "binary_relation"],
          ["<", "binary_relation"],
          ["<=", "binary_relation"],
          ["!=", "binary_relation"],
          [">=", "binary_relation"],
          [">", "binary_relation"],
          ["and", "clause_connective"],
          ["or", "clause_connective"],

          //special case?
          ["contains", "contains"],
        ].map(([operator, precedence]) =>
          prec.left(
            precedence,
            seq(
              field("left", $.expression),
              field("operator", operator),
              field("right", $.expression)
            )
          )
        )
      ),

    range: ($) => 
      seq(
        "(", 
        choice($.identifier, $.access, $.number),
        "..", 
        choice($.identifier, $.access, $.number), 
        ")"
      ),


    //////////////
    // Comments //
    //////////////

    //TODO: inline comments, may need scanner
    _inline_comment: $ => seq("#", repeat(/./), $._tag_close),

    _paired_comment: ($) =>
      seq(
        alias($._tag_open, ""), "comment", alias($._tag_close, ""), 
        repeat(/./),
        //hacky way of dealing with {% terminating sequence 
        "endcomment", alias($._tag_close, ""), 
      ),


    // TODO: distinguish between "{{" and "{%" delmiters
    _tag_open: (_) => choice("{{", "{{-", "{%", "{%-"),

    _tag_close: (_) => choice("}}", "-}}", "%}", "-%}"),
  },

});

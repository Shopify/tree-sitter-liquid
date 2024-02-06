const PRECS = {
  primary: 1,
  else_if: 1,
  else: 2,
}

// refrences
// https://github.com/ngalaiko/tree-sitter-go-template/

module.exports = grammar({
  name: "liquid",

  conflicts: ($) => [
    [$.else_tag],
    [$.elsif_tag],
    [$.when_tag],
    [$.else_statement],
    [$.elsif_statement],
    [$.when_statement],
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

    content: (_) => 
      choice(
        /[^{]+|\{|%/, 
        '{%%', 
        '{{{'
      ),

    tag: ($) => choice($._unpaired_tag, $._paired_tag),

    //TODO:
    //raw tag
    //form tag
    //javascript tag
    //stylesheet tag
    _paired_tag: ($) => 
      choice(
        $.if_tag,
        $.unless_tag,
        $.case_tag,
        $.for_loop_tag,
        $.capture_tag,
        $.schema_tag,
        alias($._paired_comment, $.comment),
      ),

    _unpaired_tag: ($) => 
      seq(
        $._tag_open,
        choice($.expression, $.statement, $.liquid_tag),
        $._tag_close,
      ),

    liquid_tag: ($) => seq("liquid", repeat($._liquid_node)),

    _liquid_node: ($) =>
      seq(
        choice(
          $.expression,
          $.statement,
          $._paired_statement,
        ),
        /(\r\n|\r|\n)/,
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

        //currently not working
        alias($._inline_comment, $.comment),
      ),

    _paired_statement: ($) =>
      choice(
        $.if_statement,
        $.unless_statement,
        $.case_statment,
        $.for_loop_statement,
        $.capture_statement,
      ),

    /////////////////
    // Paired Tags //
    /////////////////

    // TODO: cycle, pageinate, tablerow.. handle break & continue explicitly?
    // https://shopify.dev/docs/api/liquid/tags/iteration-tags
    for_loop_tag: ($) => 
      prec(
        1,
        seq(
          $._tag_open, 
          "for", field("item", $.identifier), "in", 
          field("iterator", choice($.identifier, $.access, $.range)), 
          optional(field("modifier", choice($.argument_list, $.identifier))), 
          $._tag_close,

          field("body", alias(repeat($._node), $.block)),
          optional(field("alternative", $.else_tag)),

          prec.right(
            seq(
              $._tag_open, 
              "endfor", 
              $._tag_close
            )
          )
        )
      ),


    unless_tag: ($) =>
      seq(
        $._tag_open, 
        "unless", field("condition", $.expression), 
        $._tag_close,

        field("consequence", alias(repeat($._node), $.block)),

        $._tag_open,
        "endunless", 
        $._tag_close, 
      ),

    if_tag: ($) =>
      seq(
        $._tag_open, 
        "if", field("condition", $.expression), 
        $._tag_close, 

        field("consequence", alias(repeat($._node), $.block)),
        repeat(field("alternative", $.elsif_tag)),
        optional(field("alternative", $.else_tag)),

        prec.right(
          seq(
            $._tag_open, 
            "endif", 
            $._tag_close
          )
        ), 
      ),

    elsif_tag: ($) =>
      prec.dynamic(
        PRECS.else_if,
        seq(
          $._tag_open, 
          "elsif", field("condition", $.expression), 
          $._tag_close,

          alias(repeat($._node), $.block),
        ),
      ),

    else_tag: ($) =>
      prec.dynamic(
        PRECS.else,
        seq(
          $._tag_open, 
          "else",
          $._tag_close,

          alias(repeat($._node), $.block),
        )
      ),

    when_tag: ($) => 
      prec.dynamic(
        PRECS.else_if,
        seq(
          // TODO: condtion should be more constrained -- https://shopify.dev/docs/api/liquid/tags/case
          $._tag_open, "when", 
          field("condition", $.expression), 
          $._tag_close,

          field("consequence", alias(repeat($._node), $.block)),
        ),
      ),

    case_tag: ($) =>
      seq(
        $._tag_open, 
        "case", field("receiver", choice($.identifier, $.access)), 
        $._tag_close,

        field("conditions", alias(repeat($.when_tag), $.block)),
        optional(field("alternative", $.else_tag)),

        prec.right(
          seq(
            $._tag_open, 
            "endcase", 
            $._tag_close
          )
        ),
      ),


    capture_tag: ($) => 
      seq(
        $._tag_open,
        "capture", field("variable", $.identifier),
        $._tag_close,

        field("value", alias(repeat($._node), $.block)),

        prec.right(
          seq(
            $._tag_open, 
            "endcapture", 
            $._tag_close
          )
        ),
      ),

    schema_tag: ($) =>
      seq(
        $._tag_open,
        "schema",
        $._tag_close,

        $.content,

        $._tag_open, 
        "endschema", 
        $._tag_close
      ),


    //////////////////////////////////////
    // Paired Statements For Liquid Tag //
    //////////////////////////////////////

    for_loop_statement: ($) => 
      prec(
        1,
        seq(
          "for", field("item", $.identifier), "in", 
          field("iterator", choice($.identifier, $.access, $.range)), 
          optional(field("modifier", choice($.argument_list, $.identifier))), 

          field("body", alias(repeat($._liquid_node), $.block)),
          optional(field("alternative", $.else_statement)),

          prec.right("endfor"),
        )
      ),

    unless_statement: ($) =>
      seq(
        "unless", field("condition", $.expression),

        field("consequence", alias(repeat($._liquid_node), $.block)),

        "endunless",
      ),

    if_statement: ($) =>
      seq(
        "if", field("condition", $.expression),

        field("consequence", alias(repeat($._liquid_node), $.block)),
        repeat(field("alternative", $.elsif_statement)),
        optional(field("alternative", $.else_statement)),

        prec.right("endif"), 
      ),

    elsif_statement: ($) =>
      prec.dynamic(
        PRECS.else_if,
        seq(
          "elsif", field("condition", $.expression),
          alias(repeat($._liquid_node), $.block),
        ),
      ),

    else_statement: ($) =>
      prec.dynamic(
        PRECS.else,
        seq(
          "else",
          alias(repeat($._liquid_node), $.block),
        )
      ),

    when_statement: ($) => 
      prec.dynamic(
        PRECS.else_if,
        seq(
          // TODO: condtion should be more constrained -- https://shopify.dev/docs/api/liquid/tags/case
          "when", field("condition", $.expression),

          field("consequence", alias(repeat($._liquid_node), $.block)),
        ),
      ),

    case_statment: ($) =>
      seq(
        "case", field("receiver", choice($.identifier, $.access)),

        field("conditions", alias(repeat($.when_statement), $.block)),
        optional(field("alternative", $.else_statement)),

        prec.right("endcase"),
      ),

    capture_statement: ($) => 
      seq(
        "capture", field("variable", $.identifier),

        field("value", alias(repeat($._liquid_node), $.block)),

        prec.right("endcapture"),
      ),


    /////////////////////////////////////////
    // Unpaired Expressions And Statements //
    /////////////////////////////////////////

    // TODO: fix namespace conflicts between below keyword identifiers and access/method calls
    echo: $ => seq("echo", $.expression),
    include: $ => seq("include", $.string),
    section: $ => seq("section", $.string),
    sections: $ => seq("sections", $.string),
    increment: $ => seq("increment", $.identifier),
    decrement: $ => seq("decrement", $.identifier),
    layout: $ => seq("layout", choice($.string, "none")),

    // -- may need to handle embeded tags here - https://liquidjs.com/tags/render.html
    render: ($) =>
      seq(
        "render",
        field("file", $.string),
        optional(
          field(
            "modifier",
            choice(
              seq(",", $.argument_list),
              $.opt_as_expr
            )
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

    range: ($) => 
      seq(
        "(", 
        field("start", choice($.identifier, $.access, $.number)),
        "..", 
        field("end", choice($.identifier, $.access, $.number)),
        ")"
      ),


    ////////////////
    // Primitives //
    ////////////////

    identifier: (_) => /([a-zA-Z][0-9a-zA-Z_-]*)/,

    _literal: ($) => choice($.string, $.number, $.boolean),

    string: (_) => 
      choice(
        seq("'", /[^']*/, "'"),
        seq('"', /[^"]*/, '"')
      ),

    number: (_) => /-?\d*\.?\d+/,

    boolean: (_) => choice("true", "false"),

    nil: (_) => "nil",

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

          //TODO: is contains a special case?
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


    //////////////
    // Comments //
    //////////////

    //TODO: inline comments, may need scanner
    _inline_comment: $ => seq("#", repeat(/./), $._tag_close),

    _paired_comment: ($) =>
      seq(
        seq(alias($._tag_open, ""),"comment", alias($._tag_close, "")), 
        repeat(/./),

        //hacky way of dealing with {% terminating sequence 
        seq("endcomment", $._tag_close)
        // $._end_comment
      ),

    // trying to fix end commment..
    _end_comment: $ => 
      token(seq(choice("{{", "{%"),"endcomment", choice("}}", "%}"))), 

    ///////////////
    // Delmiters //
    ///////////////

    // TODO: distinguish between "{{" and "{%" delmiters
    _tag_open: (_) => 
      choice(
        "{{",
        "{{-",
        "{%",
        "{%-"
      ),

    _tag_close: (_) => 
      choice(
        "}}",
        "-}}",
        "%}",
        "-%}"
      ),
  },

});



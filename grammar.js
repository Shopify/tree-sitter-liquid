module.exports = grammar({
  name: "liquid",

  word: $ => $.identifier,

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
    ],
  ],

  rules: {

    template: ($) =>
      repeat(
        $._node
      ),

    //TODO: handle schemea tags inject json
    _node: ($) => 
      choice(
        $.tag,
        $.content,
      ),

    content: (_) => prec.right(repeat1(choice(/[^{]+|\{/, '{%%'))),

    tag: ($) => choice($._unpaired_tag, $._paired_tag),

    //TODO: handle {{ and {% seperately
    _tag_open: (_) => choice("{{", "{{-", "{%", "{%-"),

    _tag_close: (_) => choice("}}", "-}}", "%}", "-%}"),

    //TODO:
    //iteration
    //raw tag
    //form tag
    //javascript tag
    //stylesheet tag
    //capture tag
    _paired_tag: ($) => 
      choice(
        $.if_tag,
        $.unless_tag,
        $.comment,
      ),

    _unpaired_tag: ($) => 
      seq(
        $._tag_open,
        choice($.expression, $.statement, $.liquid_tag),
        $._tag_close,
      ),

    //TODO: field names are being dropped??
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


    //TODO: handle needed paired tags to statements for liquid tag
    _paired_statement: ($) =>
      choice(
        $.if_statement,
        $.unless_statement,
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

    // ...[
    //     "include",
    //     "section",
    //     "sections",
    //     "echo",
    //     "increment",
    //     "decrement",
    //     "layout",
    // ].reduce(
    //   (symbols, identifier) => 
    //     (symbols[identifier] = (_) => identifier, symbols),
    //   {},
    // ),

    // _unary_statement: ($) => 
    //   choice(...[
    //     [$.include, $.string],
    //     [$.section, $.string ],
    //     [$.sections, $.string],
    //     [$.echo, $.expression],
    //     [$.increment, $.identifier],
    //     [$.decrement, $.identifier],
    //     [$.layout, choice($.string, "none")],
    //   ].map(([fn, arg]) => seq(fn, arg))
    //   ),

    filter: ($) =>
      seq(
        seq(
          field("body", choice($.expression)),
          "|",
          field("name", $.identifier),
          optional(seq(":", $.argument_list))
        ),
      ),

    access: ($) =>
      seq(
        field("receiver", choice($.access, $.identifier)),
        ".",
        field("method", $.identifier)
      ),

    assignment: ($) =>
      seq(
        "assign",
        field("variable_name", $.identifier),
        "=",
        field("value", choice($.expression))
      ),

    _literal: ($) => choice($.string, $.number, $.boolean),

    string: (_) => 
      choice(
        seq("'", repeat(/[^']/), "'"),
        seq('"', repeat(/[^"]/), '"')
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

    argument_list: ($) =>
      seq(
        choice($._literal, $.identifier, $.argument),
        repeat(seq(",", choice($._literal, $.identifier, $.argument)))
      ),

    argument: ($) =>
      seq(
        field("key", $.identifier),
        ":",
        field("value", choice($._literal, $.identifier))
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

    // for (break, continue), cycle, pageinate, range, tablerow - https://shopify.dev/docs/api/liquid/tags/iteration-tags
    // should write inner tag logic as expressions for including in liquid tag??
    // iteration: () =>, 


    unless_tag: ($) =>
      seq(
        seq("unless", field("condition", $.expression)),
        field("consequence", alias(repeat($._node), $.block)),
        $._tag_open, "endunless", $._tag_close, 
      ),

    if_tag: ($) =>
      seq(
        $._tag_open, "if", field("condition", $.expression), $._tag_close, 
        field("consequence", alias(repeat($._node), $.block)),
        repeat(field("alternatives", $.elseif_tag)),
        optional(field("alternatives", $.else_tag)),
        $._tag_open, "endif", $._tag_close, 
      ),

    elseif_tag: ($) =>
      prec.left(
        1,
        seq(
          $._tag_open, "elseif", field("condition", $.expression), $._tag_close,
          field("consequence", alias(repeat($._node), $.block)),
        ),
      ),

    else_tag: ($) =>
      prec.left(
        1,
        seq(
          $._tag_open, "else", $._tag_close,
          field("consequence", alias(repeat($._node), $.block))
        ),
      ),

    //case: ($) =>,

    ////
    // paired statements for liquid tag
    ////
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

    //case: ($) =>,

    //TODO: inline comments
    comment: (_) =>
      seq(
        alias("{%", ""), "comment", alias("%}", ""), 
        repeat(/./),

        //hacky way of dealing with {% terminating sequence 
        "endcomment", alias("%}", ""), 
      ),
  },

});

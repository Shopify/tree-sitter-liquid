module.exports = grammar({
  name: "liquid",

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

    //handle schemea tags inject json
    //
    //include {%- and {- delimiters
    _node: ($) => 
      choice(
        $.tag,
        $.content,
      ),

    //move tag delimiters into statement/exp? re: comments highlighting
    tag: ($) => 
      seq(
        choice("{{", "{%"),
        choice($.expression, $.statement, $.comment),
        choice("}}", "%}")
      ),

    filter: ($) =>
      seq(
        seq(
          field("body", choice($.expression)),
          "|",
          field("name", $.identifier),
          optional(seq(":", $.argument_list))
        ),
      ),

    //form html gen and style
    //liquid tag
    //echo tag
    //raw tag
    //decrement / increment
    statement: ($) =>
      choice(
        $.assignment,
        $.conditional,
        // $.iteration
      ),

    expression: ($) => 
      choice(
        $._literal,
        $.filter,
        $.identifier,
        $.predicate,
        $.access,
        $.include,
        $.render
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

    //WIP
    //inline comment
    comment: (_) =>
      seq(
        "comment",
        repeat(/.|\s/),
        "endcomment"
      ),

    _literal: ($) => choice($.string, $.number, $.boolean),

    string: (_) => 
      choice(
        seq("'", /[^']*/, "'"),
        seq('"', /[^"]*/, '"')
      ),

    number: (_) => /\d+/,

    boolean: (_) => choice("true", "false"),

    identifier: (_) => /([a-zA-Z][0-9a-zA-Z_-]*)/,

    include: ($) =>
      seq(
        field("include", "include"),
        field("included_file", $.string)
      ),

    render: ($) =>
      seq(
        field("render", "render"),
        field("rendered_file", $.string)
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

    // for, cycle, pageinate, range, tablerow - https://shopify.dev/docs/api/liquid/tags/iteration-tags
    // iteration: () =>, 

    conditional: ($) => choice($.if_tag, $.unless_tag),

    unless_tag: ($) =>
      seq(
        seq("unless", field("condition", $.expression)),
        field("consequence", alias(repeat(choice($.statement, $.expression)), $.block)),
        "endunless",
      ),

    if_tag: ($) =>
      seq(
        seq("if", field("condition", $.expression)),
        field("consequence", alias(repeat(choice($.statement, $.expression)), $.block)),
        repeat(field("alternatives", $.elseif_tag)),
        optional(field("alternatives", $.else_tag)),
        seq(
          choice("{{", "{%"),
          "endif",
          choice("}}", "%}"),
        )
      ),

    elseif_tag: ($) =>
      prec.left(
        1,
        seq(
          seq("elseif", field("condition", $.expression)),
          field("consequence", alias(repeat(choice($.statement, $.expression)), $.block)),
        ),
      ),

    else_tag: ($) =>
      prec.left(
        1,
        seq("else", field("consequence", alias(repeat($.statement), $.block))),
      ),

    //todo: HANDLE {%-
    content: (_) => /([^\{]|\{[^{%#])+/
  },

});

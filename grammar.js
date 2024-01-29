module.exports = grammar({
  name: "liquid",

  precedences: ($) => [
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

    _node: ($) => 
      choice(
        $.tag,
        $.content,
      ),

    tag: ($) =>
      seq(
        choice("{{", "{%"),
        choice($.filter, $.expression, $.statement, $.comment),
        choice("}}", "%}")
      ),

    filter: ($) =>
      seq(
        field("body", choice($.expression, $.filter)),
        "|",
        field("name", $.identifier),
        optional(seq(":", $.argument_list))
      ),

    statement: ($) => choice($.assignment),

    expression: ($) => choice($._literal, $.identifier, $.predicate, $.call),

    // object w method etc
    call: ($) =>
      seq(
        field("receiver", choice($.call, $.identifier)),
        ".",
        field("method", $.identifier)
      ),

    assignment: ($) =>
      seq(
        "assign",
        field("variable_name", $.identifier),
        "=",
        field("value", choice($.filter, $.expression))
      ),

    //WIP
    //need to move tag delimiters into statement - see tag
    comment: ($) =>
      seq(
        "comment",
        repeat(/.|\s/),
        "endcomment"
      )
    ,

    _literal: ($) => choice($.string, $.number, $.boolean),

    string: (_) => 
      choice(
        seq("'", /[^']*/, "'"),
        seq('"', /[^"]*/, '"')
      ),

    number: (_) => /\d+/,

    boolean: (_) => choice("true", "false"),

    identifier: (_) => /([a-zA-Z][0-9a-zA-Z_-]*)/,

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

    content: ($) => /([^\{]|\{[^{%#])+/
  },

});

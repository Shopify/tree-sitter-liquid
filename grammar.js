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
    program: ($) =>
      repeat1(
        seq(
          choice("{{", "{%"),
          choice($.filter, $.expression, $.statement),
          choice("}}", "%}"),
        ),
      ),

    filter: ($) =>
      seq(
        field("body", choice($.expression, $.filter)),
        "|",
        field("name", $.identifier),
        optional(seq(":", $.argument_list)),
      ),

    statement: ($) =>
      choice($.assignment, $.translation_declaration, $.include_statement),

    expression: ($) =>
      choice(
        $._literal,
        $.identifier,
        $.predicate,
        $.call,
        $.translation_expression,
      ),

    call: ($) =>
      seq(
        field("receiver", choice($.call, $.identifier)),
        ".",
        field("method", $.identifier),
      ),

    assignment: ($) =>
      seq(
        "assign",
        field("variable_name", $.identifier),
        "=",
        field("value", choice($.filter, $.expression)),
      ),

    _literal: ($) => choice($.string, $.number, $.boolean),

    string: (_) => choice(seq("'", /[^']*/, "'"), seq('"', /[^"]*/, '"')),

    number: (_) => /\d+/,

    boolean: (_) => choice("true", "false"),

    identifier: (_) => /([a-zA-Z][0-9a-zA-Z_-]*)/,

    argument_list: ($) =>
      seq(
        choice($._literal, $.identifier, $.argument),
        repeat(seq(",", choice($._literal, $.identifier, $.argument))),
      ),

    argument: ($) =>
      seq(
        field("key", $.identifier),
        ":",
        field("value", choice($._literal, $.identifier)),
      ),

    include_statement: ($) =>
      seq(
        "include",
        '"',
        field("template_type", $.identifier),
        "/",
        field("template_name", $.identifier),
        '"',
      ),

    translation_expression: ($) =>
      seq("t", field("translation_key", choice($.string, $.identifier))),

    translation_declaration: ($) =>
      seq(
        "t=",
        field("translation_key", $.string),
        repeat($.locale_declaration),
      ),

    locale_declaration: ($) =>
      seq(field("locale_key", $.identifier), ":", $.string),

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
              field("right", $.expression),
            ),
          ),
        ),
      ),
  },
});

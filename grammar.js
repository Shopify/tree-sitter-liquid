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
    template: $ => repeat($._template),

    _template: $ => choice(
      $.directive,
      $.output_directive,
      $.content
    ),

    directive: $ => seq(
      choice('{%', '{%-'),
      optional($.code),
      choice('%}', '-%}'),
    ),

    output_directive: $ => seq(
      choice('{{', '{{-'),
      optional($.code),
      choice('}}', '-}}'),
    ),

    content: _ => prec.right(repeat1(choice(/[^{]+|\{/, '{%%'))),

    code: $ => repeat1(
      choice(
        $.filter,
        $.assignment,
        $.for,
        $._expression,
      ),
    ),

    filter: ($) => seq(
      field("body", choice($._expression, $.filter)),
      "|",
      field("name", $.identifier),
      optional(seq(":", $.argument_list))
    ),

    argument_list: ($) => seq(
      choice($._literal, $.identifier, $.argument),
      repeat(seq(",", choice($._literal, $.identifier, $.argument)))
    ),

    argument: ($) => seq(
      field("key", $.identifier),
      ":",
      field("value", choice($._literal, $.identifier))
    ),

    assignment: ($) => seq(
      "assign",
      field("variable_name", $.identifier),
      "=",
      field("value", choice($.filter, $._expression))
    ),

    for: ($) => seq(
      "for",
      field("loop_variable", $.identifier),
      "in",
      field("iterator", $._expression),
      "%}",
      choice(
        seq(
          field("body", repeat1($._template)),
          "{%",
          "endfor",
        ),
        seq(
          "{%",
          "endfor",
        ),
      ),
    ),

    _expression: ($) => choice(
      $.call,
      $.binary_expression,
      $.identifier,
      $._literal,
    ),

    call: ($) => seq(
      field("receiver", choice($.call, $.identifier)),
      ".",
      field("method", $.identifier)
    ),

    binary_expression: ($) => choice(
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
            field("left", $._expression),
            field("operator", operator),
            field("right", $._expression)
          )
        )
      )
    ),

    identifier: (_) => /([a-zA-Z][0-9a-zA-Z_-]*)/,
    _literal: ($) => choice($.string, $.number, $.boolean),
    string: (_) => choice(seq("'", /[^']*/, "'"), seq('"', /[^"]*/, '"')),
    number: (_) => /\d+/,
    boolean: (_) => choice("true", "false"),
  },
});

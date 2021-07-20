module.exports = grammar({
  name: 'liquid',

  precedences: $ => [
    [
      'unary_not',
      'binary_exp',
      'binary_times',
      'binary_plus',
      'binary_in',
      'binary_compare',
      'binary_relation',
      'clause_connective',
    ],
  ],

  rules: {
    program: $ => repeat1(
      seq(
        choice('{{', '{%'),
        choice(
          $.expression,
          $.statement
        ),
        choice('}}', '%}'),
      ),
    ),

    filter: $ => seq(
      "|",
      field('name', $.identifier),
      optional(
        seq(
          ":",
          $.argument_list,
        ),
      ),
    ),

    statement: $ => choice(
      $.assignment,
    ),

    _expression: $ => choice(
      $._literal,
      $.predicate
    ),

    expression: $ => seq(
      $._expression,
      repeat(
        $.filter
      )
    ),

    assignment: $ => seq(
      "assign",
      field('variable_name', $.identifier),
      "=",
      field('value', $.expression),
    ),

    _literal: $ => choice(
      $.string,
      $.number
    ),

    string: _ => choice(
      seq("'", /[^']*/, "'"),
      seq('"', /[^"]*/, '"'),
    ),

    number: _ => /\d+/,

    identifier: _ => /([a-zA-Z_$][0-9a-zA-Z_]*)/,

    argument_list: $ => seq(
      choice($._literal, $.identifier),
      repeat(
        seq(",",
          choice($._literal, $.identifier),
        ),
      ),
    ),

    predicate: $ => choice(
      ...[
        ['+', 'binary_plus'],
        ['-', 'binary_plus'],
        ['*', 'binary_times'],
        ['/', 'binary_times'],
        ['%', 'binary_times'],
        ['^', 'binary_exp'],
        ['==', 'binary_relation'],
        ['<', 'binary_relation'],
        ['<=', 'binary_relation'],
        ['!=', 'binary_relation'],
        ['>=', 'binary_relation'],
        ['>', 'binary_relation'],
        ['and', 'clause_connective'],
        ['or', 'clause_connective'],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression)
        ))
      )
    ),
  }
});

module.exports = grammar({
  name: 'liquid',

  rules: {
    program: $ => seq(
      '{{',
      $.expression,
      '}}',
    ),

    expression: $ => choice(
      $.literal_string,
    ),

    literal_string: _ => choice(
      seq("'", /[^']*/, "'"),
      seq('"', /[^"]*/, '"'),
    ),
    _number: _ => /\d+/,

    identifier: $ => choice(
      $._identifier,
      seq('`', $._identifier, '`'),
    ),
    _identifier: _ => /([a-zA-Z_$][0-9a-zA-Z_]*)/,
  }
});

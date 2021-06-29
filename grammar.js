module.exports = grammar({
  name: 'liquid',

  rules: {
    program: $ => seq(
      "Hello",
      "Liquid",
    )
  }
});

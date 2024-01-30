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
    _node: ($) => 
      choice(
        $.tag,
        $.content,
      ),

    content: (_) => /([^\{]|\{[^{%#])+/,

    tag: ($) => choice($._unpaired_tag, $._paired_tag),

    _tag_open: (_) => choice("{{", "{{-", "{%", "{%-"),

    _tag_close: (_) => choice("}}", "-}}", "%}", "-%}"),

    _paired_tag: ($) => 
      choice(
        $.conditional, 
        $.comment
        // $.iteration
      ),

    _unpaired_tag: ($) => 
      seq(
        $._tag_open,
        choice($.expression, $.statement),
        $._tag_close,
      ),

    //form html gen and style
    //liquid tag
    //echo tag
    //raw tag
    //decrement / increment
    statement: ($) =>
      choice(
        $.assignment,
        //...
      ),

    expression: ($) => 
      choice(
        $._literal,
        $.filter,
        $.identifier,
        $.predicate,
        $.access,

        //statements? 
        $.include,
        $.render
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

    //WIP
    //erroring on liquid tag block content
    //inline comment
    comment: ($) =>
      seq(
        $._tag_open, "comment", $._tag_close, 
        repeat(/.|\s/),
        $._tag_open, "endcomment", $._tag_close, 
      ),

  },

});

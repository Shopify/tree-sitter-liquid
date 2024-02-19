const PRECS = {
  primary: 1,
  elsif: 1,
  else: 2,
}

module.exports = grammar({
  name: "liquid",

  word: ($) => $.identifier,

  conflicts: ($) => [
    [$.else_tag],
    [$.elsif_tag],
    [$.when_tag],
    [$.else_liq],
    [$.elsif_liq],
    [$.when_liq],
  ],

  supertypes: $ => [
    $.statement,
    $.expression,
  ],

  externals: ($) => [
    $._inline_comment_content,
    $._paired_comment_content,
    $._paired_comment_content_liq,
    $.raw_content,
    // check if scanner is in error recovery mode
    $.error_sentinel,
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
      "contains",
    ],
  ],

  rules: {

    template: ($) =>
      repeat(
        $._node
      ),

    _node: ($) => 
      choice(
        $.directive,
        $.content,
        $.comment,
      ),

    content: (_) => 
      choice(
        /[^{]+|\{[^{%]/, 
        '{%%', 
        '{{{'
      ),

    directive: ($) => 
      choice(
        $._unpaired_tag,
        $._paired_tag,
        $._output_directive,
      ),

    _unpaired_tag: ($) => 
      tag(
        choice(
          $.statement, 
          $.liquid_tag
        )
      ),

    _output_directive: ($) => output($.expression),

    liquid_tag: ($) => 
      seq(
        "liquid", 
        repeat(
          choice(
            $._liquid_node,
            alias($.comment_liq, $.comment)
          )
        )
      ),

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
        $.layout,
        $.cycle,
        $.break,
        $.continue,
      ),


    _paired_statement: ($) =>
      choice(
        $.if_liq,
        $.unless_liq,
        $.case_liq,
        $.for_loop_liq,
        $.capture_liq,
        $.tablerow_liq,
        $.form_liq,
        $.paginate_liq,
      ),

    _paired_tag: ($) => 
      choice(
        $.if_tag,
        $.unless_tag,
        $.case_tag,
        $.for_loop_tag,
        $.capture_tag,
        $.tablerow_tag,
        $.form_tag,
        $.paginate_tag,
        $.schema_tag,
        $.raw_tag,
        $.style_tag,
        $.javascript_tag,
      ),

    expression: ($) => 
      choice(
        $._literal,
        $.filter,
        $.identifier,
        $.predicate,
        $.access,
      ),

    _iterator: ($) => 
      prec.left(
        PRECS.primary, 
        seq(
          field(
            "iterator", choice($.identifier, $.access, $.range)
          ), 
          optional(
            field("modifier", choice($.argument_list, $.identifier))
          ), 
        )
      ),

    _page_iterator: ($) => 
      prec.left(
        PRECS.primary,
        seq(
          field(
            "iterator", choice($.identifier, $.access, $.number)
          ), 
          optional(
            field(
              "modifier", 
              seq(",", choice($.argument_list, $.identifier))
            )
          )
        )
      ), 

    ///////////////////////
    // Paired Statements //
    ///////////////////////

    for_loop_tag: ($) => 
      seq(
        tag(
          "for", 
          field("item", $.identifier), 
          "in", 
          $._iterator,
        ),

        field("body", alias(repeat($._node), $.block)),

        optional(field("alternative", $.else_tag)),

        prec.right(
          tag("endfor")
        )
      ),

    unless_tag: ($) =>
      seq(
        tag(
          "unless", field("condition", $.expression), 
        ),

        field("consequence", alias(repeat($._node), $.block)),
        repeat(field("alternative", $.elsif_tag)),
        optional(field("alternative", $.else_tag)),

        prec.right(
          tag("endunless")
        )
      ),

    if_tag: ($) =>
      seq(
        tag( 
          "if", field("condition", $.expression), 
        ),

        field("consequence", alias(repeat($._node), $.block)),
        repeat(field("alternative", $.elsif_tag)),
        optional(field("alternative", $.else_tag)),

        prec.right(
          tag("endif"), 
        ), 
      ),

    elsif_tag: ($) =>
      prec.dynamic(
        PRECS.elsif,
        seq(
          tag("elsif", field("condition", $.expression)),

          alias(repeat($._node), $.block),
        ),
      ),

    else_tag: ($) =>
      prec.dynamic(
        PRECS.else,
        seq(
          tag("else"),
          alias(repeat($._node), $.block),
        )
      ),

    when_tag: ($) => 
      prec.dynamic(
        PRECS.elsif,
        seq(
          tag(
            "when", 
            field(
              "condition", 
              choice(
                $.predicate,
                $.argument_list,
              )
            )
          ),

          field("consequence", alias(repeat($._node), $.block)),
        ),
      ),

    case_tag: ($) =>
      seq(
        tag(
          "case", field("receiver", choice($.identifier, $.access)), 
        ),

        field("conditions", alias(repeat($.when_tag), $.block)),
        optional(field("alternative", $.else_tag)),

        prec.right(
          tag("endcase"),
        ),
      ),

    capture_tag: ($) => 
      seq(
        tag( 
          "capture", field("variable", $.identifier),
        ),

        field("value", alias(repeat($._node), $.block)),

        prec.right(
          tag("endcapture"),
        ),
      ),

    tablerow_tag: ($) =>
      seq(
        tag(
          "tablerow",
          field("item", $.identifier),
          "in",
          $._iterator,
        ),

        field("body", alias(repeat($._node), $.block)),

        prec.right(
          tag("endtablerow"),
        )
      ),

    paginate_tag: ($) => 
      seq(
        tag(
          "paginate",
          field("item", choice($.identifier, $.access)),
          "by",
          $._page_iterator,
        ),

        field("body", alias(repeat($._node), $.block)),

        prec.right(
          tag("endpaginate")
        )
      ),

    schema_tag: ($) =>
      seq(
        tag("schema"),

        repeat($.content),

        tag("endschema"), 
      ),

    raw_tag: ($) =>
      seq(
        tag("raw"),

        $.raw_content,
        optional($.raw_tag),

        tag("endraw"), 
      ),

    style_tag: ($) =>
      seq(
        tag("style"),

        repeat($._node),

        tag("endstyle"), 
      ),

    javascript_tag: ($) =>
      seq(
        tag("javascript"),

        repeat($.content),

        tag("endjavascript"), 
      ),

    form_tag: ($) =>
      seq(
        tag(
          "form",
          field("type", $.string),
          optional(
            field(
              "parameters", 
              seq(",", $.argument_list
              )
            )
          ),
        ),

        repeat($._node),

        tag("endform"),
      ),


    //////////////////////////////////////
    // Paired Statements For Liquid Tag //
    //////////////////////////////////////


    for_loop_liq: ($) => 
      seq(
        "for", 
        field("item", $.identifier), 
        "in", 
        $._iterator,

        field("body", alias(repeat($._liquid_node), $.block)),

        optional(field("alternative", $.else_liq)),

        prec.right("endfor"),
      ),

    unless_liq: ($) =>
      seq(
        "unless", field("condition", $.expression),

        field("consequence", alias(repeat($._liquid_node), $.block)),
        repeat(field("alternative", $.elsif_liq)),
        optional(field("alternative", $.else_liq)),

        prec.right("endunless"),
      ),

    if_liq: ($) =>
      seq(
        "if", field("condition", $.expression),

        field("consequence", alias(repeat($._liquid_node), $.block)),
        repeat(field("alternative", $.elsif_liq)),
        optional(field("alternative", $.else_liq)),

        prec.right("endif"), 
      ),

    elsif_liq: ($) =>
      prec.dynamic(
        PRECS.elsif,
        seq(
          "elsif", field("condition", $.expression),
          alias(repeat($._liquid_node), $.block),
        ),
      ),

    else_liq: ($) =>
      prec.dynamic(
        PRECS.else,
        seq(
          "else",
          alias(repeat($._liquid_node), $.block),
        )
      ),

    when_liq: ($) => 
      prec.dynamic(
        PRECS.elsif,
        seq(
          "when", 
          field(
            "condition", 
            choice(
              $.predicate,
              $.argument_list,
            )
          ),

          field("consequence", alias(repeat($._liquid_node), $.block)),
        ),
      ),

    case_liq: ($) =>
      seq(
        "case", field("receiver", choice($.identifier, $.access)),

        field("conditions", alias(repeat($.when_liq), $.block)),
        optional(field("alternative", $.else_liq)),

        prec.right("endcase"),
      ),

    capture_liq: ($) => 
      seq(
        "capture", field("variable", $.identifier),

        field("value", alias(repeat($._liquid_node), $.block)),

        prec.right("endcapture"),
      ),

    tablerow_liq: ($) =>
      seq(
        "tablerow",
        field("item", $.identifier),
        "in",
        $._iterator,

        field("body", alias(repeat($._liquid_node), $.block)),

        prec.right("endtablerow"),
      ),

    paginate_liq: ($) => 
      seq(
        "paginate",
        field("item", choice($.identifier, $.access)),
        "by",
        $._page_iterator,

        field("body", alias(repeat($._liquid_node), $.block)),

        prec.right("endpaginate")
      ),

    form_liq: ($) =>
      seq(
        "form",
        field("type", $.string),
        optional(
          field(
            "parameters", 
            seq(",", $.argument_list
            )
          )
        ),

        repeat($._liquid_node),

        "endform",
      ),


    /////////////////////////
    // Unpaired Statements //
    /////////////////////////
    
    break: (_) => "break",

    continue: (_) => "continue",
    
    echo: $ => seq("echo", $.expression),

    include: $ => seq("include", $.string),

    section: $ => seq("section", $.string),

    sections: $ => seq("sections", $.string),

    increment: $ => seq("increment", $.identifier),

    decrement: $ => seq("decrement", $.identifier),

    layout: $ => seq("layout", choice($.string, "none")),

    render: ($) =>
      seq(
        "render",
        field("file", $.string),
        optional(
          choice(
            field("arguments", 
              seq(",", $.argument_list)
            ),
            field(
              "iteration", 
              seq("for", $._render_param)
            ),
            field("with", 
              seq("with", $._render_param)
            )
          )
        )
      ),

    _render_param: ($) => 
      seq(
        $.identifier,
        optional(
          seq(
            "as", 
            field("item", $.identifier)
          )
        ),
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
            field("property", $.identifier)
          ),
          seq(
            "[", 
            field("property", choice($.number, $.string)), 
            "]"
          )
        ),
      ),

    argument_list: ($) =>
      sep1(
        choice($._literal, $.identifier, $.access, $.argument), 
        ","
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

    cycle: ($) => 
      seq(
        "cycle",
        optional(
          field("group_name", seq($.string, ":"))
        ),
        field(
          "group_item", 
          seq(
            choice($.number, $.string, $.access, $.identifier),
            repeat(
              seq(",", choice($.number, $.string, $.access, $.identifier))
            )
          )
        )
      ),


    ////////////////
    // Primitives //
    ////////////////

    identifier: (_) => /([a-zA-Z][0-9a-zA-Z_\?-]*)/,

    _literal: ($) => choice($.string, $.number, $.boolean),

    string: (_) => 
      choice(
        seq("'", /[^']*/, "'"),
        seq('"', /[^"]*/, '"')
      ),

    number: (_) => /-?\d*\.?\d+/,

    boolean: (_) => choice("true", "false"),

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

    comment: ($) => 
      choice(
        $._inline_comment, 
        $._paired_comment
      ),

    comment_liq: ($) => 
      choice(
        $._inline_comment_content,
        $._paired_comment_liq
      ),

    _inline_comment: ($) => 
      tag(
        repeat1($._inline_comment_content)
      ),

    _paired_comment: ($) =>
      seq(
        tag("comment"),

        $._paired_comment_content,
        optional($._paired_comment),

        tag("endcomment")
      ),

    _paired_comment_liq: ($) =>
      seq(
        "comment",
        $._paired_comment_content_liq,
        optional($._paired_comment_liq),
        "endcomment",
      )

  },
});


///////////////
// Delmiters //
///////////////

function tag(...rule) {
  return seq(
    choice("{%", "{%-"),
    ...rule,
    choice("%}", "-%}"),
  )
}

function output(...rule) {
  return seq(
    choice("{{", "{{-"),
    ...rule,
    choice("}}", "-}}"),
  )
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

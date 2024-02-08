const PRECS = {
  primary: 1,
  elsif: 1,
  else: 2,
}

// refrences
// https://github.com/ngalaiko/tree-sitter-go-template/

module.exports = grammar({
  name: "liquid",

  word: ($) => $.identifier,

  conflicts: ($) => [
    [$.else_tag],
    [$.elsif_tag],
    [$.when_tag],
    [$.else_statement],
    [$.elsif_statement],
    [$.when_statement],
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
      "contains"
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
        alias($._paired_comment, $.comment),
      ),

    content: (_) => 
      choice(
        /[^{]+|\{|%/, 
        '{%%', 
        '{{{'
      ),

    directive: ($) => 
      choice($._unpaired_tag, $._paired_tag, $._output_directive),

    //TODO:
    //form tag
    //javascript tag
    //stylesheet tag
    _paired_tag: ($) => 
      choice(
        $.if_tag,
        $.unless_tag,
        $.case_tag,
        $.for_loop_tag,
        $.capture_tag,
        $.tablerow_tag,
        $.paginate_tag,
        $.schema_tag,
        $.raw_tag,
      ),

    _unpaired_tag: ($) => 
      seq(
        $._tag_delimiter_open,
        choice($.statement, $.liquid_tag),
        $._tag_delimiter_close,
      ),

    _output_directive: ($) => 
      seq(
        $._output_delimiter_open,
        $.expression,
        $._output_delimiter_close,
      ),

    liquid_tag: ($) => seq("liquid", repeat($._liquid_node)),

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
        alias($._inline_comment, $.comment),
      ),

    expression: ($) => 
      choice(
        $._literal,
        $.filter,
        $.identifier,
        $.predicate,
        $.access,
      ),

    _paired_statement: ($) =>
      choice(
        $.if_statement,
        $.unless_statement,
        $.case_statment,
        $.for_loop_statement,
        $.capture_statement,
        $.tablerow_statement,
      ),

    _iterator: ($) => 
      prec.left(
        1, 
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
        1,
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


    /////////////////
    // Paired Tags //
    /////////////////

    for_loop_tag: ($) => 
      seq(
        $._tag_delimiter_open, 
        "for", 
        field("item", $.identifier), 
        "in", 
        $._iterator,
        $._tag_delimiter_close,

        field("body", 
          alias(
            repeat(
              choice(
                $._node,
                seq(
                  $._tag_delimiter_open, 
                  $.cycle, 
                  $._tag_delimiter_close
                )
              )
            ), 
            $.block
          )
        ),

        optional(field("alternative", $.else_tag)),

        prec.right(
          seq(
            $._tag_delimiter_open, 
            "endfor", 
            $._tag_delimiter_close
          )
        )
      ),

    unless_tag: ($) =>
      seq(
        $._tag_delimiter_open, 
        "unless", field("condition", $.expression), 
        $._tag_delimiter_close,

        field("consequence", alias(repeat($._node), $.block)),

        $._tag_delimiter_open,
        "endunless", 
        $._tag_delimiter_close, 
      ),

    if_tag: ($) =>
      seq(
        $._tag_delimiter_open, 
        "if", field("condition", $.expression), 
        $._tag_delimiter_close, 

        field("consequence", alias(repeat($._node), $.block)),
        repeat(field("alternative", $.elsif_tag)),
        optional(field("alternative", $.else_tag)),

        prec.right(
          seq(
            $._tag_delimiter_open, 
            "endif", 
            $._tag_delimiter_close
          )
        ), 
      ),

    elsif_tag: ($) =>
      prec.dynamic(
        PRECS.elsif,
        seq(
          $._tag_delimiter_open, 
          "elsif", field("condition", $.expression), 
          $._tag_delimiter_close,

          alias(repeat($._node), $.block),
        ),
      ),

    else_tag: ($) =>
      prec.dynamic(
        PRECS.else,
        seq(
          $._tag_delimiter_open, 
          "else",
          $._tag_delimiter_close,

          alias(repeat($._node), $.block),
        )
      ),

    when_tag: ($) => 
      prec.dynamic(
        PRECS.elsif,
        seq(
          // TODO: condtion should be more constrained -- https://shopify.dev/docs/api/liquid/tags/case
          $._tag_delimiter_open, "when", 
          field("condition", $.expression), 
          $._tag_delimiter_close,

          field("consequence", alias(repeat($._node), $.block)),
        ),
      ),

    case_tag: ($) =>
      seq(
        $._tag_delimiter_open, 
        "case", field("receiver", choice($.identifier, $.access)), 
        $._tag_delimiter_close,

        field("conditions", alias(repeat($.when_tag), $.block)),
        optional(field("alternative", $.else_tag)),

        prec.right(
          seq(
            $._tag_delimiter_open, 
            "endcase", 
            $._tag_delimiter_close
          )
        ),
      ),

    capture_tag: ($) => 
      seq(
        $._tag_delimiter_open,
        "capture", field("variable", $.identifier),
        $._tag_delimiter_close,

        field("value", alias(repeat($._node), $.block)),

        prec.right(
          seq(
            $._tag_delimiter_open, 
            "endcapture", 
            $._tag_delimiter_close
          )
        ),
      ),

    tablerow_tag: ($) =>
      seq(
        $._tag_delimiter_open,
        "tablerow",
        field("item", $.identifier),
        "in",
        $._iterator,
        $._tag_delimiter_close,

        field("body", alias(repeat($._node), $.block)),

        prec.right(
          seq(
            $._tag_delimiter_open,
            "endtablerow",
            $._tag_delimiter_close
          )
        )
      ),

    paginate_tag: ($) => 
      seq(
        $._tag_delimiter_open,
        "paginate",
        field("item", choice($.identifier, $.access)),
        "by",
        $._page_iterator,
        $._tag_delimiter_close,

        field("body", alias(repeat($._node), $.block)),

        prec.right(
          seq(
            $._tag_delimiter_open,
            "endpaginate",
            $._tag_delimiter_close,
          )
        )
      ),

    schema_tag: ($) =>
      seq(
        $._tag_delimiter_open,
        "schema",
        $._tag_delimiter_close,

        repeat($.content),

        $._tag_delimiter_open, 
        "endschema", 
        $._tag_delimiter_close
      ),

    raw_tag: ($) =>
      seq(
        $._tag_delimiter_open,
        "raw",
        $._tag_delimiter_close,

        alias(repeat($._node), $.content),

        $._tag_delimiter_open, 
        "endraw", 
        $._tag_delimiter_close
      ),


    //////////////////////////////////////
    // Paired Statements For Liquid Tag //
    //////////////////////////////////////

    for_loop_statement: ($) => 
      seq(
        "for", 
        field("item", $.identifier), 
        "in", 
        $._iterator,

        field("body", 
          alias(
            repeat(
              choice(
                $._liquid_node,
                $.cycle,
              )
            ), 
            $.block
          )
        ),

        optional(field("alternative", $.else_statement)),

        prec.right("endfor"),
      ),

    unless_statement: ($) =>
      seq(
        "unless", field("condition", $.expression),

        field("consequence", alias(repeat($._liquid_node), $.block)),

        "endunless",
      ),

    if_statement: ($) =>
      seq(
        "if", field("condition", $.expression),

        field("consequence", alias(repeat($._liquid_node), $.block)),
        repeat(field("alternative", $.elsif_statement)),
        optional(field("alternative", $.else_statement)),

        prec.right("endif"), 
      ),

    elsif_statement: ($) =>
      prec.dynamic(
        PRECS.elsif,
        seq(
          "elsif", field("condition", $.expression),
          alias(repeat($._liquid_node), $.block),
        ),
      ),

    else_statement: ($) =>
      prec.dynamic(
        PRECS.else,
        seq(
          "else",
          alias(repeat($._liquid_node), $.block),
        )
      ),

    when_statement: ($) => 
      prec.dynamic(
        PRECS.elsif,
        seq(
          // TODO: condtion should be more constrained -- https://shopify.dev/docs/api/liquid/tags/case
          "when", field("condition", $.expression),

          field("consequence", alias(repeat($._liquid_node), $.block)),
        ),
      ),

    case_statment: ($) =>
      seq(
        "case", field("receiver", choice($.identifier, $.access)),

        field("conditions", alias(repeat($.when_statement), $.block)),
        optional(field("alternative", $.else_statement)),

        prec.right("endcase"),
      ),

    capture_statement: ($) => 
      seq(
        "capture", field("variable", $.identifier),

        field("value", alias(repeat($._liquid_node), $.block)),

        prec.right("endcapture"),
      ),

    tablerow_statement: ($) =>
      seq(
        "tablerow",
        field("item", $.identifier),
        "in",
        $._iterator,

        field("body", alias(repeat($._liquid_node), $.block)),

        prec.right("endtablerow"),
      ),


    /////////////////////////////////////////
    // Unpaired Expressions And Statements //
    /////////////////////////////////////////

    echo: $ => seq("echo", $.expression),
    include: $ => seq("include", $.string),
    section: $ => seq("section", $.string),
    sections: $ => seq("sections", $.string),
    increment: $ => seq("increment", $.identifier),
    decrement: $ => seq("decrement", $.identifier),
    layout: $ => seq("layout", choice($.string, "none")),

    // -- may need to handle embeded tags here - https://liquidjs.com/tags/render.html
    render: ($) =>
      seq(
        "render",
        field("file", $.string),
        optional(
          field(
            "modifier",
            choice(
              seq(",", $.argument_list),
              $.opt_as_expr
            )
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
            field("method", $.identifier)
          ),
          seq(
            "[", 
            field("method", choice($.number, $.string)), 
            "]"
          )
        ),
      ),

    argument_list: ($) =>
      seq(
        choice($._literal, $.identifier, $.access, $.argument),
        repeat(seq(",", choice($._literal, $.identifier, $.access, $.argument)))
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
            choice($.string, $.access, $.identifier),
            repeat(
              seq(",", choice($.string, $.access, $.identifier))
            )
          )
        )
      ),


    ////////////////
    // Primitives //
    ////////////////

    identifier: (_) => /([a-zA-Z][0-9a-zA-Z_-]*)/,

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

          //TODO: is contains a special case?
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

    //TODO: inline comments, may need scanner
    _inline_comment: (_) => 
      repeat1(seq(
        "#", 
        repeat(/./),
      )),

    _paired_comment: ($) =>
      seq(
        alias($._tag_delimiter_open, ""),
        "comment", 
        alias($._tag_delimiter_close, ""), 

        repeat(/./),

        //hacky way of dealing with opening delimiter terminating sequence 
        "endcomment", 
        $._tag_delimiter_close
        // $._end_comment
      ),

    // trying to fix end commment..
    _end_comment: (_) => 
      token(seq(choice("{%", "{%-"),"endcomment", choice("%}", "-%}"))), 


    ///////////////
    // Delmiters //
    ///////////////

    _output_delimiter_open: (_) => choice("{{", "{{-"),

    _output_delimiter_close: (_) =>choice("}}", "-}}"),

    _tag_delimiter_open: (_) => choice("{%", "{%-"),

    _tag_delimiter_close: (_) => choice("%}", "-%}"),

  },
});



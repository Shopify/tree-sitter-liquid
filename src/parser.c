#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 123
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 10

enum {
  anon_sym_LBRACE_PERCENT = 1,
  anon_sym_LBRACE_PERCENT_DASH = 2,
  anon_sym_PERCENT_RBRACE = 3,
  anon_sym_DASH_PERCENT_RBRACE = 4,
  anon_sym_LBRACE_LBRACE = 5,
  anon_sym_LBRACE_LBRACE_DASH = 6,
  anon_sym_RBRACE_RBRACE = 7,
  anon_sym_DASH_RBRACE_RBRACE = 8,
  anon_sym_comment = 9,
  anon_sym_endcomment = 10,
  aux_sym_content_token1 = 11,
  anon_sym_LBRACE_PERCENT_PERCENT = 12,
  anon_sym_PIPE = 13,
  anon_sym_COLON = 14,
  anon_sym_COMMA = 15,
  anon_sym_assign = 16,
  anon_sym_EQ = 17,
  anon_sym_for = 18,
  anon_sym_in = 19,
  anon_sym_endfor = 20,
  anon_sym_DOT = 21,
  anon_sym_raw = 22,
  anon_sym_endraw = 23,
  anon_sym_PLUS = 24,
  anon_sym_DASH = 25,
  anon_sym_STAR = 26,
  anon_sym_SLASH = 27,
  anon_sym_PERCENT = 28,
  anon_sym_CARET = 29,
  anon_sym_EQ_EQ = 30,
  anon_sym_LT = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_BANG_EQ = 33,
  anon_sym_GT_EQ = 34,
  anon_sym_GT = 35,
  anon_sym_and = 36,
  anon_sym_or = 37,
  sym_identifier = 38,
  anon_sym_SQUOTE = 39,
  aux_sym_string_token1 = 40,
  anon_sym_DQUOTE = 41,
  aux_sym_string_token2 = 42,
  sym_number = 43,
  anon_sym_true = 44,
  anon_sym_false = 45,
  sym_raw_content = 46,
  sym_comment_content = 47,
  sym_template = 48,
  sym__template = 49,
  sym_directive = 50,
  sym_output_directive = 51,
  sym_comment_directive = 52,
  sym_content = 53,
  sym_code = 54,
  sym_filter = 55,
  sym_argument_list = 56,
  sym_argument = 57,
  sym_assignment = 58,
  sym_for = 59,
  sym_call = 60,
  sym_raw = 61,
  sym__expression = 62,
  sym_binary_expression = 63,
  sym__literal = 64,
  sym_string = 65,
  sym_boolean = 66,
  aux_sym_template_repeat1 = 67,
  aux_sym_content_repeat1 = 68,
  aux_sym_code_repeat1 = 69,
  aux_sym_argument_list_repeat1 = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_LBRACE_PERCENT_DASH] = "{%-",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_DASH_PERCENT_RBRACE] = "-%}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_LBRACE_LBRACE_DASH] = "{{-",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_DASH_RBRACE_RBRACE] = "-}}",
  [anon_sym_comment] = "comment",
  [anon_sym_endcomment] = "endcomment",
  [aux_sym_content_token1] = "content_token1",
  [anon_sym_LBRACE_PERCENT_PERCENT] = "{%%",
  [anon_sym_PIPE] = "|",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_assign] = "assign",
  [anon_sym_EQ] = "=",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_endfor] = "endfor",
  [anon_sym_DOT] = ".",
  [anon_sym_raw] = "raw",
  [anon_sym_endraw] = "endraw",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [sym_identifier] = "identifier",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_raw_content] = "content",
  [sym_comment_content] = "content",
  [sym_template] = "template",
  [sym__template] = "_template",
  [sym_directive] = "directive",
  [sym_output_directive] = "output_directive",
  [sym_comment_directive] = "comment_directive",
  [sym_content] = "content",
  [sym_code] = "code",
  [sym_filter] = "filter",
  [sym_argument_list] = "argument_list",
  [sym_argument] = "argument",
  [sym_assignment] = "assignment",
  [sym_for] = "for",
  [sym_call] = "call",
  [sym_raw] = "raw",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym__literal] = "_literal",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_LBRACE_PERCENT_DASH] = anon_sym_LBRACE_PERCENT_DASH,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_DASH_PERCENT_RBRACE] = anon_sym_DASH_PERCENT_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_LBRACE_LBRACE_DASH] = anon_sym_LBRACE_LBRACE_DASH,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_DASH_RBRACE_RBRACE] = anon_sym_DASH_RBRACE_RBRACE,
  [anon_sym_comment] = anon_sym_comment,
  [anon_sym_endcomment] = anon_sym_endcomment,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_LBRACE_PERCENT_PERCENT] = anon_sym_LBRACE_PERCENT_PERCENT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_assign] = anon_sym_assign,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_endfor] = anon_sym_endfor,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_raw] = anon_sym_raw,
  [anon_sym_endraw] = anon_sym_endraw,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [sym_identifier] = sym_identifier,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_raw_content] = sym_content,
  [sym_comment_content] = sym_content,
  [sym_template] = sym_template,
  [sym__template] = sym__template,
  [sym_directive] = sym_directive,
  [sym_output_directive] = sym_output_directive,
  [sym_comment_directive] = sym_comment_directive,
  [sym_content] = sym_content,
  [sym_code] = sym_code,
  [sym_filter] = sym_filter,
  [sym_argument_list] = sym_argument_list,
  [sym_argument] = sym_argument,
  [sym_assignment] = sym_assignment,
  [sym_for] = sym_for,
  [sym_call] = sym_call,
  [sym_raw] = sym_raw,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym__literal] = sym__literal,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endcomment] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endraw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_raw_content] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_content] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym__template] = {
    .visible = false,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_output_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_for] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_raw] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_iterator = 2,
  field_key = 3,
  field_left = 4,
  field_loop_variable = 5,
  field_method = 6,
  field_name = 7,
  field_operator = 8,
  field_receiver = 9,
  field_right = 10,
  field_value = 11,
  field_variable_name = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_iterator] = "iterator",
  [field_key] = "key",
  [field_left] = "left",
  [field_loop_variable] = "loop_variable",
  [field_method] = "method",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_receiver] = "receiver",
  [field_right] = "right",
  [field_value] = "value",
  [field_variable_name] = "variable_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 3},
  [4] = {.index = 7, .length = 2},
  [5] = {.index = 9, .length = 1},
  [6] = {.index = 10, .length = 1},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_method, 2},
    {field_receiver, 0},
  [2] =
    {field_body, 0},
    {field_name, 2},
  [4] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [7] =
    {field_value, 3},
    {field_variable_name, 1},
  [9] =
    {field_body, 2},
  [10] =
    {field_body, 3},
  [11] =
    {field_iterator, 3},
    {field_loop_variable, 1},
  [13] =
    {field_key, 0},
    {field_value, 2},
  [15] =
    {field_body, 5},
    {field_iterator, 3},
    {field_loop_variable, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 20,
  [23] = 2,
  [24] = 24,
  [25] = 4,
  [26] = 8,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 2,
  [31] = 6,
  [32] = 5,
  [33] = 7,
  [34] = 10,
  [35] = 11,
  [36] = 12,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 12,
  [41] = 6,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 47,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 58,
  [62] = 62,
  [63] = 62,
  [64] = 59,
  [65] = 57,
  [66] = 66,
  [67] = 66,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 72,
  [77] = 77,
  [78] = 78,
  [79] = 71,
  [80] = 75,
  [81] = 78,
  [82] = 74,
  [83] = 73,
  [84] = 77,
  [85] = 85,
  [86] = 86,
  [87] = 86,
  [88] = 85,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 97,
  [109] = 100,
  [110] = 90,
  [111] = 94,
  [112] = 100,
  [113] = 90,
  [114] = 114,
  [115] = 99,
  [116] = 98,
  [117] = 96,
  [118] = 99,
  [119] = 98,
  [120] = 95,
  [121] = 93,
  [122] = 104,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(57);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(141);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(90);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(141);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(90);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(90);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(141);
      if (lookahead == '%') ADVANCE(51);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(141);
      if (lookahead == '%') ADVANCE(51);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'c') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(141);
      if (lookahead == '%') ADVANCE(51);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'c') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(141);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '{') ADVANCE(63);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '}') ADVANCE(54);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 49:
      if (lookahead == 'w') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 'w') ADVANCE(89);
      END_STATE();
    case 51:
      if (lookahead == '}') ADVANCE(61);
      END_STATE();
    case 52:
      if (lookahead == '}') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == '}') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == '}') ADVANCE(66);
      END_STATE();
    case 55:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '%') ADVANCE(73);
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_DASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE_RBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_endcomment);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '{') ADVANCE(63);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_PERCENT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_assign);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_endfor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_raw);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_raw);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_endraw);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '}') ADVANCE(54);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '}') ADVANCE(61);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 56},
  [47] = {.lex_state = 56},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 56},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 56},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 56},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 56},
  [72] = {.lex_state = 56},
  [73] = {.lex_state = 56},
  [74] = {.lex_state = 56},
  [75] = {.lex_state = 56},
  [76] = {.lex_state = 56},
  [77] = {.lex_state = 56},
  [78] = {.lex_state = 56},
  [79] = {.lex_state = 56},
  [80] = {.lex_state = 56},
  [81] = {.lex_state = 56},
  [82] = {.lex_state = 56},
  [83] = {.lex_state = 56},
  [84] = {.lex_state = 56},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 55},
  [98] = {.lex_state = 142},
  [99] = {.lex_state = 139},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 55},
  [103] = {.lex_state = 55},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 55},
  [108] = {.lex_state = 55},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 139},
  [116] = {.lex_state = 142},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 139},
  [119] = {.lex_state = 142},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0},
};

enum {
  ts_external_token_raw_content = 0,
  ts_external_token_comment_content = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_raw_content] = sym_raw_content,
  [ts_external_token_comment_content] = sym_comment_content,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_raw_content] = true,
    [ts_external_token_comment_content] = true,
  },
  [2] = {
    [ts_external_token_comment_content] = true,
  },
  [3] = {
    [ts_external_token_raw_content] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_comment] = ACTIONS(1),
    [anon_sym_endcomment] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_assign] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_endfor] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_raw] = ACTIONS(1),
    [anon_sym_endraw] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_raw_content] = ACTIONS(1),
    [sym_comment_content] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(114),
    [sym__template] = STATE(46),
    [sym_directive] = STATE(46),
    [sym_output_directive] = STATE(46),
    [sym_comment_directive] = STATE(46),
    [sym_content] = STATE(46),
    [aux_sym_template_repeat1] = STATE(46),
    [aux_sym_content_repeat1] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(9),
    [aux_sym_content_token1] = ACTIONS(11),
    [anon_sym_LBRACE_PERCENT_PERCENT] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(15), 12,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 16,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [36] = 5,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(15), 6,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(21), 6,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(13), 9,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [76] = 2,
    ACTIONS(25), 12,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 17,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [110] = 9,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      anon_sym_CARET,
    ACTIONS(35), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(27), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(29), 8,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [157] = 2,
    ACTIONS(47), 12,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 16,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [190] = 7,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      anon_sym_CARET,
    ACTIONS(35), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(29), 10,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [233] = 2,
    ACTIONS(29), 12,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 16,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [266] = 11,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      anon_sym_CARET,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(35), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 6,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [317] = 3,
    ACTIONS(39), 1,
      anon_sym_CARET,
    ACTIONS(29), 12,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 15,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [352] = 5,
    ACTIONS(37), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      anon_sym_CARET,
    ACTIONS(35), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(29), 11,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 13,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [391] = 2,
    ACTIONS(59), 12,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 16,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [424] = 16,
    ACTIONS(63), 1,
      anon_sym_comment,
    ACTIONS(65), 1,
      anon_sym_assign,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_endfor,
    ACTIONS(71), 1,
      anon_sym_raw,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_number,
    STATE(3), 1,
      sym_call,
    STATE(48), 1,
      sym_filter,
    STATE(86), 1,
      sym_code,
    ACTIONS(61), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 4,
      sym_assignment,
      sym_for,
      sym_raw,
      aux_sym_code_repeat1,
    STATE(43), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [482] = 16,
    ACTIONS(63), 1,
      anon_sym_comment,
    ACTIONS(65), 1,
      anon_sym_assign,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_raw,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_number,
    ACTIONS(83), 1,
      anon_sym_endfor,
    STATE(3), 1,
      sym_call,
    STATE(48), 1,
      sym_filter,
    STATE(86), 1,
      sym_code,
    ACTIONS(61), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 4,
      sym_assignment,
      sym_for,
      sym_raw,
      aux_sym_code_repeat1,
    STATE(43), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [540] = 15,
    ACTIONS(63), 1,
      anon_sym_comment,
    ACTIONS(65), 1,
      anon_sym_assign,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_raw,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_number,
    STATE(3), 1,
      sym_call,
    STATE(48), 1,
      sym_filter,
    STATE(86), 1,
      sym_code,
    ACTIONS(61), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 4,
      sym_assignment,
      sym_for,
      sym_raw,
      aux_sym_code_repeat1,
    STATE(43), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [595] = 15,
    ACTIONS(65), 1,
      anon_sym_assign,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_raw,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_number,
    ACTIONS(87), 1,
      anon_sym_comment,
    STATE(3), 1,
      sym_call,
    STATE(48), 1,
      sym_filter,
    STATE(87), 1,
      sym_code,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(85), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    STATE(18), 4,
      sym_assignment,
      sym_for,
      sym_raw,
      aux_sym_code_repeat1,
    STATE(43), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [650] = 13,
    ACTIONS(91), 1,
      anon_sym_assign,
    ACTIONS(94), 1,
      anon_sym_for,
    ACTIONS(97), 1,
      anon_sym_raw,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_number,
    STATE(3), 1,
      sym_call,
    STATE(48), 1,
      sym_filter,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(17), 4,
      sym_assignment,
      sym_for,
      sym_raw,
      aux_sym_code_repeat1,
    STATE(43), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [701] = 13,
    ACTIONS(65), 1,
      anon_sym_assign,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_raw,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_number,
    STATE(3), 1,
      sym_call,
    STATE(48), 1,
      sym_filter,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(115), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(17), 4,
      sym_assignment,
      sym_for,
      sym_raw,
      aux_sym_code_repeat1,
    STATE(43), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [752] = 14,
    ACTIONS(65), 1,
      anon_sym_assign,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_raw,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_number,
    STATE(3), 1,
      sym_call,
    STATE(48), 1,
      sym_filter,
    STATE(85), 1,
      sym_code,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(117), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(18), 4,
      sym_assignment,
      sym_for,
      sym_raw,
      aux_sym_code_repeat1,
    STATE(43), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [804] = 14,
    ACTIONS(65), 1,
      anon_sym_assign,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_raw,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_number,
    STATE(3), 1,
      sym_call,
    STATE(48), 1,
      sym_filter,
    STATE(86), 1,
      sym_code,
    ACTIONS(61), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 4,
      sym_assignment,
      sym_for,
      sym_raw,
      aux_sym_code_repeat1,
    STATE(43), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [856] = 14,
    ACTIONS(65), 1,
      anon_sym_assign,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_raw,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_number,
    STATE(3), 1,
      sym_call,
    STATE(48), 1,
      sym_filter,
    STATE(88), 1,
      sym_code,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(119), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(18), 4,
      sym_assignment,
      sym_for,
      sym_raw,
      aux_sym_code_repeat1,
    STATE(43), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [908] = 14,
    ACTIONS(65), 1,
      anon_sym_assign,
    ACTIONS(67), 1,
      anon_sym_for,
    ACTIONS(71), 1,
      anon_sym_raw,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_number,
    STATE(3), 1,
      sym_call,
    STATE(48), 1,
      sym_filter,
    STATE(87), 1,
      sym_code,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(85), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    STATE(18), 4,
      sym_assignment,
      sym_for,
      sym_raw,
      aux_sym_code_repeat1,
    STATE(43), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [960] = 3,
    ACTIONS(121), 1,
      anon_sym_DOT,
    ACTIONS(15), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 13,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [984] = 5,
    ACTIONS(125), 1,
      anon_sym_COLON,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(129), 6,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1012] = 2,
    ACTIONS(25), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 14,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1034] = 2,
    ACTIONS(29), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 13,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1055] = 4,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(136), 6,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1080] = 4,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(140), 6,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(138), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1105] = 4,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(129), 6,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1130] = 3,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(15), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 13,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1153] = 2,
    ACTIONS(47), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 13,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1174] = 7,
    ACTIONS(146), 1,
      anon_sym_PERCENT,
    ACTIONS(148), 1,
      anon_sym_CARET,
    ACTIONS(142), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(144), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1205] = 6,
    ACTIONS(146), 1,
      anon_sym_PERCENT,
    ACTIONS(148), 1,
      anon_sym_CARET,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(142), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(144), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(27), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1234] = 3,
    ACTIONS(148), 1,
      anon_sym_CARET,
    ACTIONS(29), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1257] = 5,
    ACTIONS(146), 1,
      anon_sym_PERCENT,
    ACTIONS(148), 1,
      anon_sym_CARET,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(144), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(27), 10,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1284] = 2,
    ACTIONS(59), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 13,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1305] = 3,
    ACTIONS(125), 1,
      anon_sym_COLON,
    ACTIONS(136), 6,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1328] = 8,
    ACTIONS(146), 1,
      anon_sym_PERCENT,
    ACTIONS(148), 1,
      anon_sym_CARET,
    ACTIONS(154), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(142), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(144), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(156), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1360] = 2,
    ACTIONS(160), 6,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(158), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1380] = 2,
    ACTIONS(59), 6,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1400] = 2,
    ACTIONS(47), 6,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1420] = 2,
    ACTIONS(136), 6,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1440] = 7,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_CARET,
    ACTIONS(142), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(152), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(156), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(144), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(150), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1470] = 3,
    ACTIONS(164), 1,
      anon_sym_COLON,
    ACTIONS(166), 6,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(162), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1492] = 2,
    ACTIONS(170), 6,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(168), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1511] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(7), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      aux_sym_content_repeat1,
    ACTIONS(9), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(11), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    STATE(47), 6,
      sym__template,
      sym_directive,
      sym_output_directive,
      sym_comment_directive,
      sym_content,
      aux_sym_template_repeat1,
  [1540] = 7,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(179), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(71), 1,
      aux_sym_content_repeat1,
    ACTIONS(182), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(185), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    STATE(47), 6,
      sym__template,
      sym_directive,
      sym_output_directive,
      sym_comment_directive,
      sym_content,
      aux_sym_template_repeat1,
  [1569] = 3,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(21), 6,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1590] = 3,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(53), 6,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1611] = 6,
    ACTIONS(188), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(190), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(79), 1,
      aux_sym_content_repeat1,
    ACTIONS(192), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(194), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    STATE(56), 6,
      sym__template,
      sym_directive,
      sym_output_directive,
      sym_comment_directive,
      sym_content,
      aux_sym_template_repeat1,
  [1637] = 2,
    ACTIONS(198), 6,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1655] = 2,
    ACTIONS(202), 6,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(200), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1673] = 6,
    ACTIONS(204), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(207), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(79), 1,
      aux_sym_content_repeat1,
    ACTIONS(210), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(213), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    STATE(53), 6,
      sym__template,
      sym_directive,
      sym_output_directive,
      sym_comment_directive,
      sym_content,
      aux_sym_template_repeat1,
  [1699] = 2,
    ACTIONS(218), 6,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_raw,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(216), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1717] = 8,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      sym_number,
    STATE(2), 1,
      sym_call,
    STATE(49), 1,
      sym_filter,
    ACTIONS(228), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1747] = 6,
    ACTIONS(190), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    ACTIONS(230), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(79), 1,
      aux_sym_content_repeat1,
    ACTIONS(192), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(194), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    STATE(53), 6,
      sym__template,
      sym_directive,
      sym_output_directive,
      sym_comment_directive,
      sym_content,
      aux_sym_template_repeat1,
  [1773] = 7,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    STATE(23), 1,
      sym_call,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1800] = 7,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(236), 1,
      sym_number,
    STATE(23), 1,
      sym_call,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1827] = 7,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      sym_number,
    STATE(2), 1,
      sym_call,
    ACTIONS(228), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1854] = 7,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(240), 1,
      sym_number,
    STATE(23), 1,
      sym_call,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1881] = 7,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym_number,
    STATE(2), 1,
      sym_call,
    ACTIONS(228), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1908] = 7,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      sym_number,
    STATE(2), 1,
      sym_call,
    ACTIONS(228), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1935] = 7,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(246), 1,
      sym_number,
    STATE(23), 1,
      sym_call,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1962] = 7,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(248), 1,
      sym_number,
    STATE(23), 1,
      sym_call,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1989] = 7,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym_number,
    STATE(2), 1,
      sym_call,
    ACTIONS(228), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [2016] = 7,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(252), 1,
      sym_number,
    STATE(23), 1,
      sym_call,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [2043] = 7,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      sym_number,
    STATE(2), 1,
      sym_call,
    ACTIONS(228), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [2070] = 7,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym_number,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(264), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 4,
      sym_argument,
      sym__literal,
      sym_string,
      sym_boolean,
  [2096] = 6,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      sym_number,
    ACTIONS(264), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 4,
      sym_argument,
      sym__literal,
      sym_string,
      sym_boolean,
  [2119] = 6,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      sym_identifier,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(264), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 3,
      sym__literal,
      sym_string,
      sym_boolean,
  [2141] = 4,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      aux_sym_content_repeat1,
    ACTIONS(278), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    ACTIONS(276), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [2158] = 4,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      aux_sym_content_repeat1,
    ACTIONS(284), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    ACTIONS(282), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [2175] = 2,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(289), 6,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
  [2187] = 2,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 6,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
  [2199] = 2,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 6,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
  [2211] = 3,
    STATE(76), 1,
      aux_sym_content_repeat1,
    ACTIONS(299), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    ACTIONS(282), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [2225] = 2,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 6,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
  [2237] = 2,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 6,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
  [2249] = 3,
    STATE(76), 1,
      aux_sym_content_repeat1,
    ACTIONS(310), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    ACTIONS(276), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [2263] = 1,
    ACTIONS(297), 6,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
  [2272] = 1,
    ACTIONS(308), 6,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
  [2281] = 1,
    ACTIONS(293), 6,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
  [2290] = 1,
    ACTIONS(289), 6,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
  [2299] = 1,
    ACTIONS(304), 6,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
  [2308] = 1,
    ACTIONS(312), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [2313] = 1,
    ACTIONS(314), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [2318] = 1,
    ACTIONS(316), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [2323] = 1,
    ACTIONS(318), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [2328] = 1,
    ACTIONS(320), 1,
      anon_sym_PERCENT_RBRACE,
  [2332] = 1,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
  [2336] = 1,
    ACTIONS(324), 1,
      anon_sym_in,
  [2340] = 1,
    ACTIONS(326), 1,
      anon_sym_EQ,
  [2344] = 1,
    ACTIONS(328), 1,
      sym_comment_content,
  [2348] = 1,
    ACTIONS(330), 1,
      anon_sym_PERCENT_RBRACE,
  [2352] = 1,
    ACTIONS(332), 1,
      anon_sym_LBRACE_PERCENT,
  [2356] = 1,
    ACTIONS(334), 1,
      anon_sym_endcomment,
  [2360] = 1,
    ACTIONS(336), 1,
      sym_identifier,
  [2364] = 1,
    ACTIONS(338), 1,
      aux_sym_string_token2,
  [2368] = 1,
    ACTIONS(340), 1,
      aux_sym_string_token1,
  [2372] = 1,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
  [2376] = 1,
    ACTIONS(342), 1,
      anon_sym_LBRACE_PERCENT,
  [2380] = 1,
    ACTIONS(344), 1,
      sym_identifier,
  [2384] = 1,
    ACTIONS(346), 1,
      sym_identifier,
  [2388] = 1,
    ACTIONS(348), 1,
      anon_sym_PERCENT_RBRACE,
  [2392] = 1,
    ACTIONS(350), 1,
      anon_sym_endraw,
  [2396] = 1,
    ACTIONS(352), 1,
      sym_raw_content,
  [2400] = 1,
    ACTIONS(354), 1,
      sym_identifier,
  [2404] = 1,
    ACTIONS(356), 1,
      sym_identifier,
  [2408] = 1,
    ACTIONS(358), 1,
      anon_sym_SQUOTE,
  [2412] = 1,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
  [2416] = 1,
    ACTIONS(360), 1,
      anon_sym_PERCENT_RBRACE,
  [2420] = 1,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
  [2424] = 1,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
  [2428] = 1,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
  [2432] = 1,
    ACTIONS(366), 1,
      aux_sym_string_token1,
  [2436] = 1,
    ACTIONS(368), 1,
      aux_sym_string_token2,
  [2440] = 1,
    ACTIONS(370), 1,
      anon_sym_endcomment,
  [2444] = 1,
    ACTIONS(372), 1,
      aux_sym_string_token1,
  [2448] = 1,
    ACTIONS(374), 1,
      aux_sym_string_token2,
  [2452] = 1,
    ACTIONS(376), 1,
      anon_sym_LBRACE_PERCENT,
  [2456] = 1,
    ACTIONS(378), 1,
      sym_comment_content,
  [2460] = 1,
    ACTIONS(380), 1,
      anon_sym_PERCENT_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 110,
  [SMALL_STATE(6)] = 157,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 233,
  [SMALL_STATE(9)] = 266,
  [SMALL_STATE(10)] = 317,
  [SMALL_STATE(11)] = 352,
  [SMALL_STATE(12)] = 391,
  [SMALL_STATE(13)] = 424,
  [SMALL_STATE(14)] = 482,
  [SMALL_STATE(15)] = 540,
  [SMALL_STATE(16)] = 595,
  [SMALL_STATE(17)] = 650,
  [SMALL_STATE(18)] = 701,
  [SMALL_STATE(19)] = 752,
  [SMALL_STATE(20)] = 804,
  [SMALL_STATE(21)] = 856,
  [SMALL_STATE(22)] = 908,
  [SMALL_STATE(23)] = 960,
  [SMALL_STATE(24)] = 984,
  [SMALL_STATE(25)] = 1012,
  [SMALL_STATE(26)] = 1034,
  [SMALL_STATE(27)] = 1055,
  [SMALL_STATE(28)] = 1080,
  [SMALL_STATE(29)] = 1105,
  [SMALL_STATE(30)] = 1130,
  [SMALL_STATE(31)] = 1153,
  [SMALL_STATE(32)] = 1174,
  [SMALL_STATE(33)] = 1205,
  [SMALL_STATE(34)] = 1234,
  [SMALL_STATE(35)] = 1257,
  [SMALL_STATE(36)] = 1284,
  [SMALL_STATE(37)] = 1305,
  [SMALL_STATE(38)] = 1328,
  [SMALL_STATE(39)] = 1360,
  [SMALL_STATE(40)] = 1380,
  [SMALL_STATE(41)] = 1400,
  [SMALL_STATE(42)] = 1420,
  [SMALL_STATE(43)] = 1440,
  [SMALL_STATE(44)] = 1470,
  [SMALL_STATE(45)] = 1492,
  [SMALL_STATE(46)] = 1511,
  [SMALL_STATE(47)] = 1540,
  [SMALL_STATE(48)] = 1569,
  [SMALL_STATE(49)] = 1590,
  [SMALL_STATE(50)] = 1611,
  [SMALL_STATE(51)] = 1637,
  [SMALL_STATE(52)] = 1655,
  [SMALL_STATE(53)] = 1673,
  [SMALL_STATE(54)] = 1699,
  [SMALL_STATE(55)] = 1717,
  [SMALL_STATE(56)] = 1747,
  [SMALL_STATE(57)] = 1773,
  [SMALL_STATE(58)] = 1800,
  [SMALL_STATE(59)] = 1827,
  [SMALL_STATE(60)] = 1854,
  [SMALL_STATE(61)] = 1881,
  [SMALL_STATE(62)] = 1908,
  [SMALL_STATE(63)] = 1935,
  [SMALL_STATE(64)] = 1962,
  [SMALL_STATE(65)] = 1989,
  [SMALL_STATE(66)] = 2016,
  [SMALL_STATE(67)] = 2043,
  [SMALL_STATE(68)] = 2070,
  [SMALL_STATE(69)] = 2096,
  [SMALL_STATE(70)] = 2119,
  [SMALL_STATE(71)] = 2141,
  [SMALL_STATE(72)] = 2158,
  [SMALL_STATE(73)] = 2175,
  [SMALL_STATE(74)] = 2187,
  [SMALL_STATE(75)] = 2199,
  [SMALL_STATE(76)] = 2211,
  [SMALL_STATE(77)] = 2225,
  [SMALL_STATE(78)] = 2237,
  [SMALL_STATE(79)] = 2249,
  [SMALL_STATE(80)] = 2263,
  [SMALL_STATE(81)] = 2272,
  [SMALL_STATE(82)] = 2281,
  [SMALL_STATE(83)] = 2290,
  [SMALL_STATE(84)] = 2299,
  [SMALL_STATE(85)] = 2308,
  [SMALL_STATE(86)] = 2313,
  [SMALL_STATE(87)] = 2318,
  [SMALL_STATE(88)] = 2323,
  [SMALL_STATE(89)] = 2328,
  [SMALL_STATE(90)] = 2332,
  [SMALL_STATE(91)] = 2336,
  [SMALL_STATE(92)] = 2340,
  [SMALL_STATE(93)] = 2344,
  [SMALL_STATE(94)] = 2348,
  [SMALL_STATE(95)] = 2352,
  [SMALL_STATE(96)] = 2356,
  [SMALL_STATE(97)] = 2360,
  [SMALL_STATE(98)] = 2364,
  [SMALL_STATE(99)] = 2368,
  [SMALL_STATE(100)] = 2372,
  [SMALL_STATE(101)] = 2376,
  [SMALL_STATE(102)] = 2380,
  [SMALL_STATE(103)] = 2384,
  [SMALL_STATE(104)] = 2388,
  [SMALL_STATE(105)] = 2392,
  [SMALL_STATE(106)] = 2396,
  [SMALL_STATE(107)] = 2400,
  [SMALL_STATE(108)] = 2404,
  [SMALL_STATE(109)] = 2408,
  [SMALL_STATE(110)] = 2412,
  [SMALL_STATE(111)] = 2416,
  [SMALL_STATE(112)] = 2420,
  [SMALL_STATE(113)] = 2424,
  [SMALL_STATE(114)] = 2428,
  [SMALL_STATE(115)] = 2432,
  [SMALL_STATE(116)] = 2436,
  [SMALL_STATE(117)] = 2440,
  [SMALL_STATE(118)] = 2444,
  [SMALL_STATE(119)] = 2448,
  [SMALL_STATE(120)] = 2452,
  [SMALL_STATE(121)] = 2456,
  [SMALL_STATE(122)] = 2460,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, .production_id = 4),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(103),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(102),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(89),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(30),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(99),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(98),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(43),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(31),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(69),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 8),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 8),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 3, .production_id = 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 3, .production_id = 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 5, .production_id = 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 5, .production_id = 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(16),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(22),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(21),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(71),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 7, .production_id = 7),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 7, .production_id = 7),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 8, .production_id = 9),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 8, .production_id = 9),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(15),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(20),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(19),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(79),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 5, .production_id = 5),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw, 5, .production_id = 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(72),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 7, .production_id = 6),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 7, .production_id = 6),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 2),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(76),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [364] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_liquid_external_scanner_create(void);
void tree_sitter_liquid_external_scanner_destroy(void *);
bool tree_sitter_liquid_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_liquid_external_scanner_serialize(void *, char *);
void tree_sitter_liquid_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_liquid(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_liquid_external_scanner_create,
      tree_sitter_liquid_external_scanner_destroy,
      tree_sitter_liquid_external_scanner_scan,
      tree_sitter_liquid_external_scanner_serialize,
      tree_sitter_liquid_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

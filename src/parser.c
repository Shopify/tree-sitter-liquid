#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 102
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_LBRACE_PERCENT = 1,
  anon_sym_LBRACE_PERCENT_DASH = 2,
  anon_sym_PERCENT_RBRACE = 3,
  anon_sym_DASH_PERCENT_RBRACE = 4,
  anon_sym_LBRACE_LBRACE = 5,
  anon_sym_LBRACE_LBRACE_DASH = 6,
  anon_sym_RBRACE_RBRACE = 7,
  anon_sym_DASH_RBRACE_RBRACE = 8,
  aux_sym_content_token1 = 9,
  anon_sym_LBRACE_PERCENT_PERCENT = 10,
  anon_sym_PIPE = 11,
  anon_sym_COLON = 12,
  anon_sym_COMMA = 13,
  anon_sym_assign = 14,
  anon_sym_EQ = 15,
  anon_sym_for = 16,
  anon_sym_in = 17,
  anon_sym_endfor = 18,
  anon_sym_DOT = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
  anon_sym_STAR = 22,
  anon_sym_SLASH = 23,
  anon_sym_PERCENT = 24,
  anon_sym_CARET = 25,
  anon_sym_EQ_EQ = 26,
  anon_sym_LT = 27,
  anon_sym_LT_EQ = 28,
  anon_sym_BANG_EQ = 29,
  anon_sym_GT_EQ = 30,
  anon_sym_GT = 31,
  anon_sym_and = 32,
  anon_sym_or = 33,
  sym_identifier = 34,
  anon_sym_SQUOTE = 35,
  aux_sym_string_token1 = 36,
  anon_sym_DQUOTE = 37,
  aux_sym_string_token2 = 38,
  sym_number = 39,
  anon_sym_true = 40,
  anon_sym_false = 41,
  sym_template = 42,
  sym__template = 43,
  sym_directive = 44,
  sym_output_directive = 45,
  sym_content = 46,
  sym_code = 47,
  sym_filter = 48,
  sym_argument_list = 49,
  sym_argument = 50,
  sym_assignment = 51,
  sym_for = 52,
  sym__expression = 53,
  sym_call = 54,
  sym_binary_expression = 55,
  sym__literal = 56,
  sym_string = 57,
  sym_boolean = 58,
  aux_sym_template_repeat1 = 59,
  aux_sym_content_repeat1 = 60,
  aux_sym_code_repeat1 = 61,
  aux_sym_argument_list_repeat1 = 62,
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
  [sym_template] = "template",
  [sym__template] = "_template",
  [sym_directive] = "directive",
  [sym_output_directive] = "output_directive",
  [sym_content] = "content",
  [sym_code] = "code",
  [sym_filter] = "filter",
  [sym_argument_list] = "argument_list",
  [sym_argument] = "argument",
  [sym_assignment] = "assignment",
  [sym_for] = "for",
  [sym__expression] = "_expression",
  [sym_call] = "call",
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
  [sym_template] = sym_template,
  [sym__template] = sym__template,
  [sym_directive] = sym_directive,
  [sym_output_directive] = sym_output_directive,
  [sym_content] = sym_content,
  [sym_code] = sym_code,
  [sym_filter] = sym_filter,
  [sym_argument_list] = sym_argument_list,
  [sym_argument] = sym_argument,
  [sym_assignment] = sym_assignment,
  [sym_for] = sym_for,
  [sym__expression] = sym__expression,
  [sym_call] = sym_call,
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
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
  [5] = {.index = 9, .length = 2},
  [6] = {.index = 11, .length = 2},
  [7] = {.index = 13, .length = 3},
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
    {field_iterator, 3},
    {field_loop_variable, 1},
  [11] =
    {field_key, 0},
    {field_value, 2},
  [13] =
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
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 2,
  [23] = 3,
  [24] = 5,
  [25] = 11,
  [26] = 4,
  [27] = 27,
  [28] = 6,
  [29] = 7,
  [30] = 30,
  [31] = 10,
  [32] = 32,
  [33] = 9,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 10,
  [40] = 11,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 42,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 54,
  [57] = 53,
  [58] = 49,
  [59] = 59,
  [60] = 60,
  [61] = 60,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 66,
  [71] = 71,
  [72] = 72,
  [73] = 67,
  [74] = 68,
  [75] = 71,
  [76] = 72,
  [77] = 69,
  [78] = 78,
  [79] = 78,
  [80] = 80,
  [81] = 80,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 89,
  [94] = 83,
  [95] = 90,
  [96] = 83,
  [97] = 90,
  [98] = 86,
  [99] = 85,
  [100] = 86,
  [101] = 85,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '^') ADVANCE(71);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '^') ADVANCE(71);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '^') ADVANCE(71);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '%') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '%') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == '{') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 33:
      if (lookahead == '}') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == '}') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == '}') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == '}') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '%') ADVANCE(51);
      if (lookahead == '-') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_DASH);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == '{') ADVANCE(44);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_PERCENT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_assign);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_endfor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '}') ADVANCE(42);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
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
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 38},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 38},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 38},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 38},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 38},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 38},
  [67] = {.lex_state = 38},
  [68] = {.lex_state = 38},
  [69] = {.lex_state = 38},
  [70] = {.lex_state = 38},
  [71] = {.lex_state = 38},
  [72] = {.lex_state = 38},
  [73] = {.lex_state = 38},
  [74] = {.lex_state = 38},
  [75] = {.lex_state = 38},
  [76] = {.lex_state = 38},
  [77] = {.lex_state = 38},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 37},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 37},
  [85] = {.lex_state = 109},
  [86] = {.lex_state = 106},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 37},
  [89] = {.lex_state = 37},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 37},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 106},
  [99] = {.lex_state = 109},
  [100] = {.lex_state = 106},
  [101] = {.lex_state = 109},
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
  },
  [1] = {
    [sym_template] = STATE(92),
    [sym__template] = STATE(45),
    [sym_directive] = STATE(45),
    [sym_output_directive] = STATE(45),
    [sym_content] = STATE(45),
    [aux_sym_template_repeat1] = STATE(45),
    [aux_sym_content_repeat1] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(7),
    [aux_sym_content_token1] = ACTIONS(9),
    [anon_sym_LBRACE_PERCENT_PERCENT] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(13), 11,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(11), 16,
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
  [35] = 2,
    ACTIONS(19), 11,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(17), 17,
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
  [68] = 9,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PERCENT,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(23), 7,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [114] = 7,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PERCENT,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(23), 9,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 12,
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
  [156] = 2,
    ACTIONS(23), 11,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 16,
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
  [188] = 3,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(23), 11,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 15,
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
  [222] = 11,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PERCENT,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(35), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 5,
      anon_sym_assign,
      anon_sym_for,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [272] = 5,
    ACTIONS(31), 1,
      anon_sym_PERCENT,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(23), 10,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 13,
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
  [310] = 2,
    ACTIONS(49), 11,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 16,
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
  [342] = 2,
    ACTIONS(53), 11,
      anon_sym_assign,
      anon_sym_for,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(51), 16,
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
  [374] = 11,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_PERCENT,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(35), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(57), 5,
      anon_sym_assign,
      anon_sym_for,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(55), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [424] = 12,
    ACTIONS(61), 1,
      anon_sym_assign,
    ACTIONS(63), 1,
      anon_sym_for,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym_number,
    STATE(2), 1,
      sym_call,
    STATE(44), 1,
      sym_filter,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 3,
      sym_assignment,
      sym_for,
      aux_sym_code_repeat1,
    ACTIONS(59), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(12), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [471] = 14,
    ACTIONS(61), 1,
      anon_sym_assign,
    ACTIONS(63), 1,
      anon_sym_for,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_endfor,
    STATE(2), 1,
      sym_call,
    STATE(44), 1,
      sym_filter,
    STATE(80), 1,
      sym_code,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    STATE(13), 3,
      sym_assignment,
      sym_for,
      aux_sym_code_repeat1,
    STATE(12), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [522] = 14,
    ACTIONS(61), 1,
      anon_sym_assign,
    ACTIONS(63), 1,
      anon_sym_for,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_endfor,
    STATE(2), 1,
      sym_call,
    STATE(44), 1,
      sym_filter,
    STATE(80), 1,
      sym_code,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    STATE(13), 3,
      sym_assignment,
      sym_for,
      aux_sym_code_repeat1,
    STATE(12), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [573] = 12,
    ACTIONS(83), 1,
      anon_sym_assign,
    ACTIONS(86), 1,
      anon_sym_for,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(92), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      sym_number,
    STATE(2), 1,
      sym_call,
    STATE(44), 1,
      sym_filter,
    ACTIONS(101), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 3,
      sym_assignment,
      sym_for,
      aux_sym_code_repeat1,
    ACTIONS(81), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(12), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [620] = 13,
    ACTIONS(61), 1,
      anon_sym_assign,
    ACTIONS(63), 1,
      anon_sym_for,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym_number,
    STATE(2), 1,
      sym_call,
    STATE(44), 1,
      sym_filter,
    STATE(80), 1,
      sym_code,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    STATE(13), 3,
      sym_assignment,
      sym_for,
      aux_sym_code_repeat1,
    STATE(12), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [668] = 13,
    ACTIONS(61), 1,
      anon_sym_assign,
    ACTIONS(63), 1,
      anon_sym_for,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym_number,
    STATE(2), 1,
      sym_call,
    STATE(44), 1,
      sym_filter,
    STATE(81), 1,
      sym_code,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(104), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    STATE(13), 3,
      sym_assignment,
      sym_for,
      aux_sym_code_repeat1,
    STATE(12), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [716] = 13,
    ACTIONS(61), 1,
      anon_sym_assign,
    ACTIONS(63), 1,
      anon_sym_for,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym_number,
    STATE(2), 1,
      sym_call,
    STATE(44), 1,
      sym_filter,
    STATE(79), 1,
      sym_code,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(106), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(13), 3,
      sym_assignment,
      sym_for,
      aux_sym_code_repeat1,
    STATE(12), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [764] = 13,
    ACTIONS(61), 1,
      anon_sym_assign,
    ACTIONS(63), 1,
      anon_sym_for,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      sym_number,
    STATE(2), 1,
      sym_call,
    STATE(44), 1,
      sym_filter,
    STATE(78), 1,
      sym_code,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(13), 3,
      sym_assignment,
      sym_for,
      aux_sym_code_repeat1,
    STATE(12), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [812] = 5,
    ACTIONS(112), 1,
      anon_sym_COLON,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(116), 5,
      anon_sym_assign,
      anon_sym_for,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(110), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [839] = 3,
    ACTIONS(118), 1,
      anon_sym_DOT,
    ACTIONS(13), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 12,
      anon_sym_PERCENT_RBRACE,
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
  [862] = 2,
    ACTIONS(19), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 13,
      anon_sym_PERCENT_RBRACE,
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
  [883] = 6,
    ACTIONS(124), 1,
      anon_sym_PERCENT,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(120), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(122), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(21), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [911] = 2,
    ACTIONS(53), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 12,
      anon_sym_PERCENT_RBRACE,
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
  [931] = 7,
    ACTIONS(124), 1,
      anon_sym_PERCENT,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(120), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(122), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(130), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(128), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [961] = 3,
    ACTIONS(112), 1,
      anon_sym_COLON,
    ACTIONS(134), 5,
      anon_sym_assign,
      anon_sym_for,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [983] = 2,
    ACTIONS(23), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 12,
      anon_sym_PERCENT_RBRACE,
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
  [1003] = 3,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(23), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 11,
      anon_sym_PERCENT_RBRACE,
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
  [1025] = 4,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(138), 5,
      anon_sym_assign,
      anon_sym_for,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(136), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1049] = 2,
    ACTIONS(49), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 12,
      anon_sym_PERCENT_RBRACE,
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
  [1069] = 4,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(116), 5,
      anon_sym_assign,
      anon_sym_for,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(110), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1093] = 5,
    ACTIONS(124), 1,
      anon_sym_PERCENT,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(21), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [1119] = 8,
    ACTIONS(124), 1,
      anon_sym_PERCENT,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(140), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(120), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(122), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(130), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(142), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(128), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1151] = 4,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(134), 5,
      anon_sym_assign,
      anon_sym_for,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1175] = 3,
    ACTIONS(149), 1,
      anon_sym_COLON,
    ACTIONS(151), 5,
      anon_sym_assign,
      anon_sym_for,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(147), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1196] = 2,
    ACTIONS(155), 5,
      anon_sym_assign,
      anon_sym_for,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1215] = 2,
    ACTIONS(134), 5,
      anon_sym_assign,
      anon_sym_for,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1234] = 2,
    ACTIONS(49), 5,
      anon_sym_assign,
      anon_sym_for,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1253] = 2,
    ACTIONS(53), 5,
      anon_sym_assign,
      anon_sym_for,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(51), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1272] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_number,
    STATE(2), 1,
      sym_call,
    STATE(46), 1,
      sym_filter,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1302] = 6,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      aux_sym_content_repeat1,
    ACTIONS(161), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    ACTIONS(164), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(167), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    STATE(42), 5,
      sym__template,
      sym_directive,
      sym_output_directive,
      sym_content,
      aux_sym_template_repeat1,
  [1328] = 2,
    ACTIONS(172), 5,
      anon_sym_assign,
      anon_sym_for,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(170), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1346] = 3,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(57), 5,
      anon_sym_assign,
      anon_sym_for,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(55), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1366] = 6,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      aux_sym_content_repeat1,
    ACTIONS(5), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    ACTIONS(7), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(9), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    STATE(42), 5,
      sym__template,
      sym_directive,
      sym_output_directive,
      sym_content,
      aux_sym_template_repeat1,
  [1392] = 3,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(43), 5,
      anon_sym_assign,
      anon_sym_for,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1412] = 7,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      sym_number,
    STATE(22), 1,
      sym_call,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1439] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      sym_number,
    STATE(2), 1,
      sym_call,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1466] = 7,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      sym_number,
    STATE(22), 1,
      sym_call,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(28), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1493] = 6,
    ACTIONS(190), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(192), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    STATE(70), 1,
      aux_sym_content_repeat1,
    ACTIONS(194), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(196), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    STATE(55), 5,
      sym__template,
      sym_directive,
      sym_output_directive,
      sym_content,
      aux_sym_template_repeat1,
  [1518] = 7,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      sym_number,
    STATE(22), 1,
      sym_call,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1545] = 5,
    STATE(70), 1,
      aux_sym_content_repeat1,
    ACTIONS(200), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
    ACTIONS(203), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(206), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    STATE(52), 5,
      sym__template,
      sym_directive,
      sym_output_directive,
      sym_content,
      aux_sym_template_repeat1,
  [1568] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      sym_number,
    STATE(2), 1,
      sym_call,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1595] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      sym_number,
    STATE(2), 1,
      sym_call,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1622] = 6,
    ACTIONS(192), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    ACTIONS(213), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(70), 1,
      aux_sym_content_repeat1,
    ACTIONS(194), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(196), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    STATE(52), 5,
      sym__template,
      sym_directive,
      sym_output_directive,
      sym_content,
      aux_sym_template_repeat1,
  [1647] = 7,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_number,
    STATE(22), 1,
      sym_call,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1674] = 7,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      sym_number,
    STATE(22), 1,
      sym_call,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1701] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      sym_number,
    STATE(2), 1,
      sym_call,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1728] = 2,
    ACTIONS(223), 5,
      anon_sym_assign,
      anon_sym_for,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1745] = 7,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_number,
    STATE(22), 1,
      sym_call,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1772] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym_number,
    STATE(2), 1,
      sym_call,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 5,
      sym__expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [1799] = 2,
    ACTIONS(231), 5,
      anon_sym_assign,
      anon_sym_for,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(229), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_number,
  [1816] = 7,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      sym_number,
    STATE(43), 1,
      sym_argument_list,
    ACTIONS(241), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 4,
      sym_argument,
      sym__literal,
      sym_string,
      sym_boolean,
  [1842] = 6,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_number,
    ACTIONS(241), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 4,
      sym_argument,
      sym__literal,
      sym_string,
      sym_boolean,
  [1865] = 6,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(249), 1,
      sym_number,
    ACTIONS(241), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 3,
      sym__literal,
      sym_string,
      sym_boolean,
  [1887] = 4,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      aux_sym_content_repeat1,
    ACTIONS(255), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    ACTIONS(253), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [1904] = 4,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      aux_sym_content_repeat1,
    ACTIONS(261), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    ACTIONS(259), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [1921] = 2,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 6,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
  [1933] = 2,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 6,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
  [1945] = 3,
    STATE(73), 1,
      aux_sym_content_repeat1,
    ACTIONS(272), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    ACTIONS(253), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [1959] = 2,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 6,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
  [1971] = 2,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(280), 6,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
  [1983] = 3,
    STATE(73), 1,
      aux_sym_content_repeat1,
    ACTIONS(282), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
    ACTIONS(259), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [1997] = 1,
    ACTIONS(266), 6,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
  [2006] = 1,
    ACTIONS(276), 6,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
  [2015] = 1,
    ACTIONS(280), 6,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
  [2024] = 1,
    ACTIONS(270), 6,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT_PERCENT,
  [2033] = 1,
    ACTIONS(285), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [2038] = 1,
    ACTIONS(287), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [2043] = 1,
    ACTIONS(289), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [2048] = 1,
    ACTIONS(291), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [2053] = 1,
    ACTIONS(293), 1,
      sym_identifier,
  [2057] = 1,
    ACTIONS(295), 1,
      anon_sym_SQUOTE,
  [2061] = 1,
    ACTIONS(297), 1,
      sym_identifier,
  [2065] = 1,
    ACTIONS(299), 1,
      aux_sym_string_token2,
  [2069] = 1,
    ACTIONS(301), 1,
      aux_sym_string_token1,
  [2073] = 1,
    ACTIONS(303), 1,
      anon_sym_in,
  [2077] = 1,
    ACTIONS(305), 1,
      sym_identifier,
  [2081] = 1,
    ACTIONS(307), 1,
      sym_identifier,
  [2085] = 1,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
  [2089] = 1,
    ACTIONS(309), 1,
      anon_sym_EQ,
  [2093] = 1,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
  [2097] = 1,
    ACTIONS(313), 1,
      sym_identifier,
  [2101] = 1,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
  [2105] = 1,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
  [2109] = 1,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
  [2113] = 1,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
  [2117] = 1,
    ACTIONS(319), 1,
      aux_sym_string_token1,
  [2121] = 1,
    ACTIONS(321), 1,
      aux_sym_string_token2,
  [2125] = 1,
    ACTIONS(323), 1,
      aux_sym_string_token1,
  [2129] = 1,
    ACTIONS(325), 1,
      aux_sym_string_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 188,
  [SMALL_STATE(8)] = 222,
  [SMALL_STATE(9)] = 272,
  [SMALL_STATE(10)] = 310,
  [SMALL_STATE(11)] = 342,
  [SMALL_STATE(12)] = 374,
  [SMALL_STATE(13)] = 424,
  [SMALL_STATE(14)] = 471,
  [SMALL_STATE(15)] = 522,
  [SMALL_STATE(16)] = 573,
  [SMALL_STATE(17)] = 620,
  [SMALL_STATE(18)] = 668,
  [SMALL_STATE(19)] = 716,
  [SMALL_STATE(20)] = 764,
  [SMALL_STATE(21)] = 812,
  [SMALL_STATE(22)] = 839,
  [SMALL_STATE(23)] = 862,
  [SMALL_STATE(24)] = 883,
  [SMALL_STATE(25)] = 911,
  [SMALL_STATE(26)] = 931,
  [SMALL_STATE(27)] = 961,
  [SMALL_STATE(28)] = 983,
  [SMALL_STATE(29)] = 1003,
  [SMALL_STATE(30)] = 1025,
  [SMALL_STATE(31)] = 1049,
  [SMALL_STATE(32)] = 1069,
  [SMALL_STATE(33)] = 1093,
  [SMALL_STATE(34)] = 1119,
  [SMALL_STATE(35)] = 1151,
  [SMALL_STATE(36)] = 1175,
  [SMALL_STATE(37)] = 1196,
  [SMALL_STATE(38)] = 1215,
  [SMALL_STATE(39)] = 1234,
  [SMALL_STATE(40)] = 1253,
  [SMALL_STATE(41)] = 1272,
  [SMALL_STATE(42)] = 1302,
  [SMALL_STATE(43)] = 1328,
  [SMALL_STATE(44)] = 1346,
  [SMALL_STATE(45)] = 1366,
  [SMALL_STATE(46)] = 1392,
  [SMALL_STATE(47)] = 1412,
  [SMALL_STATE(48)] = 1439,
  [SMALL_STATE(49)] = 1466,
  [SMALL_STATE(50)] = 1493,
  [SMALL_STATE(51)] = 1518,
  [SMALL_STATE(52)] = 1545,
  [SMALL_STATE(53)] = 1568,
  [SMALL_STATE(54)] = 1595,
  [SMALL_STATE(55)] = 1622,
  [SMALL_STATE(56)] = 1647,
  [SMALL_STATE(57)] = 1674,
  [SMALL_STATE(58)] = 1701,
  [SMALL_STATE(59)] = 1728,
  [SMALL_STATE(60)] = 1745,
  [SMALL_STATE(61)] = 1772,
  [SMALL_STATE(62)] = 1799,
  [SMALL_STATE(63)] = 1816,
  [SMALL_STATE(64)] = 1842,
  [SMALL_STATE(65)] = 1865,
  [SMALL_STATE(66)] = 1887,
  [SMALL_STATE(67)] = 1904,
  [SMALL_STATE(68)] = 1921,
  [SMALL_STATE(69)] = 1933,
  [SMALL_STATE(70)] = 1945,
  [SMALL_STATE(71)] = 1959,
  [SMALL_STATE(72)] = 1971,
  [SMALL_STATE(73)] = 1983,
  [SMALL_STATE(74)] = 1997,
  [SMALL_STATE(75)] = 2006,
  [SMALL_STATE(76)] = 2015,
  [SMALL_STATE(77)] = 2024,
  [SMALL_STATE(78)] = 2033,
  [SMALL_STATE(79)] = 2038,
  [SMALL_STATE(80)] = 2043,
  [SMALL_STATE(81)] = 2048,
  [SMALL_STATE(82)] = 2053,
  [SMALL_STATE(83)] = 2057,
  [SMALL_STATE(84)] = 2061,
  [SMALL_STATE(85)] = 2065,
  [SMALL_STATE(86)] = 2069,
  [SMALL_STATE(87)] = 2073,
  [SMALL_STATE(88)] = 2077,
  [SMALL_STATE(89)] = 2081,
  [SMALL_STATE(90)] = 2085,
  [SMALL_STATE(91)] = 2089,
  [SMALL_STATE(92)] = 2093,
  [SMALL_STATE(93)] = 2097,
  [SMALL_STATE(94)] = 2101,
  [SMALL_STATE(95)] = 2105,
  [SMALL_STATE(96)] = 2109,
  [SMALL_STATE(97)] = 2113,
  [SMALL_STATE(98)] = 2117,
  [SMALL_STATE(99)] = 2121,
  [SMALL_STATE(100)] = 2125,
  [SMALL_STATE(101)] = 2129,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, .production_id = 4),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(88),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(82),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(86),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(85),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(12),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(10),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(64),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 3, .production_id = 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 3, .production_id = 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 6),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 6),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(18),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(20),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(66),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 5, .production_id = 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 5, .production_id = 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(17),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(19),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(70),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 7, .production_id = 5),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 7, .production_id = 5),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 8, .production_id = 7),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 8, .production_id = 7),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(67),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(73),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [311] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

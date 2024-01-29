#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_LBRACE_LBRACE = 1,
  anon_sym_LBRACE_PERCENT = 2,
  anon_sym_RBRACE_RBRACE = 3,
  anon_sym_PERCENT_RBRACE = 4,
  anon_sym_PIPE = 5,
  anon_sym_COLON = 6,
  anon_sym_DOT = 7,
  anon_sym_assign = 8,
  anon_sym_EQ = 9,
  anon_sym_comment = 10,
  aux_sym_comment_token1 = 11,
  anon_sym_endcomment = 12,
  anon_sym_SQUOTE = 13,
  aux_sym_string_token1 = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_string_token2 = 16,
  sym_number = 17,
  anon_sym_true = 18,
  anon_sym_false = 19,
  sym_identifier = 20,
  anon_sym_COMMA = 21,
  anon_sym_PLUS = 22,
  anon_sym_DASH = 23,
  anon_sym_STAR = 24,
  anon_sym_SLASH = 25,
  anon_sym_PERCENT = 26,
  anon_sym_CARET = 27,
  anon_sym_EQ_EQ = 28,
  anon_sym_LT = 29,
  anon_sym_LT_EQ = 30,
  anon_sym_BANG_EQ = 31,
  anon_sym_GT_EQ = 32,
  anon_sym_GT = 33,
  anon_sym_and = 34,
  anon_sym_or = 35,
  sym_content = 36,
  sym_template = 37,
  sym__node = 38,
  sym_tag = 39,
  sym_filter = 40,
  sym_statement = 41,
  sym_expression = 42,
  sym_call = 43,
  sym_assignment = 44,
  sym_comment = 45,
  sym__literal = 46,
  sym_string = 47,
  sym_boolean = 48,
  sym_argument_list = 49,
  sym_argument = 50,
  sym_predicate = 51,
  aux_sym_template_repeat1 = 52,
  aux_sym_comment_repeat1 = 53,
  aux_sym_argument_list_repeat1 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_PIPE] = "|",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_assign] = "assign",
  [anon_sym_EQ] = "=",
  [anon_sym_comment] = "comment",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_endcomment] = "endcomment",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_identifier] = "identifier",
  [anon_sym_COMMA] = ",",
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
  [sym_content] = "content",
  [sym_template] = "template",
  [sym__node] = "_node",
  [sym_tag] = "tag",
  [sym_filter] = "filter",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_call] = "call",
  [sym_assignment] = "assignment",
  [sym_comment] = "comment",
  [sym__literal] = "_literal",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym_argument_list] = "argument_list",
  [sym_argument] = "argument",
  [sym_predicate] = "predicate",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_assign] = anon_sym_assign,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_comment] = anon_sym_comment,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_endcomment] = anon_sym_endcomment,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_identifier] = sym_identifier,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_content] = sym_content,
  [sym_template] = sym_template,
  [sym__node] = sym__node,
  [sym_tag] = sym_tag,
  [sym_filter] = sym_filter,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_call] = sym_call,
  [sym_assignment] = sym_assignment,
  [sym_comment] = sym_comment,
  [sym__literal] = sym__literal,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym_argument_list] = sym_argument_list,
  [sym_argument] = sym_argument,
  [sym_predicate] = sym_predicate,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
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
  [anon_sym_DOT] = {
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
  [anon_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_endcomment] = {
    .visible = true,
    .named = false,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
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
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
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
  field_key = 2,
  field_left = 3,
  field_method = 4,
  field_name = 5,
  field_operator = 6,
  field_receiver = 7,
  field_right = 8,
  field_value = 9,
  field_variable_name = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_key] = "key",
  [field_left] = "left",
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
    {field_key, 0},
    {field_value, 2},
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
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
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
  [53] = 53,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(61);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(92);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '^') ADVANCE(97);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '|') ADVANCE(48);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(92);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '^') ADVANCE(97);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == '|') ADVANCE(48);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(61);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '{') ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(107);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 38:
      if (lookahead == '}') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 41:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{') ADVANCE(107);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_assign);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_endcomment);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '}') ADVANCE(47);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 42},
  [2] = {.lex_state = 2},
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
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 42},
  [25] = {.lex_state = 42},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 42},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 39},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 39},
  [40] = {.lex_state = 39},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 40},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 40},
  [48] = {.lex_state = 62},
  [49] = {.lex_state = 40},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 65},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_assign] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_comment] = ACTIONS(1),
    [anon_sym_endcomment] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
  },
  [1] = {
    [sym_template] = STATE(46),
    [sym__node] = STATE(24),
    [sym_tag] = STATE(24),
    [aux_sym_template_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(5),
    [sym_content] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(9), 1,
      anon_sym_assign,
    ACTIONS(11), 1,
      anon_sym_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(4), 1,
      sym_call,
    STATE(13), 1,
      sym_expression,
    STATE(37), 1,
      sym_filter,
    STATE(43), 1,
      sym_assignment,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 2,
      sym_statement,
      sym_comment,
    STATE(14), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_predicate,
  [45] = 2,
    ACTIONS(25), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 15,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
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
  [68] = 3,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 14,
      anon_sym_RBRACE_RBRACE,
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
  [93] = 2,
    ACTIONS(35), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 15,
      anon_sym_RBRACE_RBRACE,
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
  [116] = 2,
    ACTIONS(39), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 15,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
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
  [139] = 9,
    ACTIONS(43), 1,
      anon_sym_PIPE,
    ACTIONS(49), 1,
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(41), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [175] = 7,
    ACTIONS(49), 1,
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(59), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_and,
      anon_sym_or,
  [207] = 6,
    ACTIONS(49), 1,
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 9,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [237] = 2,
    ACTIONS(61), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 14,
      anon_sym_RBRACE_RBRACE,
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
  [259] = 3,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(61), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 13,
      anon_sym_RBRACE_RBRACE,
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
  [283] = 5,
    ACTIONS(49), 1,
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 11,
      anon_sym_RBRACE_RBRACE,
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
  [311] = 9,
    ACTIONS(43), 1,
      anon_sym_PIPE,
    ACTIONS(49), 1,
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(63), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(53), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [347] = 2,
    ACTIONS(31), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 14,
      anon_sym_RBRACE_RBRACE,
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
  [369] = 9,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(4), 1,
      sym_call,
    STATE(7), 1,
      sym_expression,
    STATE(35), 1,
      sym_filter,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_predicate,
  [401] = 8,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(4), 1,
      sym_call,
    STATE(11), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_predicate,
  [430] = 8,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(4), 1,
      sym_call,
    STATE(12), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_predicate,
  [459] = 8,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(4), 1,
      sym_call,
    STATE(10), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_predicate,
  [488] = 8,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(4), 1,
      sym_call,
    STATE(9), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_predicate,
  [517] = 8,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(4), 1,
      sym_call,
    STATE(8), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_predicate,
  [546] = 7,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_number,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(38), 1,
      sym_argument_list,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_argument,
  [572] = 6,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_argument,
  [595] = 6,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_number,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 3,
      sym__literal,
      sym_string,
      sym_boolean,
  [617] = 4,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      sym_content,
    ACTIONS(5), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
    STATE(25), 3,
      sym__node,
      sym_tag,
      aux_sym_template_repeat1,
  [633] = 4,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      sym_content,
    ACTIONS(83), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
    STATE(25), 3,
      sym__node,
      sym_tag,
      aux_sym_template_repeat1,
  [649] = 4,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(89), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [664] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(95), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [676] = 2,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(95), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [686] = 3,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(100), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [698] = 3,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(89), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [710] = 2,
    ACTIONS(104), 1,
      anon_sym_COLON,
    ACTIONS(102), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [719] = 1,
    ACTIONS(95), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [726] = 1,
    ACTIONS(106), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [733] = 2,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      sym_content,
    ACTIONS(110), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
  [742] = 2,
    ACTIONS(43), 1,
      anon_sym_PIPE,
    ACTIONS(41), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
  [750] = 3,
    ACTIONS(112), 1,
      aux_sym_comment_token1,
    ACTIONS(114), 1,
      anon_sym_endcomment,
    STATE(40), 1,
      aux_sym_comment_repeat1,
  [760] = 2,
    ACTIONS(43), 1,
      anon_sym_PIPE,
    ACTIONS(63), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
  [768] = 1,
    ACTIONS(116), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [774] = 3,
    ACTIONS(118), 1,
      aux_sym_comment_token1,
    ACTIONS(120), 1,
      anon_sym_endcomment,
    STATE(36), 1,
      aux_sym_comment_repeat1,
  [784] = 3,
    ACTIONS(122), 1,
      aux_sym_comment_token1,
    ACTIONS(125), 1,
      anon_sym_endcomment,
    STATE(40), 1,
      aux_sym_comment_repeat1,
  [794] = 1,
    ACTIONS(127), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
  [799] = 1,
    ACTIONS(129), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
  [804] = 1,
    ACTIONS(131), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
  [809] = 1,
    ACTIONS(63), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
  [814] = 1,
    ACTIONS(133), 1,
      sym_identifier,
  [818] = 1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
  [822] = 1,
    ACTIONS(137), 1,
      sym_identifier,
  [826] = 1,
    ACTIONS(139), 1,
      aux_sym_string_token1,
  [830] = 1,
    ACTIONS(141), 1,
      sym_identifier,
  [834] = 1,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
  [838] = 1,
    ACTIONS(145), 1,
      aux_sym_string_token2,
  [842] = 1,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
  [846] = 1,
    ACTIONS(147), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 139,
  [SMALL_STATE(8)] = 175,
  [SMALL_STATE(9)] = 207,
  [SMALL_STATE(10)] = 237,
  [SMALL_STATE(11)] = 259,
  [SMALL_STATE(12)] = 283,
  [SMALL_STATE(13)] = 311,
  [SMALL_STATE(14)] = 347,
  [SMALL_STATE(15)] = 369,
  [SMALL_STATE(16)] = 401,
  [SMALL_STATE(17)] = 430,
  [SMALL_STATE(18)] = 459,
  [SMALL_STATE(19)] = 488,
  [SMALL_STATE(20)] = 517,
  [SMALL_STATE(21)] = 546,
  [SMALL_STATE(22)] = 572,
  [SMALL_STATE(23)] = 595,
  [SMALL_STATE(24)] = 617,
  [SMALL_STATE(25)] = 633,
  [SMALL_STATE(26)] = 649,
  [SMALL_STATE(27)] = 664,
  [SMALL_STATE(28)] = 676,
  [SMALL_STATE(29)] = 686,
  [SMALL_STATE(30)] = 698,
  [SMALL_STATE(31)] = 710,
  [SMALL_STATE(32)] = 719,
  [SMALL_STATE(33)] = 726,
  [SMALL_STATE(34)] = 733,
  [SMALL_STATE(35)] = 742,
  [SMALL_STATE(36)] = 750,
  [SMALL_STATE(37)] = 760,
  [SMALL_STATE(38)] = 768,
  [SMALL_STATE(39)] = 774,
  [SMALL_STATE(40)] = 784,
  [SMALL_STATE(41)] = 794,
  [SMALL_STATE(42)] = 799,
  [SMALL_STATE(43)] = 804,
  [SMALL_STATE(44)] = 809,
  [SMALL_STATE(45)] = 814,
  [SMALL_STATE(46)] = 818,
  [SMALL_STATE(47)] = 822,
  [SMALL_STATE(48)] = 826,
  [SMALL_STATE(49)] = 830,
  [SMALL_STATE(50)] = 834,
  [SMALL_STATE(51)] = 838,
  [SMALL_STATE(52)] = 842,
  [SMALL_STATE(53)] = 846,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(25),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(22),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 3, .production_id = 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 5, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(40),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [135] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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

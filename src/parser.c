#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

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
  anon_sym_SQUOTE = 10,
  aux_sym_string_token1 = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_string_token2 = 13,
  sym_number = 14,
  anon_sym_true = 15,
  anon_sym_false = 16,
  sym_identifier = 17,
  anon_sym_COMMA = 18,
  anon_sym_include = 19,
  anon_sym_SLASH = 20,
  anon_sym_t = 21,
  anon_sym_t_EQ = 22,
  anon_sym_PLUS = 23,
  anon_sym_DASH = 24,
  anon_sym_STAR = 25,
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
  sym_program = 36,
  sym_filter = 37,
  sym_statement = 38,
  sym_expression = 39,
  sym_call = 40,
  sym_assignment = 41,
  sym__literal = 42,
  sym_string = 43,
  sym_boolean = 44,
  sym_argument_list = 45,
  sym_argument = 46,
  sym_include_statement = 47,
  sym_translation_expression = 48,
  sym_translation_declaration = 49,
  sym_locale_declaration = 50,
  sym_predicate = 51,
  aux_sym_program_repeat1 = 52,
  aux_sym_argument_list_repeat1 = 53,
  aux_sym_translation_declaration_repeat1 = 54,
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
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_identifier] = "identifier",
  [anon_sym_COMMA] = ",",
  [anon_sym_include] = "include",
  [anon_sym_SLASH] = "/",
  [anon_sym_t] = "t",
  [anon_sym_t_EQ] = "t=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
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
  [sym_program] = "program",
  [sym_filter] = "filter",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_call] = "call",
  [sym_assignment] = "assignment",
  [sym__literal] = "_literal",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym_argument_list] = "argument_list",
  [sym_argument] = "argument",
  [sym_include_statement] = "include_statement",
  [sym_translation_expression] = "translation_expression",
  [sym_translation_declaration] = "translation_declaration",
  [sym_locale_declaration] = "locale_declaration",
  [sym_predicate] = "predicate",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_translation_declaration_repeat1] = "translation_declaration_repeat1",
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
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_identifier] = sym_identifier,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_t_EQ] = anon_sym_t_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
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
  [sym_program] = sym_program,
  [sym_filter] = sym_filter,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_call] = sym_call,
  [sym_assignment] = sym_assignment,
  [sym__literal] = sym__literal,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym_argument_list] = sym_argument_list,
  [sym_argument] = sym_argument,
  [sym_include_statement] = sym_include_statement,
  [sym_translation_expression] = sym_translation_expression,
  [sym_translation_declaration] = sym_translation_declaration,
  [sym_locale_declaration] = sym_locale_declaration,
  [sym_predicate] = sym_predicate,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_translation_declaration_repeat1] = aux_sym_translation_declaration_repeat1,
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
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t_EQ] = {
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
  [sym_program] = {
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
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_translation_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_translation_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_locale_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_translation_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_key = 2,
  field_left = 3,
  field_locale_key = 4,
  field_method = 5,
  field_name = 6,
  field_operator = 7,
  field_receiver = 8,
  field_right = 9,
  field_template_name = 10,
  field_template_type = 11,
  field_translation_key = 12,
  field_value = 13,
  field_variable_name = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_key] = "key",
  [field_left] = "left",
  [field_locale_key] = "locale_key",
  [field_method] = "method",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_receiver] = "receiver",
  [field_right] = "right",
  [field_template_name] = "template_name",
  [field_template_type] = "template_type",
  [field_translation_key] = "translation_key",
  [field_value] = "value",
  [field_variable_name] = "variable_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 1},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_translation_key, 1},
  [1] =
    {field_method, 2},
    {field_receiver, 0},
  [3] =
    {field_body, 0},
    {field_name, 2},
  [5] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [8] =
    {field_value, 3},
    {field_variable_name, 1},
  [10] =
    {field_locale_key, 0},
  [11] =
    {field_template_name, 4},
    {field_template_type, 2},
  [13] =
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
  [40] = 4,
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
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 55,
  [66] = 50,
  [67] = 59,
  [68] = 58,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '<') ADVANCE(87);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '<') ADVANCE(87);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(33);
      if (lookahead == '{') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 16:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == '}') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == '}') ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_assign);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_t_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '}') ADVANCE(35);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
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
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 47},
  [59] = {.lex_state = 44},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 44},
  [68] = {.lex_state = 47},
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
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_t_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
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
    [sym_program] = STATE(56),
    [aux_sym_program_repeat1] = STATE(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(5), 1,
      anon_sym_assign,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(19), 1,
      anon_sym_t,
    ACTIONS(21), 1,
      anon_sym_t_EQ,
    STATE(3), 1,
      sym_call,
    STATE(15), 1,
      sym_expression,
    STATE(39), 1,
      sym_filter,
    STATE(49), 1,
      sym_statement,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 3,
      sym_assignment,
      sym_include_statement,
      sym_translation_declaration,
    STATE(13), 5,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_translation_expression,
      sym_predicate,
  [53] = 3,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 14,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [78] = 2,
    ACTIONS(31), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 15,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [101] = 2,
    ACTIONS(35), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 15,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [124] = 2,
    ACTIONS(39), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 15,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [147] = 7,
    ACTIONS(47), 1,
      anon_sym_PERCENT,
    ACTIONS(49), 1,
      anon_sym_CARET,
    ACTIONS(43), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(41), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_and,
      anon_sym_or,
  [179] = 2,
    ACTIONS(55), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 14,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [201] = 2,
    ACTIONS(59), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 14,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [223] = 3,
    ACTIONS(49), 1,
      anon_sym_CARET,
    ACTIONS(55), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 13,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [247] = 5,
    ACTIONS(47), 1,
      anon_sym_PERCENT,
    ACTIONS(49), 1,
      anon_sym_CARET,
    ACTIONS(43), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 11,
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
  [275] = 6,
    ACTIONS(47), 1,
      anon_sym_PERCENT,
    ACTIONS(49), 1,
      anon_sym_CARET,
    ACTIONS(43), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 9,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [305] = 2,
    ACTIONS(27), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 14,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [327] = 9,
    ACTIONS(47), 1,
      anon_sym_PERCENT,
    ACTIONS(49), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(43), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(65), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(51), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [363] = 9,
    ACTIONS(47), 1,
      anon_sym_PERCENT,
    ACTIONS(49), 1,
      anon_sym_CARET,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(43), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(67), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(51), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [399] = 10,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_t,
    STATE(3), 1,
      sym_call,
    STATE(14), 1,
      sym_expression,
    STATE(44), 1,
      sym_filter,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 5,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_translation_expression,
      sym_predicate,
  [435] = 9,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_t,
    STATE(3), 1,
      sym_call,
    STATE(10), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 5,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_translation_expression,
      sym_predicate,
  [468] = 9,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_t,
    STATE(3), 1,
      sym_call,
    STATE(11), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 5,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_translation_expression,
      sym_predicate,
  [501] = 9,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_t,
    STATE(3), 1,
      sym_call,
    STATE(8), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 5,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_translation_expression,
      sym_predicate,
  [534] = 9,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_t,
    STATE(3), 1,
      sym_call,
    STATE(12), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 5,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_translation_expression,
      sym_predicate,
  [567] = 9,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_t,
    STATE(3), 1,
      sym_call,
    STATE(7), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 5,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_translation_expression,
      sym_predicate,
  [600] = 7,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(42), 1,
      sym_argument_list,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(28), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_argument,
  [626] = 6,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_number,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_argument,
  [649] = 6,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 3,
      sym__literal,
      sym_string,
      sym_boolean,
  [671] = 4,
    ACTIONS(83), 1,
      anon_sym_COLON,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(81), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [686] = 3,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(87), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
    STATE(26), 2,
      sym_locale_declaration,
      aux_sym_translation_declaration_repeat1,
  [698] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(92), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [710] = 3,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(81), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [722] = 3,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(97), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
    STATE(26), 2,
      sym_locale_declaration,
      aux_sym_translation_declaration_repeat1,
  [734] = 3,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
    STATE(29), 2,
      sym_locale_declaration,
      aux_sym_translation_declaration_repeat1,
  [746] = 3,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(103), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [758] = 2,
    ACTIONS(83), 1,
      anon_sym_COLON,
    ACTIONS(92), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [768] = 3,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      aux_sym_program_repeat1,
    ACTIONS(107), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
  [779] = 3,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      aux_sym_program_repeat1,
    ACTIONS(3), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
  [790] = 1,
    ACTIONS(92), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [797] = 2,
    ACTIONS(114), 1,
      anon_sym_COLON,
    ACTIONS(112), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [806] = 1,
    ACTIONS(116), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [813] = 4,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      sym_identifier,
    STATE(9), 1,
      sym_string,
  [826] = 2,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(67), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
  [834] = 1,
    ACTIONS(29), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      sym_identifier,
  [840] = 1,
    ACTIONS(120), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
  [846] = 1,
    ACTIONS(122), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [852] = 3,
    ACTIONS(124), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_string,
  [862] = 2,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(61), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
  [870] = 1,
    ACTIONS(128), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      sym_identifier,
  [876] = 3,
    ACTIONS(124), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      sym_string,
  [886] = 1,
    ACTIONS(130), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
  [891] = 1,
    ACTIONS(132), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
  [896] = 1,
    ACTIONS(67), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
  [901] = 1,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
  [905] = 1,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
  [909] = 1,
    ACTIONS(138), 1,
      sym_identifier,
  [913] = 1,
    ACTIONS(140), 1,
      sym_identifier,
  [917] = 1,
    ACTIONS(142), 1,
      anon_sym_EQ,
  [921] = 1,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
  [925] = 1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
  [929] = 1,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
  [933] = 1,
    ACTIONS(148), 1,
      aux_sym_string_token2,
  [937] = 1,
    ACTIONS(150), 1,
      aux_sym_string_token1,
  [941] = 1,
    ACTIONS(152), 1,
      sym_identifier,
  [945] = 1,
    ACTIONS(154), 1,
      sym_identifier,
  [949] = 1,
    ACTIONS(156), 1,
      sym_identifier,
  [953] = 1,
    ACTIONS(158), 1,
      anon_sym_COLON,
  [957] = 1,
    ACTIONS(160), 1,
      anon_sym_SLASH,
  [961] = 1,
    ACTIONS(162), 1,
      anon_sym_SQUOTE,
  [965] = 1,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
  [969] = 1,
    ACTIONS(164), 1,
      aux_sym_string_token1,
  [973] = 1,
    ACTIONS(166), 1,
      aux_sym_string_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 101,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 147,
  [SMALL_STATE(8)] = 179,
  [SMALL_STATE(9)] = 201,
  [SMALL_STATE(10)] = 223,
  [SMALL_STATE(11)] = 247,
  [SMALL_STATE(12)] = 275,
  [SMALL_STATE(13)] = 305,
  [SMALL_STATE(14)] = 327,
  [SMALL_STATE(15)] = 363,
  [SMALL_STATE(16)] = 399,
  [SMALL_STATE(17)] = 435,
  [SMALL_STATE(18)] = 468,
  [SMALL_STATE(19)] = 501,
  [SMALL_STATE(20)] = 534,
  [SMALL_STATE(21)] = 567,
  [SMALL_STATE(22)] = 600,
  [SMALL_STATE(23)] = 626,
  [SMALL_STATE(24)] = 649,
  [SMALL_STATE(25)] = 671,
  [SMALL_STATE(26)] = 686,
  [SMALL_STATE(27)] = 698,
  [SMALL_STATE(28)] = 710,
  [SMALL_STATE(29)] = 722,
  [SMALL_STATE(30)] = 734,
  [SMALL_STATE(31)] = 746,
  [SMALL_STATE(32)] = 758,
  [SMALL_STATE(33)] = 768,
  [SMALL_STATE(34)] = 779,
  [SMALL_STATE(35)] = 790,
  [SMALL_STATE(36)] = 797,
  [SMALL_STATE(37)] = 806,
  [SMALL_STATE(38)] = 813,
  [SMALL_STATE(39)] = 826,
  [SMALL_STATE(40)] = 834,
  [SMALL_STATE(41)] = 840,
  [SMALL_STATE(42)] = 846,
  [SMALL_STATE(43)] = 852,
  [SMALL_STATE(44)] = 862,
  [SMALL_STATE(45)] = 870,
  [SMALL_STATE(46)] = 876,
  [SMALL_STATE(47)] = 886,
  [SMALL_STATE(48)] = 891,
  [SMALL_STATE(49)] = 896,
  [SMALL_STATE(50)] = 901,
  [SMALL_STATE(51)] = 905,
  [SMALL_STATE(52)] = 909,
  [SMALL_STATE(53)] = 913,
  [SMALL_STATE(54)] = 917,
  [SMALL_STATE(55)] = 921,
  [SMALL_STATE(56)] = 925,
  [SMALL_STATE(57)] = 929,
  [SMALL_STATE(58)] = 933,
  [SMALL_STATE(59)] = 937,
  [SMALL_STATE(60)] = 941,
  [SMALL_STATE(61)] = 945,
  [SMALL_STATE(62)] = 949,
  [SMALL_STATE(63)] = 953,
  [SMALL_STATE(64)] = 957,
  [SMALL_STATE(65)] = 961,
  [SMALL_STATE(66)] = 965,
  [SMALL_STATE(67)] = 969,
  [SMALL_STATE(68)] = 973,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_expression, 2, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translation_expression, 2, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_translation_declaration_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_declaration_repeat1, 2), SHIFT_REPEAT(63),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(23),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_declaration, 3, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_declaration, 2, .production_id = 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 3, .production_id = 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 8),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 5, .production_id = 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locale_declaration, 3, .production_id = 6),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 6, .production_id = 7),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [144] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
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

#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_LBRACE_LBRACE = 1,
  anon_sym_LBRACE_PERCENT = 2,
  anon_sym_RBRACE_RBRACE = 3,
  anon_sym_PERCENT_RBRACE = 4,
  anon_sym_PIPE = 5,
  anon_sym_COLON = 6,
  anon_sym_assign = 7,
  anon_sym_EQ = 8,
  anon_sym_SQUOTE = 9,
  aux_sym_string_token1 = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_token2 = 12,
  sym_number = 13,
  anon_sym_true = 14,
  anon_sym_false = 15,
  sym_identifier = 16,
  anon_sym_COMMA = 17,
  anon_sym_PLUS = 18,
  anon_sym_DASH = 19,
  anon_sym_STAR = 20,
  anon_sym_SLASH = 21,
  anon_sym_PERCENT = 22,
  anon_sym_CARET = 23,
  anon_sym_EQ_EQ = 24,
  anon_sym_LT = 25,
  anon_sym_LT_EQ = 26,
  anon_sym_BANG_EQ = 27,
  anon_sym_GT_EQ = 28,
  anon_sym_GT = 29,
  anon_sym_and = 30,
  anon_sym_or = 31,
  sym_program = 32,
  sym_filter = 33,
  sym_statement = 34,
  sym_expression = 35,
  sym_assignment = 36,
  sym__literal = 37,
  sym_string = 38,
  sym_boolean = 39,
  sym_argument_list = 40,
  sym_argument = 41,
  sym_predicate = 42,
  aux_sym_program_repeat1 = 43,
  aux_sym_argument_list_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_PIPE] = "|",
  [anon_sym_COLON] = ":",
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
  [sym_program] = "program",
  [sym_filter] = "filter",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_assignment] = "assignment",
  [sym__literal] = "_literal",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym_argument_list] = "argument_list",
  [sym_argument] = "argument",
  [sym_predicate] = "predicate",
  [aux_sym_program_repeat1] = "program_repeat1",
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
  [sym_program] = sym_program,
  [sym_filter] = sym_filter,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_assignment] = sym_assignment,
  [sym__literal] = sym__literal,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym_argument_list] = sym_argument_list,
  [sym_argument] = sym_argument,
  [sym_predicate] = sym_predicate,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
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
};

enum {
  field_body = 1,
  field_key = 2,
  field_left = 3,
  field_name = 4,
  field_operator = 5,
  field_right = 6,
  field_value = 7,
  field_variable_name = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_key] = "key",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_value] = "value",
  [field_variable_name] = "variable_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 2},
  [4] = {.index = 7, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 0},
    {field_name, 2},
  [2] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [5] =
    {field_value, 3},
    {field_variable_name, 1},
  [7] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '^') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '^') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '{') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 22:
      if (lookahead == '}') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_assign);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '}') ADVANCE(28);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
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
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 23},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 23},
  [42] = {.lex_state = 36},
  [43] = {.lex_state = 39},
  [44] = {.lex_state = 0},
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
    [anon_sym_assign] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
    [sym_program] = STATE(44),
    [aux_sym_program_repeat1] = STATE(30),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(7), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(5), 15,
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
  [23] = 2,
    ACTIONS(11), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(9), 15,
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
  [46] = 7,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(17), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(13), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_and,
      anon_sym_or,
  [78] = 6,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(17), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 9,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [108] = 2,
    ACTIONS(27), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 14,
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
  [130] = 3,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(27), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 13,
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
  [154] = 2,
    ACTIONS(31), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 14,
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
  [176] = 5,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(17), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 11,
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
  [204] = 9,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(17), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(37), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(23), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [240] = 8,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(17), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(39), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(23), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [273] = 11,
    ACTIONS(41), 1,
      anon_sym_assign,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_number,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(10), 1,
      sym_expression,
    STATE(33), 1,
      sym_filter,
    STATE(35), 1,
      sym_statement,
    STATE(36), 1,
      sym_assignment,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_predicate,
  [311] = 7,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_number,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_predicate,
  [337] = 7,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_number,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(11), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_predicate,
  [363] = 7,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_number,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(34), 1,
      sym_argument_list,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_argument,
  [389] = 7,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_number,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_predicate,
  [415] = 7,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_number,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(4), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_predicate,
  [441] = 7,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_number,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_predicate,
  [467] = 7,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_number,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(7), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_predicate,
  [493] = 6,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      sym_number,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 4,
      sym__literal,
      sym_string,
      sym_boolean,
      sym_argument,
  [516] = 6,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 3,
      sym__literal,
      sym_string,
      sym_boolean,
  [538] = 4,
    ACTIONS(67), 1,
      anon_sym_COLON,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(65), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [553] = 3,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(65), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [565] = 3,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(71), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [577] = 2,
    ACTIONS(67), 1,
      anon_sym_COLON,
    ACTIONS(71), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [587] = 3,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(76), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [599] = 1,
    ACTIONS(71), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [606] = 2,
    ACTIONS(80), 1,
      anon_sym_COLON,
    ACTIONS(78), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [615] = 1,
    ACTIONS(82), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [622] = 3,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      aux_sym_program_repeat1,
    ACTIONS(3), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
  [633] = 3,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      aux_sym_program_repeat1,
    ACTIONS(88), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
  [644] = 1,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
  [650] = 2,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(33), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
  [658] = 1,
    ACTIONS(93), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [664] = 1,
    ACTIONS(33), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
  [669] = 1,
    ACTIONS(95), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
  [674] = 1,
    ACTIONS(97), 1,
      anon_sym_EQ,
  [678] = 1,
    ACTIONS(99), 1,
      sym_identifier,
  [682] = 1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
  [686] = 1,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
  [690] = 1,
    ACTIONS(103), 1,
      sym_identifier,
  [694] = 1,
    ACTIONS(105), 1,
      aux_sym_string_token1,
  [698] = 1,
    ACTIONS(107), 1,
      aux_sym_string_token2,
  [702] = 1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 130,
  [SMALL_STATE(8)] = 154,
  [SMALL_STATE(9)] = 176,
  [SMALL_STATE(10)] = 204,
  [SMALL_STATE(11)] = 240,
  [SMALL_STATE(12)] = 273,
  [SMALL_STATE(13)] = 311,
  [SMALL_STATE(14)] = 337,
  [SMALL_STATE(15)] = 363,
  [SMALL_STATE(16)] = 389,
  [SMALL_STATE(17)] = 415,
  [SMALL_STATE(18)] = 441,
  [SMALL_STATE(19)] = 467,
  [SMALL_STATE(20)] = 493,
  [SMALL_STATE(21)] = 516,
  [SMALL_STATE(22)] = 538,
  [SMALL_STATE(23)] = 553,
  [SMALL_STATE(24)] = 565,
  [SMALL_STATE(25)] = 577,
  [SMALL_STATE(26)] = 587,
  [SMALL_STATE(27)] = 599,
  [SMALL_STATE(28)] = 606,
  [SMALL_STATE(29)] = 615,
  [SMALL_STATE(30)] = 622,
  [SMALL_STATE(31)] = 633,
  [SMALL_STATE(32)] = 644,
  [SMALL_STATE(33)] = 650,
  [SMALL_STATE(34)] = 658,
  [SMALL_STATE(35)] = 664,
  [SMALL_STATE(36)] = 669,
  [SMALL_STATE(37)] = 674,
  [SMALL_STATE(38)] = 678,
  [SMALL_STATE(39)] = 682,
  [SMALL_STATE(40)] = 686,
  [SMALL_STATE(41)] = 690,
  [SMALL_STATE(42)] = 694,
  [SMALL_STATE(43)] = 698,
  [SMALL_STATE(44)] = 702,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(20),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 3, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 5, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

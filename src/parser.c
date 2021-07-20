#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

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
  sym_identifier = 14,
  anon_sym_COMMA = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  anon_sym_STAR = 18,
  anon_sym_SLASH = 19,
  anon_sym_PERCENT = 20,
  anon_sym_CARET = 21,
  anon_sym_EQ_EQ = 22,
  anon_sym_LT = 23,
  anon_sym_LT_EQ = 24,
  anon_sym_BANG_EQ = 25,
  anon_sym_GT_EQ = 26,
  anon_sym_GT = 27,
  anon_sym_and = 28,
  anon_sym_or = 29,
  sym_program = 30,
  sym_filter = 31,
  sym_statement = 32,
  sym__expression = 33,
  sym_expression = 34,
  sym_assignment = 35,
  sym__literal = 36,
  sym_string = 37,
  sym_argument_list = 38,
  sym_predicate = 39,
  aux_sym_program_repeat1 = 40,
  aux_sym_expression_repeat1 = 41,
  aux_sym_argument_list_repeat1 = 42,
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
  [sym__expression] = "_expression",
  [sym_expression] = "expression",
  [sym_assignment] = "assignment",
  [sym__literal] = "_literal",
  [sym_string] = "string",
  [sym_argument_list] = "argument_list",
  [sym_predicate] = "predicate",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
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
  [sym__expression] = sym__expression,
  [sym_expression] = sym_expression,
  [sym_assignment] = sym_assignment,
  [sym__literal] = sym__literal,
  [sym_string] = sym_string,
  [sym_argument_list] = sym_argument_list,
  [sym_predicate] = sym_predicate,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
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
  [sym__expression] = {
    .visible = false,
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
  [sym_argument_list] = {
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
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_name = 2,
  field_operator = 3,
  field_right = 4,
  field_value = 5,
  field_variable_name = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_value] = "value",
  [field_variable_name] = "variable_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [4] =
    {field_value, 3},
    {field_variable_name, 1},
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
      if (eof) ADVANCE(15);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '%') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '^') ADVANCE(39);
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '|') ADVANCE(20);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '%') ADVANCE(38);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '^') ADVANCE(39);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == '|') ADVANCE(20);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '{') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 7:
      if (lookahead == 'g') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '}') ADVANCE(19);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 47:
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
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
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
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
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
    [sym_program] = STATE(39),
    [aux_sym_program_repeat1] = STATE(23),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(7), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      anon_sym_CARET,
    ACTIONS(5), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(11), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 2,
      anon_sym_and,
      anon_sym_or,
    STATE(20), 2,
      sym_filter,
      aux_sym_expression_repeat1,
    ACTIONS(17), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [40] = 2,
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
  [63] = 7,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      anon_sym_CARET,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(11), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(27), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_and,
      anon_sym_or,
  [95] = 6,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      anon_sym_CARET,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(11), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 9,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [125] = 2,
    ACTIONS(29), 3,
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
  [147] = 3,
    ACTIONS(15), 1,
      anon_sym_CARET,
    ACTIONS(29), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 13,
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
  [171] = 5,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      anon_sym_CARET,
    ACTIONS(11), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 11,
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
  [199] = 7,
    ACTIONS(31), 1,
      anon_sym_assign,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    STATE(31), 1,
      sym_assignment,
    STATE(30), 2,
      sym_statement,
      sym_expression,
    STATE(2), 4,
      sym__expression,
      sym__literal,
      sym_string,
      sym_predicate,
  [225] = 5,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_number,
    STATE(29), 1,
      sym_expression,
    STATE(2), 4,
      sym__expression,
      sym__literal,
      sym_string,
      sym_predicate,
  [244] = 4,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    STATE(5), 4,
      sym__expression,
      sym__literal,
      sym_string,
      sym_predicate,
  [260] = 5,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_argument_list,
    ACTIONS(41), 2,
      sym_number,
      sym_identifier,
    STATE(21), 2,
      sym__literal,
      sym_string,
  [278] = 4,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_number,
    STATE(4), 4,
      sym__expression,
      sym__literal,
      sym_string,
      sym_predicate,
  [294] = 4,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_number,
    STATE(6), 4,
      sym__expression,
      sym__literal,
      sym_string,
      sym_predicate,
  [310] = 4,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_number,
    STATE(7), 4,
      sym__expression,
      sym__literal,
      sym_string,
      sym_predicate,
  [326] = 4,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_number,
    STATE(8), 4,
      sym__expression,
      sym__literal,
      sym_string,
      sym_predicate,
  [342] = 4,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 2,
      sym_number,
      sym_identifier,
    STATE(24), 2,
      sym__literal,
      sym_string,
  [357] = 3,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(53), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [369] = 3,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(58), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [381] = 3,
    ACTIONS(7), 1,
      anon_sym_PIPE,
    ACTIONS(62), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
    STATE(22), 2,
      sym_filter,
      aux_sym_expression_repeat1,
  [393] = 3,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(64), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [405] = 3,
    ACTIONS(68), 1,
      anon_sym_PIPE,
    ACTIONS(66), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
    STATE(22), 2,
      sym_filter,
      aux_sym_expression_repeat1,
  [417] = 3,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      aux_sym_program_repeat1,
    ACTIONS(3), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
  [428] = 1,
    ACTIONS(53), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [435] = 3,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      aux_sym_program_repeat1,
    ACTIONS(75), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
  [446] = 2,
    ACTIONS(80), 1,
      anon_sym_COLON,
    ACTIONS(78), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [455] = 1,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
  [461] = 1,
    ACTIONS(84), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_PIPE,
  [467] = 1,
    ACTIONS(86), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
  [472] = 1,
    ACTIONS(88), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
  [477] = 1,
    ACTIONS(90), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
  [482] = 1,
    ACTIONS(92), 1,
      sym_identifier,
  [486] = 1,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
  [490] = 1,
    ACTIONS(96), 1,
      sym_identifier,
  [494] = 1,
    ACTIONS(98), 1,
      anon_sym_EQ,
  [498] = 1,
    ACTIONS(100), 1,
      aux_sym_string_token1,
  [502] = 1,
    ACTIONS(102), 1,
      aux_sym_string_token2,
  [506] = 1,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
  [510] = 1,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 63,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 125,
  [SMALL_STATE(7)] = 147,
  [SMALL_STATE(8)] = 171,
  [SMALL_STATE(9)] = 199,
  [SMALL_STATE(10)] = 225,
  [SMALL_STATE(11)] = 244,
  [SMALL_STATE(12)] = 260,
  [SMALL_STATE(13)] = 278,
  [SMALL_STATE(14)] = 294,
  [SMALL_STATE(15)] = 310,
  [SMALL_STATE(16)] = 326,
  [SMALL_STATE(17)] = 342,
  [SMALL_STATE(18)] = 357,
  [SMALL_STATE(19)] = 369,
  [SMALL_STATE(20)] = 381,
  [SMALL_STATE(21)] = 393,
  [SMALL_STATE(22)] = 405,
  [SMALL_STATE(23)] = 417,
  [SMALL_STATE(24)] = 428,
  [SMALL_STATE(25)] = 435,
  [SMALL_STATE(26)] = 446,
  [SMALL_STATE(27)] = 455,
  [SMALL_STATE(28)] = 461,
  [SMALL_STATE(29)] = 467,
  [SMALL_STATE(30)] = 472,
  [SMALL_STATE(31)] = 477,
  [SMALL_STATE(32)] = 482,
  [SMALL_STATE(33)] = 486,
  [SMALL_STATE(34)] = 490,
  [SMALL_STATE(35)] = 494,
  [SMALL_STATE(36)] = 498,
  [SMALL_STATE(37)] = 502,
  [SMALL_STATE(38)] = 506,
  [SMALL_STATE(39)] = 510,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(17),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(34),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 4, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [104] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

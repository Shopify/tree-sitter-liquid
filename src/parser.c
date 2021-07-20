#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LBRACE_LBRACE = 1,
  anon_sym_RBRACE_RBRACE = 2,
  anon_sym_PIPE = 3,
  anon_sym_COLON = 4,
  anon_sym_assign = 5,
  anon_sym_EQ = 6,
  anon_sym_SQUOTE = 7,
  aux_sym_string_token1 = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_string_token2 = 10,
  sym_number = 11,
  sym_identifier = 12,
  anon_sym_COMMA = 13,
  anon_sym_PLUS = 14,
  anon_sym_DASH = 15,
  anon_sym_STAR = 16,
  anon_sym_SLASH = 17,
  anon_sym_PERCENT = 18,
  anon_sym_CARET = 19,
  anon_sym_EQ_EQ = 20,
  anon_sym_LT = 21,
  anon_sym_LT_EQ = 22,
  anon_sym_BANG_EQ = 23,
  anon_sym_GT_EQ = 24,
  anon_sym_GT = 25,
  anon_sym_and = 26,
  anon_sym_or = 27,
  sym_program = 28,
  sym_filter = 29,
  sym_statement = 30,
  sym__expression = 31,
  sym_expression = 32,
  sym_assignment = 33,
  sym__literal = 34,
  sym_string = 35,
  sym_argument_list = 36,
  sym_predicate = 37,
  aux_sym_expression_repeat1 = 38,
  aux_sym_argument_list_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
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
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
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
  [anon_sym_RBRACE_RBRACE] = {
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
  field_operator = 2,
  field_right = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
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
      if (lookahead == '!') ADVANCE(2);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(43);
      if (lookahead == '^') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(2);
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '>') ADVANCE(43);
      if (lookahead == '^') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == 'g') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == '{') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 45:
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
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
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
    [sym_program] = STATE(37),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(7), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_CARET,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(17), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 2,
      anon_sym_and,
      anon_sym_or,
    STATE(20), 2,
      sym_filter,
      aux_sym_expression_repeat1,
    ACTIONS(11), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(15), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [37] = 2,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 15,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
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
  [59] = 6,
    ACTIONS(13), 1,
      anon_sym_CARET,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(17), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(15), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(25), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_and,
      anon_sym_or,
  [88] = 5,
    ACTIONS(13), 1,
      anon_sym_CARET,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(25), 8,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [115] = 2,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 14,
      anon_sym_RBRACE_RBRACE,
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
  [136] = 3,
    ACTIONS(13), 1,
      anon_sym_CARET,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 13,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [159] = 4,
    ACTIONS(13), 1,
      anon_sym_CARET,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(25), 10,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_or,
  [184] = 7,
    ACTIONS(29), 1,
      anon_sym_assign,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_number,
    STATE(25), 1,
      sym_assignment,
    STATE(26), 2,
      sym_statement,
      sym_expression,
    STATE(2), 4,
      sym__expression,
      sym__literal,
      sym_string,
      sym_predicate,
  [210] = 6,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_number,
    STATE(24), 1,
      sym_argument_list,
    ACTIONS(37), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PIPE,
    STATE(22), 2,
      sym__literal,
      sym_string,
  [231] = 5,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_number,
    STATE(30), 1,
      sym_expression,
    STATE(2), 4,
      sym__expression,
      sym__literal,
      sym_string,
      sym_predicate,
  [250] = 4,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    STATE(5), 4,
      sym__expression,
      sym__literal,
      sym_string,
      sym_predicate,
  [266] = 4,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_number,
    STATE(8), 4,
      sym__expression,
      sym__literal,
      sym_string,
      sym_predicate,
  [282] = 4,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_number,
    STATE(7), 4,
      sym__expression,
      sym__literal,
      sym_string,
      sym_predicate,
  [298] = 4,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_number,
    STATE(6), 4,
      sym__expression,
      sym__literal,
      sym_string,
      sym_predicate,
  [314] = 4,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_number,
    STATE(4), 4,
      sym__expression,
      sym__literal,
      sym_string,
      sym_predicate,
  [330] = 4,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_number,
    STATE(23), 2,
      sym__literal,
      sym_string,
  [344] = 3,
    ACTIONS(53), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(55), 1,
      anon_sym_PIPE,
    STATE(18), 2,
      sym_filter,
      aux_sym_expression_repeat1,
  [355] = 3,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(58), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PIPE,
  [366] = 3,
    ACTIONS(7), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(18), 2,
      sym_filter,
      aux_sym_expression_repeat1,
  [377] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(65), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PIPE,
  [388] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(69), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PIPE,
  [399] = 1,
    ACTIONS(58), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [405] = 1,
    ACTIONS(71), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PIPE,
  [410] = 1,
    ACTIONS(73), 1,
      anon_sym_RBRACE_RBRACE,
  [414] = 1,
    ACTIONS(75), 1,
      anon_sym_RBRACE_RBRACE,
  [418] = 1,
    ACTIONS(77), 1,
      aux_sym_string_token2,
  [422] = 1,
    ACTIONS(79), 1,
      aux_sym_string_token1,
  [426] = 1,
    ACTIONS(81), 1,
      sym_identifier,
  [430] = 1,
    ACTIONS(83), 1,
      anon_sym_RBRACE_RBRACE,
  [434] = 1,
    ACTIONS(85), 1,
      sym_identifier,
  [438] = 1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
  [442] = 1,
    ACTIONS(89), 1,
      anon_sym_EQ,
  [446] = 1,
    ACTIONS(91), 1,
      anon_sym_COLON,
  [450] = 1,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
  [454] = 1,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
  [458] = 1,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 59,
  [SMALL_STATE(5)] = 88,
  [SMALL_STATE(6)] = 115,
  [SMALL_STATE(7)] = 136,
  [SMALL_STATE(8)] = 159,
  [SMALL_STATE(9)] = 184,
  [SMALL_STATE(10)] = 210,
  [SMALL_STATE(11)] = 231,
  [SMALL_STATE(12)] = 250,
  [SMALL_STATE(13)] = 266,
  [SMALL_STATE(14)] = 282,
  [SMALL_STATE(15)] = 298,
  [SMALL_STATE(16)] = 314,
  [SMALL_STATE(17)] = 330,
  [SMALL_STATE(18)] = 344,
  [SMALL_STATE(19)] = 355,
  [SMALL_STATE(20)] = 366,
  [SMALL_STATE(21)] = 377,
  [SMALL_STATE(22)] = 388,
  [SMALL_STATE(23)] = 399,
  [SMALL_STATE(24)] = 405,
  [SMALL_STATE(25)] = 410,
  [SMALL_STATE(26)] = 414,
  [SMALL_STATE(27)] = 418,
  [SMALL_STATE(28)] = 422,
  [SMALL_STATE(29)] = 426,
  [SMALL_STATE(30)] = 430,
  [SMALL_STATE(31)] = 434,
  [SMALL_STATE(32)] = 438,
  [SMALL_STATE(33)] = 442,
  [SMALL_STATE(34)] = 446,
  [SMALL_STATE(35)] = 450,
  [SMALL_STATE(36)] = 454,
  [SMALL_STATE(37)] = 458,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3, .production_id = 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(29),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(17),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [95] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

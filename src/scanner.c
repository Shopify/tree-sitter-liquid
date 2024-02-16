#include <stdio.h>
#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType { 
  INLINE_COMMENT_CONTENT,
  PAIRED_COMMENT_CONTENT,
  RAW_CONTENT,
  NONE
};

static void advance(TSLexer *lexer) { 
  lexer->advance(lexer, false); 
}

static void advance_ws(TSLexer *lexer) {
  while (iswspace(lexer->lookahead)) {
    lexer->advance(lexer, true);
  }
}

bool scan_str(TSLexer *lexer, char *str) {
  for (int i = 0; str[i] != '\0'; i++) {
    if (lexer->lookahead == str[i]) {
      advance(lexer);
    } else {
      return false;
    }
  }
  return true;
}

bool tree_sitter_liquid_external_scanner_scan(
  void *payload, 
  TSLexer *lexer, 
  const bool *valid_symbols
) {

  // error recovery mode check
  if (valid_symbols[NONE]) {
    return false;
  }

  advance_ws(lexer);

  if (valid_symbols[INLINE_COMMENT_CONTENT]) {

    lexer->result_symbol = INLINE_COMMENT_CONTENT;

    if (lexer->lookahead == '#') {
      while (lexer->lookahead != 0) {

        lexer->mark_end(lexer);

        if (lexer->lookahead == '\n') {
          advance(lexer);
          lexer->mark_end(lexer);
          return true;
        }
        
        advance_ws(lexer);

        if (lexer->lookahead == '%') {
          advance(lexer);

          if (lexer->lookahead == '}') {
            advance(lexer);
            return true;
          }
        }

        advance(lexer);
      }
    }
  }

  if (valid_symbols[PAIRED_COMMENT_CONTENT] || valid_symbols[RAW_CONTENT]) {

    while (lexer->lookahead != 0) {

      advance_ws(lexer);

      if (lexer->lookahead == '{') {

        lexer->mark_end(lexer);
        advance(lexer);

        if (lexer->lookahead == '%') {
          advance(lexer);
        } else {
          advance(lexer);
          continue;
        } 

        if (lexer->lookahead == '-') {
          advance(lexer);
        }

        advance_ws(lexer);

        // we need to check for a opening tag for nested comments/raw
        const char *end = "end";
        const char *raw_tag = "raw";
        const char *comment_tag = "comment";

        // consume "end" if exists
        if (lexer->lookahead == 'e' && !scan_str(lexer, end)) {
          advance(lexer);
          continue;
        }

        /* this only works because "raw" and "comment" have different starting */
        /* characters, otherwise we would advance and be unable to correctly match */
        /* the next option. */
        bool is_raw = scan_str(lexer, raw_tag);
        bool is_comment = scan_str(lexer, comment_tag);

        if (is_comment && valid_symbols[PAIRED_COMMENT_CONTENT]) {
          lexer->result_symbol = PAIRED_COMMENT_CONTENT;
        } else if (is_raw && valid_symbols[RAW_CONTENT]) {
          lexer->result_symbol = RAW_CONTENT;
        } else {
          advance(lexer);
          continue;
        }

        advance_ws(lexer);

        if (lexer->lookahead == '-') {
          advance(lexer);
        }

        if (lexer->lookahead == '%') {
          advance(lexer);
        } else {
          advance(lexer);
          continue;
        } 

        if (lexer->lookahead == '}') {
          advance(lexer);
          return true;
        } else {
          advance(lexer);
        }
      }

      advance(lexer);
    }
  }

  return false;
}

void *tree_sitter_liquid_external_scanner_create() { return NULL; }
void tree_sitter_liquid_external_scanner_destroy(void *payload) {}
unsigned tree_sitter_liquid_external_scanner_serialize(void *payload, char *buffer) { return 0; }
void tree_sitter_liquid_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}


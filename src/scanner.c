#include <stdio.h>
#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType { 
  COMMENT_CONTENT,
  RAW_CONTENT
};

void *tree_sitter_liquid_external_scanner_create() { return NULL; }
void tree_sitter_liquid_external_scanner_destroy(void *payload) {}
unsigned tree_sitter_liquid_external_scanner_serialize(void *payload, char *buffer) { return 0; }
void tree_sitter_liquid_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

bool scan_str(TSLexer *lexer, char *str) {
  for (int i = 0; str[i] != '\0'; i++) {
    if (lexer->lookahead == str[i]) {
      lexer->advance(lexer, false);
    } else {
      return false;
    }
  }
  return true;
}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

bool tree_sitter_liquid_external_scanner_scan(
  void *payload, 
  TSLexer *lexer, 
  const bool *valid_symbols
) {

  while (iswspace(lexer->lookahead)) {
    lexer->advance(lexer, true);
  }

  if (valid_symbols[COMMENT_CONTENT] || valid_symbols[RAW_CONTENT]) {
    while (lexer->lookahead) {
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

        while (iswspace(lexer->lookahead)) {
          lexer->advance(lexer, true);
        }

        // we need to check for a opening tag for nested comments/raw
        const char *end = "end";
        const char *raw_tag = "raw";
        const char *comment_tag = "comment";

        // consume "end" if exists
        if (lexer->lookahead == 'e' && !scan_str(lexer, end)) {
          continue;
        }

        /* this only works because "raw" and "comment" have different starting */
        /* characters, otherwise we would advance and be unable to correctly match */
        /* the next option. */
        bool is_raw = scan_str(lexer, raw_tag);
        bool is_comment = scan_str(lexer, comment_tag);

        if (is_comment && valid_symbols[COMMENT_CONTENT]) {
          lexer->result_symbol = COMMENT_CONTENT;
        } else if (is_raw && valid_symbols[RAW_CONTENT]) {
          lexer->result_symbol = RAW_CONTENT;
        } else {
          advance(lexer);
          continue;
        }

        while (iswspace(lexer->lookahead)) {
          lexer->advance(lexer, true);
        }

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
          return true;
        }

        advance(lexer);

      } else {
        advance(lexer);
      }
    }
  }

  return false;
}

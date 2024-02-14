#include <stdio.h>
#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType { 
  COMMENT_CONTENT
};

void *tree_sitter_liquid_external_scanner_create() { return NULL; }
void tree_sitter_liquid_external_scanner_destroy(void *payload) {}
unsigned tree_sitter_liquid_external_scanner_serialize(void *payload, char *buffer) { return 0; }
void tree_sitter_liquid_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

bool tree_sitter_liquid_external_scanner_scan(
  void *payload, 
  TSLexer *lexer, 
  const bool *valid_symbols
) {

  // Eat whitespace
  while (iswspace(lexer->lookahead)) {
    lexer->advance(lexer, true);
  }

  // Paired Comments
  while (lexer->lookahead) {
    if (lexer->lookahead == '{') {

      lexer->mark_end(lexer);
      lexer->advance(lexer, false);

      if (lexer->lookahead == '%') {
        lexer->advance(lexer, false);
      } else {
        lexer->advance(lexer, false);
        continue;
      } 

      if (lexer->lookahead == '-') {
        lexer->advance(lexer, false);
      }

      while (iswspace(lexer->lookahead)) {
        lexer->advance(lexer, true);
      }

      // we need to check for a starting tag for nested comments
      const char *end_comment_tag = "endcomment";
      const char *comment_tag = "comment";
      bool has_endcomment = false;
      bool has_comment = false;

      if (lexer->lookahead == 'e') {
        for (int i = 0; end_comment_tag[i] != '\0' && lexer->lookahead; i++) {
          if (lexer->lookahead == end_comment_tag[i]) {
            lexer->advance(lexer, false);
          } else {
            break;
          }
        }
        has_endcomment = true;
      } else if (lexer->lookahead == 'c') {
        for (int i = 0; comment_tag[i] != '\0' && lexer->lookahead; i++) {
          if (lexer->lookahead == comment_tag[i]) {
            lexer->advance(lexer, false);
          } else {
            break;
          }
        }
        has_comment = true;
      }

      if (!has_endcomment && !has_comment) {
        lexer->advance(lexer, false);
        continue;
      }

      while (iswspace(lexer->lookahead)) {
        lexer->advance(lexer, true);
      }

      if (lexer->lookahead == '-') {
        lexer->advance(lexer, false);
      }

      if (lexer->lookahead == '%') {
        lexer->advance(lexer, false);
      } else {
        lexer->advance(lexer, false);
        continue;
      } 

      if (lexer->lookahead == '}') {
        lexer->result_symbol = COMMENT_CONTENT;
        return true;
      }

      lexer->advance(lexer, false);
    }

    lexer->advance(lexer, false);
  }

  return false;
}

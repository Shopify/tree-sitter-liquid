#include <tree_sitter/parser.h>

#include <cstdio>
#include <cwctype>

enum TokenType {
  RAW_CONTENT,
  COMMENT_CONTENT
};

struct Scanner {
  unsigned serialize(char *buffer) {
    return 0;
  }

  void deserialize(const char *buffer, unsigned length) {}

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[RAW_CONTENT]) {
      return scan_raw_content(lexer);
    } else if (valid_symbols[COMMENT_CONTENT]) {
      return scan_comment_content(lexer);
    } else {
      printf("Unexpected token type");
    }
  }

  bool scan_raw_content(TSLexer *lexer) {
    for (;;) {
      if (lexer->eof(lexer)) {
        lexer->mark_end(lexer);
        lexer->result_symbol = RAW_CONTENT;
        return true;
      }

      if (lexer->lookahead == '{') {
        lexer->mark_end(lexer);
        advance(lexer);

        if (lexer->lookahead == '%') {
          advance(lexer);

          while (iswspace(lexer->lookahead)) {
            advance(lexer);
          }

          if (scan_endraw(lexer)) {
            lexer->result_symbol = RAW_CONTENT;
            return true;
          }
        }
      } else {
        advance(lexer);
      }
    }
  }

  bool scan_endraw(TSLexer *lexer) {
    char characters[] = { 'e', 'n', 'd', 'r', 'a', 'w' };

    for (int i = 0; i < 6; i++) {
      if (lexer->lookahead != characters[i]) {
        return false;
      }

      advance(lexer);
    }

    return true;
  }

  bool scan_comment_content(TSLexer *lexer) {
    int comment_level = 1;

    for (;;) {
      if (lexer->eof(lexer)) {
        lexer->mark_end(lexer);
        lexer->result_symbol = RAW_CONTENT;
        return true;
      }

      if (lexer->lookahead == '{') {
        lexer->mark_end(lexer);
        advance(lexer);

        if (lexer->lookahead == '%') {
          advance(lexer);

          while (iswspace(lexer->lookahead)) {
            advance(lexer);
          }

          if (lexer->lookahead == 'c') {
            if (scan_comment(lexer)) {
              comment_level++;
            }
          } else if (lexer->lookahead == 'e') {
            if (scan_endcomment(lexer)) {
              comment_level--;

              if (comment_level == 0) {
                lexer->result_symbol = COMMENT_CONTENT;
                return true;
              }
            }
          }
        }
      } else {
        advance(lexer);
      }
    }
  }

  bool scan_comment(TSLexer *lexer) {
    char characters[] = { 'c', 'o', 'm', 'm', 'e', 'n', 't' };

    for (int i = 0; i < 6; i++) {
      if (lexer->lookahead != characters[i]) {
        return false;
      }

      advance(lexer);
    }

    return true;
  }

  bool scan_endcomment(TSLexer *lexer) {
    char characters[] = { 'e', 'n', 'd', 'c', 'o', 'm', 'm', 'e', 'n', 't' };

    for (int i = 0; i < 6; i++) {
      if (lexer->lookahead != characters[i]) {
        return false;
      }

      advance(lexer);
    }

    return true;
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }
};

extern "C" {
  void *tree_sitter_liquid_external_scanner_create() {
    return new Scanner();
  }

  bool tree_sitter_liquid_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->scan(lexer, valid_symbols);
  }

  unsigned tree_sitter_liquid_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->serialize(buffer);
  }

  void tree_sitter_liquid_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    scanner->deserialize(buffer, length);
  }

  void tree_sitter_liquid_external_scanner_destroy(void *payload) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    delete scanner;
  }
}

#include <tree_sitter/parser.h>
#include <wctype.h>
#include <stdio.h>

enum TokenType {
  AUTOMATIC_SEMICOLON,
  SINGLE_NEWLINE,
  BLOCK_NEWLINE,
  AT_MOST_ONE_NEWLINE,
};

typedef struct keyword {
  int len;
  const char *word;
} keyword;
#define MAKE_KEYWORD(a, b) static keyword a = { sizeof(b) - 1, b }

MAKE_KEYWORD(ELSE, "else");
MAKE_KEYWORD(CATCH, "catch");
MAKE_KEYWORD(EXTENDS, "extends");
MAKE_KEYWORD(FINALLY, "finally");
MAKE_KEYWORD(FORSOME, "forSome");
MAKE_KEYWORD(MATCH, "match");
MAKE_KEYWORD(WITH, "with");
MAKE_KEYWORD(YIELD, "yield");
MAKE_KEYWORD(COMMA, ";");
MAKE_KEYWORD(PERIOD, ".");
MAKE_KEYWORD(SEMICOLON, ";");
MAKE_KEYWORD(COLON, ":");
MAKE_KEYWORD(EQUALS, "=");
MAKE_KEYWORD(RIGHT_ARROW, "=>");
MAKE_KEYWORD(LEFT_ARROW, "<-");
MAKE_KEYWORD(COVARIANT_TYPE_BOUND, "<:");
MAKE_KEYWORD(VIEW_BOUND, "<%");
MAKE_KEYWORD(CONTRAVARIANT_TYPE_BOUND, ">:");
MAKE_KEYWORD(POUND, "#");
MAKE_KEYWORD(LEFT_BRACKET, "[");
MAKE_KEYWORD(RIGHT_PARENS, ")");
MAKE_KEYWORD(RIGHT_BRACKET, "]");
MAKE_KEYWORD(RIGHT_CURLY, "}");

static keyword* invalid_begin_strings[] = {
  &ELSE,
  &CATCH,
  &EXTENDS,
  &FINALLY,
  &FORSOME,
  &MATCH,
  &WITH,
  &YIELD,
  &COMMA,
  &PERIOD,
  &SEMICOLON,
  &COLON,
  &EQUALS,
  &RIGHT_ARROW,
  &LEFT_ARROW,
  &COVARIANT_TYPE_BOUND,
  &VIEW_BOUND,
  &CONTRAVARIANT_TYPE_BOUND,
  &POUND,
  &LEFT_BRACKET,
  &RIGHT_PARENS,
  &RIGHT_BRACKET,
  &RIGHT_CURLY
};

void *tree_sitter_scalar2c_external_scanner_create() { return NULL; }
void tree_sitter_scalar2c_external_scanner_destroy(void *p) {}
void tree_sitter_scalar2c_external_scanner_reset(void *p) {}
unsigned tree_sitter_scalar2c_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_scalar2c_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

bool tree_sitter_scalar2c_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
  unsigned newline_count = 0;
  lexer->mark_end(lexer);
  while (iswspace(lexer->lookahead)) {
    if (lexer->lookahead == '\n') newline_count++;
    lexer->advance(lexer, true);
    if (newline_count == 1) {
      if (valid_symbols[AT_MOST_ONE_NEWLINE]) {
        lexer->result_symbol = AT_MOST_ONE_NEWLINE;
        while (iswspace(lexer->lookahead)) {
          if (lexer->lookahead == '\n') return false;
          lexer->advance(lexer, true);
        }
        return true;
      } else if (valid_symbols[SINGLE_NEWLINE]) {
        lexer->mark_end(lexer);
        lexer->result_symbol = SINGLE_NEWLINE;
        return true;
      }
    }
  }
  if (valid_symbols[AT_MOST_ONE_NEWLINE]) {
    lexer->result_symbol = AT_MOST_ONE_NEWLINE;
    return newline_count <= 1;
  }

  if (valid_symbols[BLOCK_NEWLINE] && newline_count == 1 &&
    (lexer->lookahead == '{' || lexer->lookahead == '(')) {
    lexer->result_symbol = BLOCK_NEWLINE;
    return true;
  }
  if (valid_symbols[AUTOMATIC_SEMICOLON] && newline_count > 0 && lexer->lookahead) {
    lexer->mark_end(lexer);
    lexer->result_symbol = AUTOMATIC_SEMICOLON;

    if (newline_count > 1) return true;

    int active_count = sizeof(invalid_begin_strings) / sizeof(keyword*);
    int active_automata[active_count];
    for (int i = 0; i < active_count; ++i) active_automata[i] = i;
    int chars_read = 0;
    int next_char = lexer->lookahead;
    while (chars_read < 8 && next_char) {
      int current_char = next_char;
      int char_index = chars_read++;
      next_char = 0;
      int active_index = 0;
      int new_active_count = 0;
      for (int i = 0; i < active_count; ++i) {
        int invalid_index = active_automata[i];
        keyword *word = invalid_begin_strings[invalid_index];
        if (word->word[char_index] == current_char) {
          if (chars_read == word->len) {
            if (next_char == 0) {
              lexer->advance(lexer, false);
              next_char = lexer->lookahead;
            }
            if (iswspace(next_char) || !next_char) return false; // a word that cannot start a statement was found
            else if (chars_read == 1 && current_char == '.') {
              // could be a floating point literal
              lexer->advance(lexer, false);
              return lexer->lookahead >= '0' && lexer->lookahead <= '9';
            }
          } else {
            active_automata[active_index++] = active_automata[invalid_index];
            new_active_count++;
          }
        }
      }
      active_count = new_active_count;
      if (next_char == 0) {
        lexer->advance(lexer, false);
        if (!iswspace(lexer->lookahead)) { next_char = lexer->lookahead; }
      }
    }
    return true;
  }

  return false;
}

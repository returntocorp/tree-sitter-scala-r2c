#include <tree_sitter/parser.h>
#include <wctype.h>
#include <stdio.h>

enum TokenType {
  AUTOMATIC_SEMICOLON,
  DISABLE_AUTOMATIC_SEMICOLON,
  ENABLE_AUTOMATIC_SEMICOLON,
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

typedef struct scanner_state {
  bool automatic_semicolons_disabled;
} scanner_state;

void *tree_sitter_scalar2c_external_scanner_create() {
  scanner_state *state = (scanner_state*) malloc(sizeof(scanner_state));
  state->automatic_semicolons_disabled = false;
  return (void*) state;
}
void tree_sitter_scalar2c_external_scanner_destroy(void *p) { free(p); }
void tree_sitter_scalar2c_external_scanner_reset(void *p) {
  ((scanner_state *)p)->automatic_semicolons_disabled = false;
}
unsigned tree_sitter_scalar2c_external_scanner_serialize(void *p, char *buffer) {
  buffer[0] = ((scanner_state*)p)->automatic_semicolons_disabled;
  return 1;
}
void tree_sitter_scalar2c_external_scanner_deserialize(void *p, const char *b, unsigned n) {
  if (p && n) {
    ((scanner_state*)p)->automatic_semicolons_disabled = b[0];
  }
}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

bool tree_sitter_scalar2c_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
  scanner_state *state = (scanner_state*) payload;
  if (valid_symbols[DISABLE_AUTOMATIC_SEMICOLON]) {
    state->automatic_semicolons_disabled = true;
    lexer->result_symbol = DISABLE_AUTOMATIC_SEMICOLON;
    return true;
  }

  lexer->mark_end(lexer);
  unsigned newline_count = 0;
  while (iswspace(lexer->lookahead)) {
    if (lexer->lookahead == '\n') newline_count++;
    lexer->advance(lexer, false);
  }

  if (valid_symbols[ENABLE_AUTOMATIC_SEMICOLON]) {
    if (newline_count > 0 && lexer->lookahead != '{' || !lexer->lookahead) {
      state->automatic_semicolons_disabled = false;
      lexer->result_symbol = ENABLE_AUTOMATIC_SEMICOLON;
      return true;
    }
  }

  if (valid_symbols[AUTOMATIC_SEMICOLON] && newline_count > 0) {
    lexer->mark_end(lexer);
    lexer->result_symbol = AUTOMATIC_SEMICOLON;

    if (newline_count > 1) return true;
    else if (state->automatic_semicolons_disabled) return false;

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
            if (iswspace(next_char)) return false; // a word that cannot start a statement was found
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
  } else if (valid_symbols[AUTOMATIC_SEMICOLON] && !lexer->lookahead) {
    lexer->mark_end(lexer);
    lexer->result_symbol = AUTOMATIC_SEMICOLON;
    return true;
  }

  return false;
}

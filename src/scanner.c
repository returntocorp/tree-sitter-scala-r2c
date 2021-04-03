#include <tree_sitter/parser.h>
#include <wctype.h>
#include <stdio.h>

typedef enum TokenType {
  WHITESPACE,
  NEWLINE,
  COMMENT,
  AUTOMATIC_SEMICOLON,
  BLOCK_NEWLINES,
  EMPTY,
} TokenType;

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

void *tree_sitter_scala_external_scanner_create() { return malloc(sizeof(unsigned)); }
void tree_sitter_scala_external_scanner_destroy(void *p) { free(p); }
void tree_sitter_scala_external_scanner_reset(void *p) { *((unsigned *)p) = 0; }
unsigned tree_sitter_scala_external_scanner_serialize(void *p, char *buffer) {
  *((unsigned *) buffer) = *((unsigned*)p);
  return sizeof(unsigned);
}
void tree_sitter_scala_external_scanner_deserialize(void *p, const char *b, unsigned n) {
  if (p && b && n >= sizeof(unsigned)) {
    *((unsigned *) p) = *((unsigned *)b);
  }
}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static bool slurp_whitespace(TSLexer *lexer, unsigned *newline_count) {
  bool result = false;
  while (lexer->lookahead && iswspace(lexer->lookahead)) {
    if (lexer->lookahead == '\n') {
      if (!newline_count) {
        return result;
      }
      *newline_count = *newline_count + 1;
    }
    lexer->advance(lexer, true);
    result = true;
  }
  return result;
}

static bool slurp_comment(TSLexer *lexer) {
  if (lexer->lookahead == '/') {
    lexer->advance(lexer, true);
    if (lexer->lookahead == '/') {
      do {
        lexer->advance(lexer, true);
      } while (lexer->lookahead && lexer->lookahead != '\n');
      return true;
    } else if (lexer->lookahead == '*') {
      int depth = 1;
      while (lexer->lookahead) {
        char current_char;
        do {
          lexer->advance(lexer, true);
          current_char = lexer->lookahead;
        } while (current_char && current_char != '*' && current_char != '/');
        if (current_char == '*') {
          do {
            lexer->advance(lexer, true);
            current_char = lexer->lookahead;
          } while (current_char && current_char == '*');
          if (lexer->lookahead == '/') {
            lexer->advance(lexer, true);
            if (--depth == 0) return true;
          }
        } else if (current_char == '/') {
          lexer->advance(lexer, true);
          if (lexer->lookahead == '*') {
            depth ++;
          }
        }
      }
    }
  }
  return false;
}

bool tree_sitter_scala_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
  unsigned *newline_count = ((unsigned *) payload);
  lexer->mark_end(lexer);
  TokenType token;
  bool explicit_newlines = valid_symbols[NEWLINE] || valid_symbols[BLOCK_NEWLINES];
  bool allow_empty = valid_symbols[EMPTY];
  if (*newline_count == -1) {
    *newline_count = 0;
    allow_empty = false;
  }
  if (allow_empty && lexer->lookahead == '}') {
    lexer->result_symbol = EMPTY;
    *newline_count = -1;
    return true;
  } else if (explicit_newlines && lexer->lookahead == '\n') {
    if (valid_symbols[BLOCK_NEWLINES]) {
      slurp_whitespace(lexer, newline_count);
      if (lexer->lookahead == '{' || lexer->lookahead == '(') {
        lexer->mark_end(lexer);
        lexer->result_symbol = BLOCK_NEWLINES;
        *newline_count = 0;
        return true;
      } else {
        lexer->mark_end(lexer);
        lexer->result_symbol = WHITESPACE;
        return true;
      }
    } else {
      lexer->advance(lexer, true);
      lexer->mark_end(lexer);
      lexer->result_symbol = NEWLINE;
      *newline_count = 0;
      return true;
    }
  } else if (valid_symbols[WHITESPACE] &&
      // By passing in NULL to slurp_whitespace if a newline or block_newline
      // rule is valid, we will only slurp up the whitespace that precedes the
      // newline, but not the newline itself. This allows us to only need to handle
      // the explicit newline case in the condition above this one.
      slurp_whitespace(lexer, explicit_newlines ? NULL : newline_count)) {
    lexer->mark_end(lexer);
    lexer->result_symbol = WHITESPACE;
    if (*newline_count == 0 || !lexer->lookahead || !valid_symbols[AUTOMATIC_SEMICOLON]) {
      if (!valid_symbols[AUTOMATIC_SEMICOLON]) *newline_count = 0;
      *newline_count = 0;
      return true;
    }
  } else if (valid_symbols[COMMENT] && slurp_comment(lexer)) {
    lexer->mark_end(lexer);
    lexer->result_symbol = COMMENT;
    return true;
  }

  if (valid_symbols[AUTOMATIC_SEMICOLON] && *newline_count > 0 && lexer->lookahead) {
    lexer->mark_end(lexer);
    lexer->result_symbol = AUTOMATIC_SEMICOLON;

    if (*newline_count > 1) {
      return true;
    }
    *newline_count = 0;

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
            if (iswspace(next_char) || !next_char) {
              lexer->result_symbol = WHITESPACE;
              return true; // a word that cannot start a statement was found
            }
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

  *newline_count = 0;
  return false;
}

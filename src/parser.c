#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_identifier = 1,
  anon_sym_package = 2,
  anon_sym_null = 3,
  anon_sym_DOT = 4,
  anon_sym_object = 5,
  anon_sym_import = 6,
  anon_sym_COMMA = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_case = 10,
  anon_sym_class = 11,
  anon_sym_trait = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_PLUS = 15,
  anon_sym_DASH = 16,
  anon_sym_LT_COLON = 17,
  anon_sym_GT_COLON = 18,
  anon_sym_LT_PERCENT = 19,
  anon_sym_COLON = 20,
  anon_sym_AT = 21,
  anon_sym_val = 22,
  anon_sym_EQ = 23,
  anon_sym_var = 24,
  anon_sym_type = 25,
  anon_sym_def = 26,
  anon_sym_abstract = 27,
  anon_sym_final = 28,
  anon_sym_sealed = 29,
  anon_sym_implicit = 30,
  anon_sym_lazy = 31,
  anon_sym_private = 32,
  anon_sym_protected = 33,
  anon_sym_this = 34,
  anon_sym_override = 35,
  anon_sym_extends = 36,
  anon_sym_LPAREN = 37,
  anon_sym_RPAREN = 38,
  anon_sym_with = 39,
  anon_sym_POUND = 40,
  anon_sym_STAR = 41,
  anon_sym_PIPE = 42,
  anon_sym_if = 43,
  anon_sym_else = 44,
  anon_sym_match = 45,
  anon_sym_try = 46,
  anon_sym_catch = 47,
  anon_sym_finally = 48,
  anon_sym_LT_DASH = 49,
  anon_sym_for = 50,
  anon_sym_yield = 51,
  anon_sym_new = 52,
  anon_sym_BANG = 53,
  anon_sym_TILDE = 54,
  sym_wildcard = 55,
  aux_sym_number_token1 = 56,
  aux_sym_number_token2 = 57,
  anon_sym_true = 58,
  anon_sym_false = 59,
  sym_character_literal = 60,
  sym_symbol_literal = 61,
  sym__interpolated_string_start = 62,
  sym__interpolated_multiline_string_start = 63,
  anon_sym_DOLLAR = 64,
  anon_sym_SEMI = 65,
  sym_comment = 66,
  sym__automatic_semicolon = 67,
  sym__simple_string = 68,
  sym__simple_multiline_string = 69,
  sym__interpolated_string_middle = 70,
  sym__interpolated_string_end = 71,
  sym__interpolated_multiline_string_middle = 72,
  sym__interpolated_multiline_string_end = 73,
  sym_compilation_unit = 74,
  sym__literal = 75,
  sym_qualified_identifier = 76,
  sym_number = 77,
  sym_boolean_literal = 78,
  sym_string = 79,
  aux_sym_compilation_unit_repeat1 = 80,
  aux_sym_compilation_unit_repeat2 = 81,
  aux_sym_qualified_identifier_repeat1 = 82,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_package] = "package",
  [anon_sym_null] = "null",
  [anon_sym_DOT] = ".",
  [anon_sym_object] = "object",
  [anon_sym_import] = "import",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_case] = "case",
  [anon_sym_class] = "class",
  [anon_sym_trait] = "trait",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_GT_COLON] = ">:",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_COLON] = ":",
  [anon_sym_AT] = "@",
  [anon_sym_val] = "val",
  [anon_sym_EQ] = "=",
  [anon_sym_var] = "var",
  [anon_sym_type] = "type",
  [anon_sym_def] = "def",
  [anon_sym_abstract] = "abstract",
  [anon_sym_final] = "final",
  [anon_sym_sealed] = "sealed",
  [anon_sym_implicit] = "implicit",
  [anon_sym_lazy] = "lazy",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [anon_sym_this] = "this",
  [anon_sym_override] = "override",
  [anon_sym_extends] = "extends",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_with] = "with",
  [anon_sym_POUND] = "#",
  [anon_sym_STAR] = "*",
  [anon_sym_PIPE] = "|",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_match] = "match",
  [anon_sym_try] = "try",
  [anon_sym_catch] = "catch",
  [anon_sym_finally] = "finally",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_for] = "for",
  [anon_sym_yield] = "yield",
  [anon_sym_new] = "new",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [sym_wildcard] = "wildcard",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_character_literal] = "character_literal",
  [sym_symbol_literal] = "symbol_literal",
  [sym__interpolated_string_start] = "_interpolated_string_start",
  [sym__interpolated_multiline_string_start] = "_interpolated_multiline_string_start",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_SEMI] = ";",
  [sym_comment] = "comment",
  [sym__automatic_semicolon] = "_automatic_semicolon",
  [sym__simple_string] = "_simple_string",
  [sym__simple_multiline_string] = "_simple_multiline_string",
  [sym__interpolated_string_middle] = "_interpolated_string_middle",
  [sym__interpolated_string_end] = "_interpolated_string_end",
  [sym__interpolated_multiline_string_middle] = "_interpolated_multiline_string_middle",
  [sym__interpolated_multiline_string_end] = "_interpolated_multiline_string_end",
  [sym_compilation_unit] = "compilation_unit",
  [sym__literal] = "_literal",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_number] = "number",
  [sym_boolean_literal] = "boolean_literal",
  [sym_string] = "string",
  [aux_sym_compilation_unit_repeat1] = "compilation_unit_repeat1",
  [aux_sym_compilation_unit_repeat2] = "compilation_unit_repeat2",
  [aux_sym_qualified_identifier_repeat1] = "qualified_identifier_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_trait] = anon_sym_trait,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_GT_COLON] = anon_sym_GT_COLON,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_val] = anon_sym_val,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_final] = anon_sym_final,
  [anon_sym_sealed] = anon_sym_sealed,
  [anon_sym_implicit] = anon_sym_implicit,
  [anon_sym_lazy] = anon_sym_lazy,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_this] = anon_sym_this,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_finally] = anon_sym_finally,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_yield] = anon_sym_yield,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [sym_wildcard] = sym_wildcard,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_character_literal] = sym_character_literal,
  [sym_symbol_literal] = sym_symbol_literal,
  [sym__interpolated_string_start] = sym__interpolated_string_start,
  [sym__interpolated_multiline_string_start] = sym__interpolated_multiline_string_start,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_comment] = sym_comment,
  [sym__automatic_semicolon] = sym__automatic_semicolon,
  [sym__simple_string] = sym__simple_string,
  [sym__simple_multiline_string] = sym__simple_multiline_string,
  [sym__interpolated_string_middle] = sym__interpolated_string_middle,
  [sym__interpolated_string_end] = sym__interpolated_string_end,
  [sym__interpolated_multiline_string_middle] = sym__interpolated_multiline_string_middle,
  [sym__interpolated_multiline_string_end] = sym__interpolated_multiline_string_end,
  [sym_compilation_unit] = sym_compilation_unit,
  [sym__literal] = sym__literal,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_number] = sym_number,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_string] = sym_string,
  [aux_sym_compilation_unit_repeat1] = aux_sym_compilation_unit_repeat1,
  [aux_sym_compilation_unit_repeat2] = aux_sym_compilation_unit_repeat2,
  [aux_sym_qualified_identifier_repeat1] = aux_sym_qualified_identifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_LT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_val] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_final] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sealed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implicit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lazy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_finally] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_character_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__interpolated_string_start] = {
    .visible = false,
    .named = true,
  },
  [sym__interpolated_multiline_string_start] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__automatic_semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_string] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_multiline_string] = {
    .visible = false,
    .named = true,
  },
  [sym__interpolated_string_middle] = {
    .visible = false,
    .named = true,
  },
  [sym__interpolated_string_end] = {
    .visible = false,
    .named = true,
  },
  [sym__interpolated_multiline_string_middle] = {
    .visible = false,
    .named = true,
  },
  [sym__interpolated_multiline_string_end] = {
    .visible = false,
    .named = true,
  },
  [sym_compilation_unit] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_compilation_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compilation_unit_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 8305
    ? (c < 736
      ? (c < 688
        ? c == 170
        : (c <= 696 || (c >= 704 && c <= 705)))
      : (c <= 740 || (c < 7544
        ? c == 890
        : (c <= 7544 || (c >= 7579 && c <= 7615)))))
    : (c <= 8305 || (c < 42652
      ? (c < 8336
        ? c == 8319
        : (c <= 8348 || (c >= 11388 && c <= 11389)))
      : (c <= 42653 || (c < 43000
        ? c == 42864
        : (c <= 43001 || (c >= 43868 && c <= 43871)))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 6917
    ? (c < 3077
      ? (c < 2417
        ? (c < 1568
          ? (c < 895
            ? (c < 710
              ? (c < 192
                ? (c < 181
                  ? c == 170
                  : (c <= 181 || (c >= 186 && c <= 187)))
                : (c <= 214 || (c < 248
                  ? (c >= 216 && c <= 246)
                  : c <= 705)))
              : (c <= 721 || (c < 880
                ? (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))
                : (c <= 884 || (c < 890
                  ? (c >= 886 && c <= 887)
                  : c <= 893)))))
            : (c <= 895 || (c < 1162
              ? (c < 910
                ? (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))
                : (c <= 929 || (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)))
              : (c <= 1327 || (c < 1376
                ? (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)
                : (c <= 1416 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : c <= 1522)))))))
          : (c <= 1610 || (c < 2042
            ? (c < 1791
              ? (c < 1765
                ? (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))
                : (c <= 1766 || (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : c <= 1788)))
              : (c <= 1791 || (c < 1969
                ? (c < 1810
                  ? c == 1808
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))
                : (c <= 1969 || (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : c <= 2037)))))
            : (c <= 2042 || (c < 2208
              ? (c < 2088
                ? (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : (c <= 2074 || c == 2084))
                : (c <= 2088 || (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)))
              : (c <= 2228 || (c < 2365
                ? (c < 2308
                  ? (c >= 2230 && c <= 2247)
                  : c <= 2361)
                : (c <= 2365 || (c < 2392
                  ? c == 2384
                  : c <= 2401)))))))))
        : (c <= 2432 || (c < 2738
          ? (c < 2575
            ? (c < 2493
              ? (c < 2474
                ? (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))
                : (c <= 2480 || (c < 2486
                  ? c == 2482
                  : c <= 2489)))
              : (c <= 2493 || (c < 2544
                ? (c < 2524
                  ? c == 2510
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2565
                  ? c == 2556
                  : c <= 2570)))))
            : (c <= 2576 || (c < 2654
              ? (c < 2613
                ? (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))
              : (c <= 2654 || (c < 2703
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)))))))
          : (c <= 2739 || (c < 2911
            ? (c < 2831
              ? (c < 2784
                ? (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2749 || c == 2768))
                : (c <= 2785 || (c < 2821
                  ? c == 2809
                  : c <= 2828)))
              : (c <= 2832 || (c < 2869
                ? (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))
                : (c <= 2873 || (c < 2908
                  ? c == 2877
                  : c <= 2909)))))
            : (c <= 2913 || (c < 2972
              ? (c < 2958
                ? (c < 2947
                  ? c == 2929
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))
              : (c <= 2972 || (c < 2984
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)
                : (c <= 2986 || (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : c <= 3024)))))))))))
      : (c <= 3084 || (c < 4206
        ? (c < 3507
          ? (c < 3294
            ? (c < 3200
              ? (c < 3133
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3133 || (c < 3168
                  ? (c >= 3160 && c <= 3162)
                  : c <= 3169)))
              : (c <= 3200 || (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))))
            : (c <= 3294 || (c < 3406
              ? (c < 3342
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))
              : (c <= 3406 || (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))))))
          : (c <= 3515 || (c < 3776
            ? (c < 3716
              ? (c < 3634
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))
                : (c <= 3635 || (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : c <= 3714)))
              : (c <= 3716 || (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)))))
            : (c <= 3780 || (c < 4096
              ? (c < 3904
                ? (c < 3804
                  ? c == 3782
                  : (c <= 3807 || c == 3840))
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))
              : (c <= 4138 || (c < 4186
                ? (c < 4176
                  ? c == 4159
                  : c <= 4181)
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : c <= 4198)))))))))
        : (c <= 4208 || (c < 5743
          ? (c < 4752
            ? (c < 4348
              ? (c < 4295
                ? (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))
              : (c <= 4680 || (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : c <= 4749)))))
            : (c <= 4784 || (c < 4882
              ? (c < 4802
                ? (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))
              : (c <= 4885 || (c < 5024
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : c <= 5007)
                : (c <= 5109 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : c <= 5740)))))))
          : (c <= 5759 || (c < 6176
            ? (c < 5952
              ? (c < 5888
                ? (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5900 || (c < 5920
                  ? (c >= 5902 && c <= 5905)
                  : c <= 5937)))
              : (c <= 5969 || (c < 6016
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))))
            : (c <= 6264 || (c < 6512
              ? (c < 6320
                ? (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : (c <= 6312 || c == 6314))
                : (c <= 6389 || (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)))
              : (c <= 6516 || (c < 6656
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)
                : (c <= 6678 || (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : c <= 6823)))))))))))))
    : (c <= 6963 || (c < 43261
      ? (c < 11360
        ? (c < 8126
          ? (c < 7418
            ? (c < 7258
              ? (c < 7098
                ? (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : c <= 7247)))
              : (c <= 7293 || (c < 7401
                ? (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : c <= 7414)))))
            : (c <= 7418 || (c < 8025
              ? (c < 7968
                ? (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))
                : (c <= 8005 || (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)))
              : (c <= 8025 || (c < 8031
                ? (c < 8029
                  ? c == 8027
                  : c <= 8029)
                : (c <= 8061 || (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : c <= 8124)))))))
          : (c <= 8126 || (c < 8469
            ? (c < 8182
              ? (c < 8150
                ? (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : c <= 8180)))
              : (c <= 8188 || (c < 8450
                ? (c < 8319
                  ? c == 8305
                  : (c <= 8319 || (c >= 8336 && c <= 8348)))
                : (c <= 8450 || (c < 8458
                  ? c == 8455
                  : c <= 8467)))))
            : (c <= 8469 || (c < 8508
              ? (c < 8488
                ? (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)))
              : (c <= 8511 || (c < 8544
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)
                : (c <= 8584 || (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : c <= 11358)))))))))
        : (c <= 11492 || (c < 12593
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12344
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12295 || (c < 12337
                  ? (c >= 12321 && c <= 12329)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42656
            ? (c < 40960
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40956
                  ? c == 19968
                  : c <= 40956)))
              : (c <= 42124 || (c < 42538
                ? (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42735 || (c < 43015
              ? (c < 42946
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42943)))
                : (c <= 42954 || (c < 43011
                  ? (c >= 42997 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66864
          ? (c < 66176
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65856
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65908)))))
            : (c <= 66204 || (c < 66504
              ? (c < 66384
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66736
                ? (c < 66560
                  ? (c >= 66513 && c <= 66517)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_12(int32_t c) {
  return (c < ':'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : (c <= '#' || (c >= '%' && c <= '&')))
      : (c <= '+' || (c < '/'
        ? c == '-'
        : c <= '/')))
    : (c <= ':' || (c < '^'
      ? (c < '\\'
        ? (c >= '<' && c <= '@')
        : c <= '\\')
      : (c <= '^' || (c < '~'
        ? c == '|'
        : c <= '~')))));
}

static inline bool sym_identifier_character_set_13(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 187 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2208
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2228 || (c < 2308
                  ? (c >= 2230 && c <= 2247)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4186
        ? (c < 3450
          ? (c < 3242
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3205
                ? (c < 3168
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || c == 3294))
                : (c <= 3297 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)))
              : (c <= 3344 || (c < 3406
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3455 || (c < 3751
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)))
              : (c <= 3635 || (c < 3718
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))
            : (c <= 3760 || (c < 3904
              ? (c < 3782
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))
              : (c <= 3911 || (c < 4096
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))))))))
        : (c <= 4189 || (c < 5024
          ? (c < 4698
            ? (c < 4295
              ? (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))))
            : (c <= 4701 || (c < 4802
              ? (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))
              : (c <= 4805 || (c < 4882
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)
                : (c <= 4885 || (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6103
            ? (c < 5888
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : c <= 5880)))
              : (c <= 5900 || (c < 5984
                ? (c < 5920
                  ? (c >= 5902 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11312
        ? (c < 8118
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)))))))
          : (c <= 8124 || (c < 8458
            ? (c < 8178
              ? (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : c <= 8172)))
              : (c <= 8180 || (c < 8336
                ? (c < 8305
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || c == 8319))
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))))
            : (c <= 8467 || (c < 8495
              ? (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : c <= 8493)))
              : (c <= 8505 || (c < 8526
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : c <= 8521)
                : (c <= 8526 || (c < 11264
                  ? (c >= 8544 && c <= 8584)
                  : c <= 11310)))))))))
        : (c <= 11358 || (c < 12549
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11360 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12337
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : c <= 12329)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66816
          ? (c < 65856
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 65908 || (c < 66464
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66378 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66560
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66517)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_15(int32_t c) {
  return (c < ':'
    ? (c < '%'
      ? (c < '#'
        ? c == '!'
        : c <= '#')
      : (c <= '&' || (c < '-'
        ? c == '+'
        : c <= '-')))
    : (c <= ':' || (c < '^'
      ? (c < '\\'
        ? (c >= '<' && c <= '@')
        : c <= '\\')
      : (c <= '^' || (c < '~'
        ? c == '|'
        : c <= '~')))));
}

static inline bool sym_identifier_character_set_18(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'b'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 187 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2208
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2228 || (c < 2308
                  ? (c >= 2230 && c <= 2247)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4186
        ? (c < 3450
          ? (c < 3242
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3205
                ? (c < 3168
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || c == 3294))
                : (c <= 3297 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)))
              : (c <= 3344 || (c < 3406
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3455 || (c < 3751
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)))
              : (c <= 3635 || (c < 3718
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))
            : (c <= 3760 || (c < 3904
              ? (c < 3782
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))
              : (c <= 3911 || (c < 4096
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))))))))
        : (c <= 4189 || (c < 5024
          ? (c < 4698
            ? (c < 4295
              ? (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))))
            : (c <= 4701 || (c < 4802
              ? (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))
              : (c <= 4805 || (c < 4882
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)
                : (c <= 4885 || (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6103
            ? (c < 5888
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : c <= 5880)))
              : (c <= 5900 || (c < 5984
                ? (c < 5920
                  ? (c >= 5902 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11312
        ? (c < 8118
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)))))))
          : (c <= 8124 || (c < 8458
            ? (c < 8178
              ? (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : c <= 8172)))
              : (c <= 8180 || (c < 8336
                ? (c < 8305
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || c == 8319))
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))))
            : (c <= 8467 || (c < 8495
              ? (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : c <= 8493)))
              : (c <= 8505 || (c < 8526
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : c <= 8521)
                : (c <= 8526 || (c < 11264
                  ? (c >= 8544 && c <= 8584)
                  : c <= 11310)))))))))
        : (c <= 11358 || (c < 12549
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11360 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12337
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : c <= 12329)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66816
          ? (c < 65856
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 65908 || (c < 66464
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66378 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66560
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66517)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      if (lookahead == '!') ADVANCE(75);
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '$') ADVANCE(122);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == ';') ADVANCE(123);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '_') ADVANCE(104);
      if (lookahead == '`') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(84);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '~') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?' ||
          ('\\' <= lookahead && lookahead <= '^')) ADVANCE(101);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      if (('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          lookahead == 187 ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255) ||
          lookahead == 257 ||
          lookahead == 259 ||
          lookahead == 261 ||
          lookahead == 263 ||
          lookahead == 265 ||
          lookahead == 267 ||
          lookahead == 269 ||
          lookahead == 271 ||
          lookahead == 273 ||
          lookahead == 275 ||
          lookahead == 277 ||
          lookahead == 279 ||
          lookahead == 281 ||
          lookahead == 283 ||
          lookahead == 285 ||
          lookahead == 287 ||
          lookahead == 289 ||
          lookahead == 291 ||
          lookahead == 293 ||
          lookahead == 295 ||
          lookahead == 297 ||
          lookahead == 299 ||
          lookahead == 301 ||
          lookahead == 303 ||
          lookahead == 305 ||
          lookahead == 307 ||
          lookahead == 309 ||
          lookahead == 311 ||
          lookahead == 312 ||
          lookahead == 314 ||
          lookahead == 316 ||
          lookahead == 318 ||
          lookahead == 320 ||
          lookahead == 322 ||
          lookahead == 324 ||
          lookahead == 326 ||
          lookahead == 328 ||
          lookahead == 329 ||
          lookahead == 331 ||
          lookahead == 333 ||
          lookahead == 335 ||
          lookahead == 337 ||
          lookahead == 339 ||
          lookahead == 341 ||
          lookahead == 343 ||
          lookahead == 345 ||
          lookahead == 347 ||
          lookahead == 349 ||
          lookahead == 351 ||
          lookahead == 353 ||
          lookahead == 355 ||
          lookahead == 357 ||
          lookahead == 359 ||
          lookahead == 361 ||
          lookahead == 363 ||
          lookahead == 365 ||
          lookahead == 367 ||
          lookahead == 369 ||
          lookahead == 371 ||
          lookahead == 373 ||
          lookahead == 375 ||
          lookahead == 378 ||
          lookahead == 380 ||
          (382 <= lookahead && lookahead <= 384) ||
          lookahead == 387 ||
          lookahead == 389 ||
          lookahead == 392 ||
          lookahead == 396 ||
          lookahead == 397 ||
          lookahead == 402 ||
          lookahead == 405 ||
          (409 <= lookahead && lookahead <= 411) ||
          lookahead == 414 ||
          lookahead == 417 ||
          lookahead == 419 ||
          lookahead == 421 ||
          lookahead == 424 ||
          lookahead == 426 ||
          lookahead == 427 ||
          lookahead == 429 ||
          lookahead == 432 ||
          lookahead == 436 ||
          lookahead == 438 ||
          lookahead == 441 ||
          lookahead == 442 ||
          (445 <= lookahead && lookahead <= 447) ||
          lookahead == 454 ||
          lookahead == 457 ||
          lookahead == 460 ||
          lookahead == 462 ||
          lookahead == 464 ||
          lookahead == 466 ||
          lookahead == 468 ||
          lookahead == 470 ||
          lookahead == 472 ||
          lookahead == 474 ||
          lookahead == 476 ||
          lookahead == 477 ||
          lookahead == 479 ||
          lookahead == 481 ||
          lookahead == 483 ||
          lookahead == 485 ||
          lookahead == 487 ||
          lookahead == 489 ||
          lookahead == 491 ||
          lookahead == 493 ||
          lookahead == 495 ||
          lookahead == 496 ||
          lookahead == 499 ||
          lookahead == 501 ||
          lookahead == 505 ||
          lookahead == 507 ||
          lookahead == 509 ||
          lookahead == 511 ||
          lookahead == 513 ||
          lookahead == 515 ||
          lookahead == 517 ||
          lookahead == 519 ||
          lookahead == 521 ||
          lookahead == 523 ||
          lookahead == 525 ||
          lookahead == 527 ||
          lookahead == 529 ||
          lookahead == 531 ||
          lookahead == 533 ||
          lookahead == 535 ||
          lookahead == 537 ||
          lookahead == 539 ||
          lookahead == 541 ||
          lookahead == 543 ||
          lookahead == 545 ||
          lookahead == 547 ||
          lookahead == 549 ||
          lookahead == 551 ||
          lookahead == 553 ||
          lookahead == 555 ||
          lookahead == 557 ||
          lookahead == 559 ||
          lookahead == 561 ||
          (563 <= lookahead && lookahead <= 569) ||
          lookahead == 572 ||
          lookahead == 575 ||
          lookahead == 576 ||
          lookahead == 578 ||
          lookahead == 583 ||
          lookahead == 585 ||
          lookahead == 587 ||
          lookahead == 589 ||
          (591 <= lookahead && lookahead <= 659) ||
          (661 <= lookahead && lookahead <= 687) ||
          lookahead == 881 ||
          lookahead == 883 ||
          lookahead == 887 ||
          (891 <= lookahead && lookahead <= 893) ||
          lookahead == 912 ||
          (940 <= lookahead && lookahead <= 974) ||
          lookahead == 976 ||
          lookahead == 977 ||
          (981 <= lookahead && lookahead <= 983) ||
          lookahead == 985 ||
          lookahead == 987 ||
          lookahead == 989 ||
          lookahead == 991 ||
          lookahead == 993 ||
          lookahead == 995 ||
          lookahead == 997 ||
          lookahead == 999 ||
          lookahead == 1001 ||
          lookahead == 1003 ||
          lookahead == 1005 ||
          (1007 <= lookahead && lookahead <= 1011) ||
          lookahead == 1013 ||
          lookahead == 1016 ||
          lookahead == 1019 ||
          lookahead == 1020 ||
          (1072 <= lookahead && lookahead <= 1119) ||
          lookahead == 1121 ||
          lookahead == 1123 ||
          lookahead == 1125 ||
          lookahead == 1127 ||
          lookahead == 1129 ||
          lookahead == 1131 ||
          lookahead == 1133 ||
          lookahead == 1135 ||
          lookahead == 1137 ||
          lookahead == 1139 ||
          lookahead == 1141 ||
          lookahead == 1143 ||
          lookahead == 1145 ||
          lookahead == 1147 ||
          lookahead == 1149 ||
          lookahead == 1151 ||
          lookahead == 1153 ||
          lookahead == 1163 ||
          lookahead == 1165 ||
          lookahead == 1167 ||
          lookahead == 1169 ||
          lookahead == 1171 ||
          lookahead == 1173 ||
          lookahead == 1175 ||
          lookahead == 1177 ||
          lookahead == 1179 ||
          lookahead == 1181 ||
          lookahead == 1183 ||
          lookahead == 1185 ||
          lookahead == 1187 ||
          lookahead == 1189 ||
          lookahead == 1191 ||
          lookahead == 1193 ||
          lookahead == 1195 ||
          lookahead == 1197 ||
          lookahead == 1199 ||
          lookahead == 1201 ||
          lookahead == 1203 ||
          lookahead == 1205 ||
          lookahead == 1207 ||
          lookahead == 1209 ||
          lookahead == 1211 ||
          lookahead == 1213 ||
          lookahead == 1215 ||
          lookahead == 1218 ||
          lookahead == 1220 ||
          lookahead == 1222 ||
          lookahead == 1224 ||
          lookahead == 1226 ||
          lookahead == 1228 ||
          lookahead == 1230 ||
          lookahead == 1231 ||
          lookahead == 1233 ||
          lookahead == 1235 ||
          lookahead == 1237 ||
          lookahead == 1239 ||
          lookahead == 1241 ||
          lookahead == 1243 ||
          lookahead == 1245 ||
          lookahead == 1247 ||
          lookahead == 1249 ||
          lookahead == 1251 ||
          lookahead == 1253 ||
          lookahead == 1255 ||
          lookahead == 1257 ||
          lookahead == 1259 ||
          lookahead == 1261 ||
          lookahead == 1263 ||
          lookahead == 1265 ||
          lookahead == 1267 ||
          lookahead == 1269 ||
          lookahead == 1271 ||
          lookahead == 1273 ||
          lookahead == 1275 ||
          lookahead == 1277 ||
          lookahead == 1279 ||
          lookahead == 1281 ||
          lookahead == 1283 ||
          lookahead == 1285 ||
          lookahead == 1287 ||
          lookahead == 1289 ||
          lookahead == 1291 ||
          lookahead == 1293 ||
          lookahead == 1295 ||
          lookahead == 1297 ||
          lookahead == 1299 ||
          lookahead == 1301 ||
          lookahead == 1303 ||
          lookahead == 1305 ||
          lookahead == 1307 ||
          lookahead == 1309 ||
          lookahead == 1311 ||
          lookahead == 1313 ||
          lookahead == 1315 ||
          lookahead == 1317 ||
          lookahead == 1319 ||
          lookahead == 1321 ||
          lookahead == 1323 ||
          lookahead == 1325 ||
          lookahead == 1327 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4349 <= lookahead && lookahead <= 4351) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7424 <= lookahead && lookahead <= 7467) ||
          (7531 <= lookahead && lookahead <= 7578) ||
          lookahead == 7681 ||
          lookahead == 7683 ||
          lookahead == 7685 ||
          lookahead == 7687 ||
          lookahead == 7689 ||
          lookahead == 7691 ||
          lookahead == 7693 ||
          lookahead == 7695 ||
          lookahead == 7697 ||
          lookahead == 7699 ||
          lookahead == 7701 ||
          lookahead == 7703 ||
          lookahead == 7705 ||
          lookahead == 7707 ||
          lookahead == 7709 ||
          lookahead == 7711 ||
          lookahead == 7713 ||
          lookahead == 7715 ||
          lookahead == 7717 ||
          lookahead == 7719 ||
          lookahead == 7721 ||
          lookahead == 7723 ||
          lookahead == 7725 ||
          lookahead == 7727 ||
          lookahead == 7729 ||
          lookahead == 7731 ||
          lookahead == 7733 ||
          lookahead == 7735 ||
          lookahead == 7737 ||
          lookahead == 7739 ||
          lookahead == 7741 ||
          lookahead == 7743 ||
          lookahead == 7745 ||
          lookahead == 7747 ||
          lookahead == 7749 ||
          lookahead == 7751 ||
          lookahead == 7753 ||
          lookahead == 7755 ||
          lookahead == 7757 ||
          lookahead == 7759 ||
          lookahead == 7761 ||
          lookahead == 7763 ||
          lookahead == 7765 ||
          lookahead == 7767 ||
          lookahead == 7769 ||
          lookahead == 7771 ||
          lookahead == 7773 ||
          lookahead == 7775 ||
          lookahead == 7777 ||
          lookahead == 7779 ||
          lookahead == 7781 ||
          lookahead == 7783 ||
          lookahead == 7785 ||
          lookahead == 7787 ||
          lookahead == 7789 ||
          lookahead == 7791 ||
          lookahead == 7793 ||
          lookahead == 7795 ||
          lookahead == 7797 ||
          lookahead == 7799 ||
          lookahead == 7801 ||
          lookahead == 7803 ||
          lookahead == 7805 ||
          lookahead == 7807 ||
          lookahead == 7809 ||
          lookahead == 7811 ||
          lookahead == 7813 ||
          lookahead == 7815 ||
          lookahead == 7817 ||
          lookahead == 7819 ||
          lookahead == 7821 ||
          lookahead == 7823 ||
          lookahead == 7825 ||
          lookahead == 7827 ||
          (7829 <= lookahead && lookahead <= 7837) ||
          lookahead == 7839 ||
          lookahead == 7841 ||
          lookahead == 7843 ||
          lookahead == 7845 ||
          lookahead == 7847 ||
          lookahead == 7849 ||
          lookahead == 7851 ||
          lookahead == 7853 ||
          lookahead == 7855 ||
          lookahead == 7857 ||
          lookahead == 7859 ||
          lookahead == 7861 ||
          lookahead == 7863 ||
          lookahead == 7865 ||
          lookahead == 7867 ||
          lookahead == 7869 ||
          lookahead == 7871 ||
          lookahead == 7873 ||
          lookahead == 7875 ||
          lookahead == 7877 ||
          lookahead == 7879 ||
          lookahead == 7881 ||
          lookahead == 7883 ||
          lookahead == 7885 ||
          lookahead == 7887 ||
          lookahead == 7889 ||
          lookahead == 7891 ||
          lookahead == 7893 ||
          lookahead == 7895 ||
          lookahead == 7897 ||
          lookahead == 7899 ||
          lookahead == 7901 ||
          lookahead == 7903 ||
          lookahead == 7905 ||
          lookahead == 7907 ||
          lookahead == 7909 ||
          lookahead == 7911 ||
          lookahead == 7913 ||
          lookahead == 7915 ||
          lookahead == 7917 ||
          lookahead == 7919 ||
          lookahead == 7921 ||
          lookahead == 7923 ||
          lookahead == 7925 ||
          lookahead == 7927 ||
          lookahead == 7929 ||
          lookahead == 7931 ||
          lookahead == 7933 ||
          (7935 <= lookahead && lookahead <= 7943) ||
          (7952 <= lookahead && lookahead <= 7957) ||
          (7968 <= lookahead && lookahead <= 7975) ||
          (7984 <= lookahead && lookahead <= 7991) ||
          (8000 <= lookahead && lookahead <= 8005) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          (8032 <= lookahead && lookahead <= 8039) ||
          (8048 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8071) ||
          (8080 <= lookahead && lookahead <= 8087) ||
          (8096 <= lookahead && lookahead <= 8103) ||
          (8112 <= lookahead && lookahead <= 8116) ||
          lookahead == 8118 ||
          lookahead == 8119 ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          lookahead == 8134 ||
          lookahead == 8135 ||
          (8144 <= lookahead && lookahead <= 8147) ||
          lookahead == 8150 ||
          lookahead == 8151 ||
          (8160 <= lookahead && lookahead <= 8167) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          lookahead == 8182 ||
          lookahead == 8183 ||
          lookahead == 8458 ||
          lookahead == 8462 ||
          lookahead == 8463 ||
          lookahead == 8467 ||
          lookahead == 8495 ||
          lookahead == 8500 ||
          lookahead == 8505 ||
          lookahead == 8508 ||
          lookahead == 8509 ||
          (8518 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8580 ||
          (11312 <= lookahead && lookahead <= 11358) ||
          lookahead == 11361 ||
          lookahead == 11365 ||
          lookahead == 11366 ||
          lookahead == 11368 ||
          lookahead == 11370 ||
          lookahead == 11372 ||
          lookahead == 11377 ||
          lookahead == 11379 ||
          lookahead == 11380 ||
          (11382 <= lookahead && lookahead <= 11387) ||
          lookahead == 11393 ||
          lookahead == 11395 ||
          lookahead == 11397 ||
          lookahead == 11399 ||
          lookahead == 11401 ||
          lookahead == 11403 ||
          lookahead == 11405 ||
          lookahead == 11407 ||
          lookahead == 11409 ||
          lookahead == 11411 ||
          lookahead == 11413 ||
          lookahead == 11415 ||
          lookahead == 11417 ||
          lookahead == 11419 ||
          lookahead == 11421 ||
          lookahead == 11423 ||
          lookahead == 11425 ||
          lookahead == 11427 ||
          lookahead == 11429 ||
          lookahead == 11431 ||
          lookahead == 11433 ||
          lookahead == 11435 ||
          lookahead == 11437 ||
          lookahead == 11439 ||
          lookahead == 11441 ||
          lookahead == 11443 ||
          lookahead == 11445 ||
          lookahead == 11447 ||
          lookahead == 11449 ||
          lookahead == 11451 ||
          lookahead == 11453 ||
          lookahead == 11455 ||
          lookahead == 11457 ||
          lookahead == 11459 ||
          lookahead == 11461 ||
          lookahead == 11463 ||
          lookahead == 11465 ||
          lookahead == 11467 ||
          lookahead == 11469 ||
          lookahead == 11471 ||
          lookahead == 11473 ||
          lookahead == 11475 ||
          lookahead == 11477 ||
          lookahead == 11479 ||
          lookahead == 11481 ||
          lookahead == 11483 ||
          lookahead == 11485 ||
          lookahead == 11487 ||
          lookahead == 11489 ||
          lookahead == 11491 ||
          lookahead == 11492 ||
          lookahead == 11500 ||
          lookahead == 11502 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          lookahead == 42561 ||
          lookahead == 42563 ||
          lookahead == 42565 ||
          lookahead == 42567 ||
          lookahead == 42569 ||
          lookahead == 42571 ||
          lookahead == 42573 ||
          lookahead == 42575 ||
          lookahead == 42577 ||
          lookahead == 42579 ||
          lookahead == 42581 ||
          lookahead == 42583 ||
          lookahead == 42585 ||
          lookahead == 42587 ||
          lookahead == 42589 ||
          lookahead == 42591 ||
          lookahead == 42593 ||
          lookahead == 42595 ||
          lookahead == 42597 ||
          lookahead == 42599 ||
          lookahead == 42601 ||
          lookahead == 42603 ||
          lookahead == 42605 ||
          lookahead == 42625 ||
          lookahead == 42627 ||
          lookahead == 42629 ||
          lookahead == 42631 ||
          lookahead == 42633 ||
          lookahead == 42635 ||
          lookahead == 42637 ||
          lookahead == 42639 ||
          lookahead == 42641 ||
          lookahead == 42643 ||
          lookahead == 42645 ||
          lookahead == 42647 ||
          lookahead == 42649 ||
          lookahead == 42651 ||
          lookahead == 42787 ||
          lookahead == 42789 ||
          lookahead == 42791 ||
          lookahead == 42793 ||
          lookahead == 42795 ||
          lookahead == 42797 ||
          (42799 <= lookahead && lookahead <= 42801) ||
          lookahead == 42803 ||
          lookahead == 42805 ||
          lookahead == 42807 ||
          lookahead == 42809 ||
          lookahead == 42811 ||
          lookahead == 42813 ||
          lookahead == 42815 ||
          lookahead == 42817 ||
          lookahead == 42819 ||
          lookahead == 42821 ||
          lookahead == 42823 ||
          lookahead == 42825 ||
          lookahead == 42827 ||
          lookahead == 42829 ||
          lookahead == 42831 ||
          lookahead == 42833 ||
          lookahead == 42835 ||
          lookahead == 42837 ||
          lookahead == 42839 ||
          lookahead == 42841 ||
          lookahead == 42843 ||
          lookahead == 42845 ||
          lookahead == 42847 ||
          lookahead == 42849 ||
          lookahead == 42851 ||
          lookahead == 42853 ||
          lookahead == 42855 ||
          lookahead == 42857 ||
          lookahead == 42859 ||
          lookahead == 42861 ||
          (42863 <= lookahead && lookahead <= 42872) ||
          lookahead == 42874 ||
          lookahead == 42876 ||
          lookahead == 42879 ||
          lookahead == 42881 ||
          lookahead == 42883 ||
          lookahead == 42885 ||
          lookahead == 42887 ||
          lookahead == 42892 ||
          lookahead == 42894 ||
          lookahead == 42897 ||
          (42899 <= lookahead && lookahead <= 42901) ||
          lookahead == 42903 ||
          lookahead == 42905 ||
          lookahead == 42907 ||
          lookahead == 42909 ||
          lookahead == 42911 ||
          lookahead == 42913 ||
          lookahead == 42915 ||
          lookahead == 42917 ||
          lookahead == 42919 ||
          lookahead == 42921 ||
          lookahead == 42927 ||
          lookahead == 42933 ||
          lookahead == 42935 ||
          lookahead == 42937 ||
          lookahead == 42939 ||
          lookahead == 42941 ||
          lookahead == 42943 ||
          lookahead == 42947 ||
          lookahead == 42952 ||
          lookahead == 42954 ||
          lookahead == 42998 ||
          lookahead == 43002 ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43872 <= lookahead && lookahead <= 43880) ||
          (43888 <= lookahead && lookahead <= 43967) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (66600 <= lookahead && lookahead <= 66639) ||
          (66776 <= lookahead && lookahead <= 66811)) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222) ||
          (256 <= lookahead && lookahead <= 703) ||
          (710 <= lookahead && lookahead <= 721) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1012) ||
          (1015 <= lookahead && lookahead <= 1152) ||
          (1162 <= lookahead && lookahead <= 1326) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2247) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3332 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5870 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7468 <= lookahead && lookahead <= 7530) ||
          (7680 <= lookahead && lookahead <= 7951) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7976 <= lookahead && lookahead <= 7999) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8047) ||
          (8072 <= lookahead && lookahead <= 8111) ||
          (8120 <= lookahead && lookahead <= 8124) ||
          (8136 <= lookahead && lookahead <= 8140) ||
          (8152 <= lookahead && lookahead <= 8155) ||
          (8168 <= lookahead && lookahead <= 8172) ||
          (8184 <= lookahead && lookahead <= 8188) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8459 <= lookahead && lookahead <= 8466) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8496 <= lookahead && lookahead <= 8504) ||
          lookahead == 8510 ||
          lookahead == 8511 ||
          lookahead == 8517 ||
          (8544 <= lookahead && lookahead <= 8584) ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11360 <= lookahead && lookahead <= 11490) ||
          (11499 <= lookahead && lookahead <= 11501) ||
          lookahead == 11506 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          (12293 <= lookahead && lookahead <= 12295) ||
          (12321 <= lookahead && lookahead <= 12329) ||
          (12337 <= lookahead && lookahead <= 12341) ||
          (12344 <= lookahead && lookahead <= 12348) ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12735) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          lookahead == 13312 ||
          lookahead == 19903 ||
          lookahead == 19968 ||
          lookahead == 40956 ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42650) ||
          (42656 <= lookahead && lookahead <= 42735) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42942) ||
          (42946 <= lookahead && lookahead <= 42953) ||
          (42997 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          lookahead == 43881 ||
          (43968 <= lookahead && lookahead <= 44002) ||
          lookahead == 44032 ||
          lookahead == 55203 ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (65856 <= lookahead && lookahead <= 65908) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66378) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66513 <= lookahead && lookahead <= 66517) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68309)) ADVANCE(100);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(121);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(116);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(125);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '0') ADVANCE(106);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '`') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(101);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      if (('_' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          lookahead == 187 ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255) ||
          lookahead == 257 ||
          lookahead == 259 ||
          lookahead == 261 ||
          lookahead == 263 ||
          lookahead == 265 ||
          lookahead == 267 ||
          lookahead == 269 ||
          lookahead == 271 ||
          lookahead == 273 ||
          lookahead == 275 ||
          lookahead == 277 ||
          lookahead == 279 ||
          lookahead == 281 ||
          lookahead == 283 ||
          lookahead == 285 ||
          lookahead == 287 ||
          lookahead == 289 ||
          lookahead == 291 ||
          lookahead == 293 ||
          lookahead == 295 ||
          lookahead == 297 ||
          lookahead == 299 ||
          lookahead == 301 ||
          lookahead == 303 ||
          lookahead == 305 ||
          lookahead == 307 ||
          lookahead == 309 ||
          lookahead == 311 ||
          lookahead == 312 ||
          lookahead == 314 ||
          lookahead == 316 ||
          lookahead == 318 ||
          lookahead == 320 ||
          lookahead == 322 ||
          lookahead == 324 ||
          lookahead == 326 ||
          lookahead == 328 ||
          lookahead == 329 ||
          lookahead == 331 ||
          lookahead == 333 ||
          lookahead == 335 ||
          lookahead == 337 ||
          lookahead == 339 ||
          lookahead == 341 ||
          lookahead == 343 ||
          lookahead == 345 ||
          lookahead == 347 ||
          lookahead == 349 ||
          lookahead == 351 ||
          lookahead == 353 ||
          lookahead == 355 ||
          lookahead == 357 ||
          lookahead == 359 ||
          lookahead == 361 ||
          lookahead == 363 ||
          lookahead == 365 ||
          lookahead == 367 ||
          lookahead == 369 ||
          lookahead == 371 ||
          lookahead == 373 ||
          lookahead == 375 ||
          lookahead == 378 ||
          lookahead == 380 ||
          (382 <= lookahead && lookahead <= 384) ||
          lookahead == 387 ||
          lookahead == 389 ||
          lookahead == 392 ||
          lookahead == 396 ||
          lookahead == 397 ||
          lookahead == 402 ||
          lookahead == 405 ||
          (409 <= lookahead && lookahead <= 411) ||
          lookahead == 414 ||
          lookahead == 417 ||
          lookahead == 419 ||
          lookahead == 421 ||
          lookahead == 424 ||
          lookahead == 426 ||
          lookahead == 427 ||
          lookahead == 429 ||
          lookahead == 432 ||
          lookahead == 436 ||
          lookahead == 438 ||
          lookahead == 441 ||
          lookahead == 442 ||
          (445 <= lookahead && lookahead <= 447) ||
          lookahead == 454 ||
          lookahead == 457 ||
          lookahead == 460 ||
          lookahead == 462 ||
          lookahead == 464 ||
          lookahead == 466 ||
          lookahead == 468 ||
          lookahead == 470 ||
          lookahead == 472 ||
          lookahead == 474 ||
          lookahead == 476 ||
          lookahead == 477 ||
          lookahead == 479 ||
          lookahead == 481 ||
          lookahead == 483 ||
          lookahead == 485 ||
          lookahead == 487 ||
          lookahead == 489 ||
          lookahead == 491 ||
          lookahead == 493 ||
          lookahead == 495 ||
          lookahead == 496 ||
          lookahead == 499 ||
          lookahead == 501 ||
          lookahead == 505 ||
          lookahead == 507 ||
          lookahead == 509 ||
          lookahead == 511 ||
          lookahead == 513 ||
          lookahead == 515 ||
          lookahead == 517 ||
          lookahead == 519 ||
          lookahead == 521 ||
          lookahead == 523 ||
          lookahead == 525 ||
          lookahead == 527 ||
          lookahead == 529 ||
          lookahead == 531 ||
          lookahead == 533 ||
          lookahead == 535 ||
          lookahead == 537 ||
          lookahead == 539 ||
          lookahead == 541 ||
          lookahead == 543 ||
          lookahead == 545 ||
          lookahead == 547 ||
          lookahead == 549 ||
          lookahead == 551 ||
          lookahead == 553 ||
          lookahead == 555 ||
          lookahead == 557 ||
          lookahead == 559 ||
          lookahead == 561 ||
          (563 <= lookahead && lookahead <= 569) ||
          lookahead == 572 ||
          lookahead == 575 ||
          lookahead == 576 ||
          lookahead == 578 ||
          lookahead == 583 ||
          lookahead == 585 ||
          lookahead == 587 ||
          lookahead == 589 ||
          (591 <= lookahead && lookahead <= 659) ||
          (661 <= lookahead && lookahead <= 687) ||
          lookahead == 881 ||
          lookahead == 883 ||
          lookahead == 887 ||
          (891 <= lookahead && lookahead <= 893) ||
          lookahead == 912 ||
          (940 <= lookahead && lookahead <= 974) ||
          lookahead == 976 ||
          lookahead == 977 ||
          (981 <= lookahead && lookahead <= 983) ||
          lookahead == 985 ||
          lookahead == 987 ||
          lookahead == 989 ||
          lookahead == 991 ||
          lookahead == 993 ||
          lookahead == 995 ||
          lookahead == 997 ||
          lookahead == 999 ||
          lookahead == 1001 ||
          lookahead == 1003 ||
          lookahead == 1005 ||
          (1007 <= lookahead && lookahead <= 1011) ||
          lookahead == 1013 ||
          lookahead == 1016 ||
          lookahead == 1019 ||
          lookahead == 1020 ||
          (1072 <= lookahead && lookahead <= 1119) ||
          lookahead == 1121 ||
          lookahead == 1123 ||
          lookahead == 1125 ||
          lookahead == 1127 ||
          lookahead == 1129 ||
          lookahead == 1131 ||
          lookahead == 1133 ||
          lookahead == 1135 ||
          lookahead == 1137 ||
          lookahead == 1139 ||
          lookahead == 1141 ||
          lookahead == 1143 ||
          lookahead == 1145 ||
          lookahead == 1147 ||
          lookahead == 1149 ||
          lookahead == 1151 ||
          lookahead == 1153 ||
          lookahead == 1163 ||
          lookahead == 1165 ||
          lookahead == 1167 ||
          lookahead == 1169 ||
          lookahead == 1171 ||
          lookahead == 1173 ||
          lookahead == 1175 ||
          lookahead == 1177 ||
          lookahead == 1179 ||
          lookahead == 1181 ||
          lookahead == 1183 ||
          lookahead == 1185 ||
          lookahead == 1187 ||
          lookahead == 1189 ||
          lookahead == 1191 ||
          lookahead == 1193 ||
          lookahead == 1195 ||
          lookahead == 1197 ||
          lookahead == 1199 ||
          lookahead == 1201 ||
          lookahead == 1203 ||
          lookahead == 1205 ||
          lookahead == 1207 ||
          lookahead == 1209 ||
          lookahead == 1211 ||
          lookahead == 1213 ||
          lookahead == 1215 ||
          lookahead == 1218 ||
          lookahead == 1220 ||
          lookahead == 1222 ||
          lookahead == 1224 ||
          lookahead == 1226 ||
          lookahead == 1228 ||
          lookahead == 1230 ||
          lookahead == 1231 ||
          lookahead == 1233 ||
          lookahead == 1235 ||
          lookahead == 1237 ||
          lookahead == 1239 ||
          lookahead == 1241 ||
          lookahead == 1243 ||
          lookahead == 1245 ||
          lookahead == 1247 ||
          lookahead == 1249 ||
          lookahead == 1251 ||
          lookahead == 1253 ||
          lookahead == 1255 ||
          lookahead == 1257 ||
          lookahead == 1259 ||
          lookahead == 1261 ||
          lookahead == 1263 ||
          lookahead == 1265 ||
          lookahead == 1267 ||
          lookahead == 1269 ||
          lookahead == 1271 ||
          lookahead == 1273 ||
          lookahead == 1275 ||
          lookahead == 1277 ||
          lookahead == 1279 ||
          lookahead == 1281 ||
          lookahead == 1283 ||
          lookahead == 1285 ||
          lookahead == 1287 ||
          lookahead == 1289 ||
          lookahead == 1291 ||
          lookahead == 1293 ||
          lookahead == 1295 ||
          lookahead == 1297 ||
          lookahead == 1299 ||
          lookahead == 1301 ||
          lookahead == 1303 ||
          lookahead == 1305 ||
          lookahead == 1307 ||
          lookahead == 1309 ||
          lookahead == 1311 ||
          lookahead == 1313 ||
          lookahead == 1315 ||
          lookahead == 1317 ||
          lookahead == 1319 ||
          lookahead == 1321 ||
          lookahead == 1323 ||
          lookahead == 1325 ||
          lookahead == 1327 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4349 <= lookahead && lookahead <= 4351) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7424 <= lookahead && lookahead <= 7467) ||
          (7531 <= lookahead && lookahead <= 7578) ||
          lookahead == 7681 ||
          lookahead == 7683 ||
          lookahead == 7685 ||
          lookahead == 7687 ||
          lookahead == 7689 ||
          lookahead == 7691 ||
          lookahead == 7693 ||
          lookahead == 7695 ||
          lookahead == 7697 ||
          lookahead == 7699 ||
          lookahead == 7701 ||
          lookahead == 7703 ||
          lookahead == 7705 ||
          lookahead == 7707 ||
          lookahead == 7709 ||
          lookahead == 7711 ||
          lookahead == 7713 ||
          lookahead == 7715 ||
          lookahead == 7717 ||
          lookahead == 7719 ||
          lookahead == 7721 ||
          lookahead == 7723 ||
          lookahead == 7725 ||
          lookahead == 7727 ||
          lookahead == 7729 ||
          lookahead == 7731 ||
          lookahead == 7733 ||
          lookahead == 7735 ||
          lookahead == 7737 ||
          lookahead == 7739 ||
          lookahead == 7741 ||
          lookahead == 7743 ||
          lookahead == 7745 ||
          lookahead == 7747 ||
          lookahead == 7749 ||
          lookahead == 7751 ||
          lookahead == 7753 ||
          lookahead == 7755 ||
          lookahead == 7757 ||
          lookahead == 7759 ||
          lookahead == 7761 ||
          lookahead == 7763 ||
          lookahead == 7765 ||
          lookahead == 7767 ||
          lookahead == 7769 ||
          lookahead == 7771 ||
          lookahead == 7773 ||
          lookahead == 7775 ||
          lookahead == 7777 ||
          lookahead == 7779 ||
          lookahead == 7781 ||
          lookahead == 7783 ||
          lookahead == 7785 ||
          lookahead == 7787 ||
          lookahead == 7789 ||
          lookahead == 7791 ||
          lookahead == 7793 ||
          lookahead == 7795 ||
          lookahead == 7797 ||
          lookahead == 7799 ||
          lookahead == 7801 ||
          lookahead == 7803 ||
          lookahead == 7805 ||
          lookahead == 7807 ||
          lookahead == 7809 ||
          lookahead == 7811 ||
          lookahead == 7813 ||
          lookahead == 7815 ||
          lookahead == 7817 ||
          lookahead == 7819 ||
          lookahead == 7821 ||
          lookahead == 7823 ||
          lookahead == 7825 ||
          lookahead == 7827 ||
          (7829 <= lookahead && lookahead <= 7837) ||
          lookahead == 7839 ||
          lookahead == 7841 ||
          lookahead == 7843 ||
          lookahead == 7845 ||
          lookahead == 7847 ||
          lookahead == 7849 ||
          lookahead == 7851 ||
          lookahead == 7853 ||
          lookahead == 7855 ||
          lookahead == 7857 ||
          lookahead == 7859 ||
          lookahead == 7861 ||
          lookahead == 7863 ||
          lookahead == 7865 ||
          lookahead == 7867 ||
          lookahead == 7869 ||
          lookahead == 7871 ||
          lookahead == 7873 ||
          lookahead == 7875 ||
          lookahead == 7877 ||
          lookahead == 7879 ||
          lookahead == 7881 ||
          lookahead == 7883 ||
          lookahead == 7885 ||
          lookahead == 7887 ||
          lookahead == 7889 ||
          lookahead == 7891 ||
          lookahead == 7893 ||
          lookahead == 7895 ||
          lookahead == 7897 ||
          lookahead == 7899 ||
          lookahead == 7901 ||
          lookahead == 7903 ||
          lookahead == 7905 ||
          lookahead == 7907 ||
          lookahead == 7909 ||
          lookahead == 7911 ||
          lookahead == 7913 ||
          lookahead == 7915 ||
          lookahead == 7917 ||
          lookahead == 7919 ||
          lookahead == 7921 ||
          lookahead == 7923 ||
          lookahead == 7925 ||
          lookahead == 7927 ||
          lookahead == 7929 ||
          lookahead == 7931 ||
          lookahead == 7933 ||
          (7935 <= lookahead && lookahead <= 7943) ||
          (7952 <= lookahead && lookahead <= 7957) ||
          (7968 <= lookahead && lookahead <= 7975) ||
          (7984 <= lookahead && lookahead <= 7991) ||
          (8000 <= lookahead && lookahead <= 8005) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          (8032 <= lookahead && lookahead <= 8039) ||
          (8048 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8071) ||
          (8080 <= lookahead && lookahead <= 8087) ||
          (8096 <= lookahead && lookahead <= 8103) ||
          (8112 <= lookahead && lookahead <= 8116) ||
          lookahead == 8118 ||
          lookahead == 8119 ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          lookahead == 8134 ||
          lookahead == 8135 ||
          (8144 <= lookahead && lookahead <= 8147) ||
          lookahead == 8150 ||
          lookahead == 8151 ||
          (8160 <= lookahead && lookahead <= 8167) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          lookahead == 8182 ||
          lookahead == 8183 ||
          lookahead == 8458 ||
          lookahead == 8462 ||
          lookahead == 8463 ||
          lookahead == 8467 ||
          lookahead == 8495 ||
          lookahead == 8500 ||
          lookahead == 8505 ||
          lookahead == 8508 ||
          lookahead == 8509 ||
          (8518 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8580 ||
          (11312 <= lookahead && lookahead <= 11358) ||
          lookahead == 11361 ||
          lookahead == 11365 ||
          lookahead == 11366 ||
          lookahead == 11368 ||
          lookahead == 11370 ||
          lookahead == 11372 ||
          lookahead == 11377 ||
          lookahead == 11379 ||
          lookahead == 11380 ||
          (11382 <= lookahead && lookahead <= 11387) ||
          lookahead == 11393 ||
          lookahead == 11395 ||
          lookahead == 11397 ||
          lookahead == 11399 ||
          lookahead == 11401 ||
          lookahead == 11403 ||
          lookahead == 11405 ||
          lookahead == 11407 ||
          lookahead == 11409 ||
          lookahead == 11411 ||
          lookahead == 11413 ||
          lookahead == 11415 ||
          lookahead == 11417 ||
          lookahead == 11419 ||
          lookahead == 11421 ||
          lookahead == 11423 ||
          lookahead == 11425 ||
          lookahead == 11427 ||
          lookahead == 11429 ||
          lookahead == 11431 ||
          lookahead == 11433 ||
          lookahead == 11435 ||
          lookahead == 11437 ||
          lookahead == 11439 ||
          lookahead == 11441 ||
          lookahead == 11443 ||
          lookahead == 11445 ||
          lookahead == 11447 ||
          lookahead == 11449 ||
          lookahead == 11451 ||
          lookahead == 11453 ||
          lookahead == 11455 ||
          lookahead == 11457 ||
          lookahead == 11459 ||
          lookahead == 11461 ||
          lookahead == 11463 ||
          lookahead == 11465 ||
          lookahead == 11467 ||
          lookahead == 11469 ||
          lookahead == 11471 ||
          lookahead == 11473 ||
          lookahead == 11475 ||
          lookahead == 11477 ||
          lookahead == 11479 ||
          lookahead == 11481 ||
          lookahead == 11483 ||
          lookahead == 11485 ||
          lookahead == 11487 ||
          lookahead == 11489 ||
          lookahead == 11491 ||
          lookahead == 11492 ||
          lookahead == 11500 ||
          lookahead == 11502 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          lookahead == 42561 ||
          lookahead == 42563 ||
          lookahead == 42565 ||
          lookahead == 42567 ||
          lookahead == 42569 ||
          lookahead == 42571 ||
          lookahead == 42573 ||
          lookahead == 42575 ||
          lookahead == 42577 ||
          lookahead == 42579 ||
          lookahead == 42581 ||
          lookahead == 42583 ||
          lookahead == 42585 ||
          lookahead == 42587 ||
          lookahead == 42589 ||
          lookahead == 42591 ||
          lookahead == 42593 ||
          lookahead == 42595 ||
          lookahead == 42597 ||
          lookahead == 42599 ||
          lookahead == 42601 ||
          lookahead == 42603 ||
          lookahead == 42605 ||
          lookahead == 42625 ||
          lookahead == 42627 ||
          lookahead == 42629 ||
          lookahead == 42631 ||
          lookahead == 42633 ||
          lookahead == 42635 ||
          lookahead == 42637 ||
          lookahead == 42639 ||
          lookahead == 42641 ||
          lookahead == 42643 ||
          lookahead == 42645 ||
          lookahead == 42647 ||
          lookahead == 42649 ||
          lookahead == 42651 ||
          lookahead == 42787 ||
          lookahead == 42789 ||
          lookahead == 42791 ||
          lookahead == 42793 ||
          lookahead == 42795 ||
          lookahead == 42797 ||
          (42799 <= lookahead && lookahead <= 42801) ||
          lookahead == 42803 ||
          lookahead == 42805 ||
          lookahead == 42807 ||
          lookahead == 42809 ||
          lookahead == 42811 ||
          lookahead == 42813 ||
          lookahead == 42815 ||
          lookahead == 42817 ||
          lookahead == 42819 ||
          lookahead == 42821 ||
          lookahead == 42823 ||
          lookahead == 42825 ||
          lookahead == 42827 ||
          lookahead == 42829 ||
          lookahead == 42831 ||
          lookahead == 42833 ||
          lookahead == 42835 ||
          lookahead == 42837 ||
          lookahead == 42839 ||
          lookahead == 42841 ||
          lookahead == 42843 ||
          lookahead == 42845 ||
          lookahead == 42847 ||
          lookahead == 42849 ||
          lookahead == 42851 ||
          lookahead == 42853 ||
          lookahead == 42855 ||
          lookahead == 42857 ||
          lookahead == 42859 ||
          lookahead == 42861 ||
          (42863 <= lookahead && lookahead <= 42872) ||
          lookahead == 42874 ||
          lookahead == 42876 ||
          lookahead == 42879 ||
          lookahead == 42881 ||
          lookahead == 42883 ||
          lookahead == 42885 ||
          lookahead == 42887 ||
          lookahead == 42892 ||
          lookahead == 42894 ||
          lookahead == 42897 ||
          (42899 <= lookahead && lookahead <= 42901) ||
          lookahead == 42903 ||
          lookahead == 42905 ||
          lookahead == 42907 ||
          lookahead == 42909 ||
          lookahead == 42911 ||
          lookahead == 42913 ||
          lookahead == 42915 ||
          lookahead == 42917 ||
          lookahead == 42919 ||
          lookahead == 42921 ||
          lookahead == 42927 ||
          lookahead == 42933 ||
          lookahead == 42935 ||
          lookahead == 42937 ||
          lookahead == 42939 ||
          lookahead == 42941 ||
          lookahead == 42943 ||
          lookahead == 42947 ||
          lookahead == 42952 ||
          lookahead == 42954 ||
          lookahead == 42998 ||
          lookahead == 43002 ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43872 <= lookahead && lookahead <= 43880) ||
          (43888 <= lookahead && lookahead <= 43967) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (66600 <= lookahead && lookahead <= 66639) ||
          (66776 <= lookahead && lookahead <= 66811)) ADVANCE(100);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222) ||
          (256 <= lookahead && lookahead <= 703) ||
          (710 <= lookahead && lookahead <= 721) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1012) ||
          (1015 <= lookahead && lookahead <= 1152) ||
          (1162 <= lookahead && lookahead <= 1326) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2247) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3332 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5870 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7468 <= lookahead && lookahead <= 7530) ||
          (7680 <= lookahead && lookahead <= 7951) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7976 <= lookahead && lookahead <= 7999) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8047) ||
          (8072 <= lookahead && lookahead <= 8111) ||
          (8120 <= lookahead && lookahead <= 8124) ||
          (8136 <= lookahead && lookahead <= 8140) ||
          (8152 <= lookahead && lookahead <= 8155) ||
          (8168 <= lookahead && lookahead <= 8172) ||
          (8184 <= lookahead && lookahead <= 8188) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8459 <= lookahead && lookahead <= 8466) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8496 <= lookahead && lookahead <= 8504) ||
          lookahead == 8510 ||
          lookahead == 8511 ||
          lookahead == 8517 ||
          (8544 <= lookahead && lookahead <= 8584) ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11360 <= lookahead && lookahead <= 11490) ||
          (11499 <= lookahead && lookahead <= 11501) ||
          lookahead == 11506 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          (12293 <= lookahead && lookahead <= 12295) ||
          (12321 <= lookahead && lookahead <= 12329) ||
          (12337 <= lookahead && lookahead <= 12341) ||
          (12344 <= lookahead && lookahead <= 12348) ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12735) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          lookahead == 13312 ||
          lookahead == 19903 ||
          lookahead == 19968 ||
          lookahead == 40956 ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42650) ||
          (42656 <= lookahead && lookahead <= 42735) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42942) ||
          (42946 <= lookahead && lookahead <= 42953) ||
          (42997 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          lookahead == 43881 ||
          (43968 <= lookahead && lookahead <= 44002) ||
          lookahead == 44032 ||
          lookahead == 55203 ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (65856 <= lookahead && lookahead <= 65908) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66378) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66513 <= lookahead && lookahead <= 66517) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68309)) ADVANCE(100);
      END_STATE();
    case 10:
      if (lookahead == '\\') ADVANCE(2);
      if ((' ' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= 127)) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(119);
      END_STATE();
    case 11:
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == '`') ADVANCE(77);
      if ((' ' <= lookahead && lookahead <= '#') ||
          ('%' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '^') ||
          ('{' <= lookahead && lookahead <= 127)) ADVANCE(18);
      if (('$' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '`') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      if ((' ' <= lookahead && lookahead <= 127)) ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '`') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(12);
      if ((' ' <= lookahead && lookahead <= 127)) ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '`') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      if ((' ' <= lookahead && lookahead <= 127)) ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '`') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      if ((' ' <= lookahead && lookahead <= 127)) ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '`') ADVANCE(77);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      if ((' ' <= lookahead && lookahead <= 127)) ADVANCE(18);
      if (lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 187 ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255) ||
          lookahead == 257 ||
          lookahead == 259 ||
          lookahead == 261 ||
          lookahead == 263 ||
          lookahead == 265 ||
          lookahead == 267 ||
          lookahead == 269 ||
          lookahead == 271 ||
          lookahead == 273 ||
          lookahead == 275 ||
          lookahead == 277 ||
          lookahead == 279 ||
          lookahead == 281 ||
          lookahead == 283 ||
          lookahead == 285 ||
          lookahead == 287 ||
          lookahead == 289 ||
          lookahead == 291 ||
          lookahead == 293 ||
          lookahead == 295 ||
          lookahead == 297 ||
          lookahead == 299 ||
          lookahead == 301 ||
          lookahead == 303 ||
          lookahead == 305 ||
          lookahead == 307 ||
          lookahead == 309 ||
          lookahead == 311 ||
          lookahead == 312 ||
          lookahead == 314 ||
          lookahead == 316 ||
          lookahead == 318 ||
          lookahead == 320 ||
          lookahead == 322 ||
          lookahead == 324 ||
          lookahead == 326 ||
          lookahead == 328 ||
          lookahead == 329 ||
          lookahead == 331 ||
          lookahead == 333 ||
          lookahead == 335 ||
          lookahead == 337 ||
          lookahead == 339 ||
          lookahead == 341 ||
          lookahead == 343 ||
          lookahead == 345 ||
          lookahead == 347 ||
          lookahead == 349 ||
          lookahead == 351 ||
          lookahead == 353 ||
          lookahead == 355 ||
          lookahead == 357 ||
          lookahead == 359 ||
          lookahead == 361 ||
          lookahead == 363 ||
          lookahead == 365 ||
          lookahead == 367 ||
          lookahead == 369 ||
          lookahead == 371 ||
          lookahead == 373 ||
          lookahead == 375 ||
          lookahead == 378 ||
          lookahead == 380 ||
          (382 <= lookahead && lookahead <= 384) ||
          lookahead == 387 ||
          lookahead == 389 ||
          lookahead == 392 ||
          lookahead == 396 ||
          lookahead == 397 ||
          lookahead == 402 ||
          lookahead == 405 ||
          (409 <= lookahead && lookahead <= 411) ||
          lookahead == 414 ||
          lookahead == 417 ||
          lookahead == 419 ||
          lookahead == 421 ||
          lookahead == 424 ||
          lookahead == 426 ||
          lookahead == 427 ||
          lookahead == 429 ||
          lookahead == 432 ||
          lookahead == 436 ||
          lookahead == 438 ||
          lookahead == 441 ||
          lookahead == 442 ||
          (445 <= lookahead && lookahead <= 447) ||
          lookahead == 454 ||
          lookahead == 457 ||
          lookahead == 460 ||
          lookahead == 462 ||
          lookahead == 464 ||
          lookahead == 466 ||
          lookahead == 468 ||
          lookahead == 470 ||
          lookahead == 472 ||
          lookahead == 474 ||
          lookahead == 476 ||
          lookahead == 477 ||
          lookahead == 479 ||
          lookahead == 481 ||
          lookahead == 483 ||
          lookahead == 485 ||
          lookahead == 487 ||
          lookahead == 489 ||
          lookahead == 491 ||
          lookahead == 493 ||
          lookahead == 495 ||
          lookahead == 496 ||
          lookahead == 499 ||
          lookahead == 501 ||
          lookahead == 505 ||
          lookahead == 507 ||
          lookahead == 509 ||
          lookahead == 511 ||
          lookahead == 513 ||
          lookahead == 515 ||
          lookahead == 517 ||
          lookahead == 519 ||
          lookahead == 521 ||
          lookahead == 523 ||
          lookahead == 525 ||
          lookahead == 527 ||
          lookahead == 529 ||
          lookahead == 531 ||
          lookahead == 533 ||
          lookahead == 535 ||
          lookahead == 537 ||
          lookahead == 539 ||
          lookahead == 541 ||
          lookahead == 543 ||
          lookahead == 545 ||
          lookahead == 547 ||
          lookahead == 549 ||
          lookahead == 551 ||
          lookahead == 553 ||
          lookahead == 555 ||
          lookahead == 557 ||
          lookahead == 559 ||
          lookahead == 561 ||
          (563 <= lookahead && lookahead <= 569) ||
          lookahead == 572 ||
          lookahead == 575 ||
          lookahead == 576 ||
          lookahead == 578 ||
          lookahead == 583 ||
          lookahead == 585 ||
          lookahead == 587 ||
          lookahead == 589 ||
          (591 <= lookahead && lookahead <= 659) ||
          (661 <= lookahead && lookahead <= 696) ||
          lookahead == 704 ||
          lookahead == 705 ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 881 ||
          lookahead == 883 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 912 ||
          (940 <= lookahead && lookahead <= 974) ||
          lookahead == 976 ||
          lookahead == 977 ||
          (981 <= lookahead && lookahead <= 983) ||
          lookahead == 985 ||
          lookahead == 987 ||
          lookahead == 989 ||
          lookahead == 991 ||
          lookahead == 993 ||
          lookahead == 995 ||
          lookahead == 997 ||
          lookahead == 999 ||
          lookahead == 1001 ||
          lookahead == 1003 ||
          lookahead == 1005 ||
          (1007 <= lookahead && lookahead <= 1011) ||
          lookahead == 1013 ||
          lookahead == 1016 ||
          lookahead == 1019 ||
          lookahead == 1020 ||
          (1072 <= lookahead && lookahead <= 1119) ||
          lookahead == 1121 ||
          lookahead == 1123 ||
          lookahead == 1125 ||
          lookahead == 1127 ||
          lookahead == 1129 ||
          lookahead == 1131 ||
          lookahead == 1133 ||
          lookahead == 1135 ||
          lookahead == 1137 ||
          lookahead == 1139 ||
          lookahead == 1141 ||
          lookahead == 1143 ||
          lookahead == 1145 ||
          lookahead == 1147 ||
          lookahead == 1149 ||
          lookahead == 1151 ||
          lookahead == 1153 ||
          lookahead == 1163 ||
          lookahead == 1165 ||
          lookahead == 1167 ||
          lookahead == 1169 ||
          lookahead == 1171 ||
          lookahead == 1173 ||
          lookahead == 1175 ||
          lookahead == 1177 ||
          lookahead == 1179 ||
          lookahead == 1181 ||
          lookahead == 1183 ||
          lookahead == 1185 ||
          lookahead == 1187 ||
          lookahead == 1189 ||
          lookahead == 1191 ||
          lookahead == 1193 ||
          lookahead == 1195 ||
          lookahead == 1197 ||
          lookahead == 1199 ||
          lookahead == 1201 ||
          lookahead == 1203 ||
          lookahead == 1205 ||
          lookahead == 1207 ||
          lookahead == 1209 ||
          lookahead == 1211 ||
          lookahead == 1213 ||
          lookahead == 1215 ||
          lookahead == 1218 ||
          lookahead == 1220 ||
          lookahead == 1222 ||
          lookahead == 1224 ||
          lookahead == 1226 ||
          lookahead == 1228 ||
          lookahead == 1230 ||
          lookahead == 1231 ||
          lookahead == 1233 ||
          lookahead == 1235 ||
          lookahead == 1237 ||
          lookahead == 1239 ||
          lookahead == 1241 ||
          lookahead == 1243 ||
          lookahead == 1245 ||
          lookahead == 1247 ||
          lookahead == 1249 ||
          lookahead == 1251 ||
          lookahead == 1253 ||
          lookahead == 1255 ||
          lookahead == 1257 ||
          lookahead == 1259 ||
          lookahead == 1261 ||
          lookahead == 1263 ||
          lookahead == 1265 ||
          lookahead == 1267 ||
          lookahead == 1269 ||
          lookahead == 1271 ||
          lookahead == 1273 ||
          lookahead == 1275 ||
          lookahead == 1277 ||
          lookahead == 1279 ||
          lookahead == 1281 ||
          lookahead == 1283 ||
          lookahead == 1285 ||
          lookahead == 1287 ||
          lookahead == 1289 ||
          lookahead == 1291 ||
          lookahead == 1293 ||
          lookahead == 1295 ||
          lookahead == 1297 ||
          lookahead == 1299 ||
          lookahead == 1301 ||
          lookahead == 1303 ||
          lookahead == 1305 ||
          lookahead == 1307 ||
          lookahead == 1309 ||
          lookahead == 1311 ||
          lookahead == 1313 ||
          lookahead == 1315 ||
          lookahead == 1317 ||
          lookahead == 1319 ||
          lookahead == 1321 ||
          lookahead == 1323 ||
          lookahead == 1325 ||
          lookahead == 1327 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4349 <= lookahead && lookahead <= 4351) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7424 <= lookahead && lookahead <= 7467) ||
          (7531 <= lookahead && lookahead <= 7615) ||
          lookahead == 7681 ||
          lookahead == 7683 ||
          lookahead == 7685 ||
          lookahead == 7687 ||
          lookahead == 7689 ||
          lookahead == 7691 ||
          lookahead == 7693 ||
          lookahead == 7695 ||
          lookahead == 7697 ||
          lookahead == 7699 ||
          lookahead == 7701 ||
          lookahead == 7703 ||
          lookahead == 7705 ||
          lookahead == 7707 ||
          lookahead == 7709 ||
          lookahead == 7711 ||
          lookahead == 7713 ||
          lookahead == 7715 ||
          lookahead == 7717 ||
          lookahead == 7719 ||
          lookahead == 7721 ||
          lookahead == 7723 ||
          lookahead == 7725 ||
          lookahead == 7727 ||
          lookahead == 7729 ||
          lookahead == 7731 ||
          lookahead == 7733 ||
          lookahead == 7735 ||
          lookahead == 7737 ||
          lookahead == 7739 ||
          lookahead == 7741 ||
          lookahead == 7743 ||
          lookahead == 7745 ||
          lookahead == 7747 ||
          lookahead == 7749 ||
          lookahead == 7751 ||
          lookahead == 7753 ||
          lookahead == 7755 ||
          lookahead == 7757 ||
          lookahead == 7759 ||
          lookahead == 7761 ||
          lookahead == 7763 ||
          lookahead == 7765 ||
          lookahead == 7767 ||
          lookahead == 7769 ||
          lookahead == 7771 ||
          lookahead == 7773 ||
          lookahead == 7775 ||
          lookahead == 7777 ||
          lookahead == 7779 ||
          lookahead == 7781 ||
          lookahead == 7783 ||
          lookahead == 7785 ||
          lookahead == 7787 ||
          lookahead == 7789 ||
          lookahead == 7791 ||
          lookahead == 7793 ||
          lookahead == 7795 ||
          lookahead == 7797 ||
          lookahead == 7799 ||
          lookahead == 7801 ||
          lookahead == 7803 ||
          lookahead == 7805 ||
          lookahead == 7807 ||
          lookahead == 7809 ||
          lookahead == 7811 ||
          lookahead == 7813 ||
          lookahead == 7815 ||
          lookahead == 7817 ||
          lookahead == 7819 ||
          lookahead == 7821 ||
          lookahead == 7823 ||
          lookahead == 7825 ||
          lookahead == 7827 ||
          (7829 <= lookahead && lookahead <= 7837) ||
          lookahead == 7839 ||
          lookahead == 7841 ||
          lookahead == 7843 ||
          lookahead == 7845 ||
          lookahead == 7847 ||
          lookahead == 7849 ||
          lookahead == 7851 ||
          lookahead == 7853 ||
          lookahead == 7855 ||
          lookahead == 7857 ||
          lookahead == 7859 ||
          lookahead == 7861 ||
          lookahead == 7863 ||
          lookahead == 7865 ||
          lookahead == 7867 ||
          lookahead == 7869 ||
          lookahead == 7871 ||
          lookahead == 7873 ||
          lookahead == 7875 ||
          lookahead == 7877 ||
          lookahead == 7879 ||
          lookahead == 7881 ||
          lookahead == 7883 ||
          lookahead == 7885 ||
          lookahead == 7887 ||
          lookahead == 7889 ||
          lookahead == 7891 ||
          lookahead == 7893 ||
          lookahead == 7895 ||
          lookahead == 7897 ||
          lookahead == 7899 ||
          lookahead == 7901 ||
          lookahead == 7903 ||
          lookahead == 7905 ||
          lookahead == 7907 ||
          lookahead == 7909 ||
          lookahead == 7911 ||
          lookahead == 7913 ||
          lookahead == 7915 ||
          lookahead == 7917 ||
          lookahead == 7919 ||
          lookahead == 7921 ||
          lookahead == 7923 ||
          lookahead == 7925 ||
          lookahead == 7927 ||
          lookahead == 7929 ||
          lookahead == 7931 ||
          lookahead == 7933 ||
          (7935 <= lookahead && lookahead <= 7943) ||
          (7952 <= lookahead && lookahead <= 7957) ||
          (7968 <= lookahead && lookahead <= 7975) ||
          (7984 <= lookahead && lookahead <= 7991) ||
          (8000 <= lookahead && lookahead <= 8005) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          (8032 <= lookahead && lookahead <= 8039) ||
          (8048 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8071) ||
          (8080 <= lookahead && lookahead <= 8087) ||
          (8096 <= lookahead && lookahead <= 8103) ||
          (8112 <= lookahead && lookahead <= 8116) ||
          lookahead == 8118 ||
          lookahead == 8119 ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          lookahead == 8134 ||
          lookahead == 8135 ||
          (8144 <= lookahead && lookahead <= 8147) ||
          lookahead == 8150 ||
          lookahead == 8151 ||
          (8160 <= lookahead && lookahead <= 8167) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          lookahead == 8182 ||
          lookahead == 8183 ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8458 ||
          lookahead == 8462 ||
          lookahead == 8463 ||
          lookahead == 8467 ||
          lookahead == 8495 ||
          lookahead == 8500 ||
          lookahead == 8505 ||
          lookahead == 8508 ||
          lookahead == 8509 ||
          (8518 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8580 ||
          (11312 <= lookahead && lookahead <= 11358) ||
          lookahead == 11361 ||
          lookahead == 11365 ||
          lookahead == 11366 ||
          lookahead == 11368 ||
          lookahead == 11370 ||
          lookahead == 11372 ||
          lookahead == 11377 ||
          lookahead == 11379 ||
          lookahead == 11380 ||
          (11382 <= lookahead && lookahead <= 11389) ||
          lookahead == 11393 ||
          lookahead == 11395 ||
          lookahead == 11397 ||
          lookahead == 11399 ||
          lookahead == 11401 ||
          lookahead == 11403 ||
          lookahead == 11405 ||
          lookahead == 11407 ||
          lookahead == 11409 ||
          lookahead == 11411 ||
          lookahead == 11413 ||
          lookahead == 11415 ||
          lookahead == 11417 ||
          lookahead == 11419 ||
          lookahead == 11421 ||
          lookahead == 11423 ||
          lookahead == 11425 ||
          lookahead == 11427 ||
          lookahead == 11429 ||
          lookahead == 11431 ||
          lookahead == 11433 ||
          lookahead == 11435 ||
          lookahead == 11437 ||
          lookahead == 11439 ||
          lookahead == 11441 ||
          lookahead == 11443 ||
          lookahead == 11445 ||
          lookahead == 11447 ||
          lookahead == 11449 ||
          lookahead == 11451 ||
          lookahead == 11453 ||
          lookahead == 11455 ||
          lookahead == 11457 ||
          lookahead == 11459 ||
          lookahead == 11461 ||
          lookahead == 11463 ||
          lookahead == 11465 ||
          lookahead == 11467 ||
          lookahead == 11469 ||
          lookahead == 11471 ||
          lookahead == 11473 ||
          lookahead == 11475 ||
          lookahead == 11477 ||
          lookahead == 11479 ||
          lookahead == 11481 ||
          lookahead == 11483 ||
          lookahead == 11485 ||
          lookahead == 11487 ||
          lookahead == 11489 ||
          lookahead == 11491 ||
          lookahead == 11492 ||
          lookahead == 11500 ||
          lookahead == 11502 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          lookahead == 42561 ||
          lookahead == 42563 ||
          lookahead == 42565 ||
          lookahead == 42567 ||
          lookahead == 42569 ||
          lookahead == 42571 ||
          lookahead == 42573 ||
          lookahead == 42575 ||
          lookahead == 42577 ||
          lookahead == 42579 ||
          lookahead == 42581 ||
          lookahead == 42583 ||
          lookahead == 42585 ||
          lookahead == 42587 ||
          lookahead == 42589 ||
          lookahead == 42591 ||
          lookahead == 42593 ||
          lookahead == 42595 ||
          lookahead == 42597 ||
          lookahead == 42599 ||
          lookahead == 42601 ||
          lookahead == 42603 ||
          lookahead == 42605 ||
          lookahead == 42625 ||
          lookahead == 42627 ||
          lookahead == 42629 ||
          lookahead == 42631 ||
          lookahead == 42633 ||
          lookahead == 42635 ||
          lookahead == 42637 ||
          lookahead == 42639 ||
          lookahead == 42641 ||
          lookahead == 42643 ||
          lookahead == 42645 ||
          lookahead == 42647 ||
          lookahead == 42649 ||
          (42651 <= lookahead && lookahead <= 42653) ||
          lookahead == 42787 ||
          lookahead == 42789 ||
          lookahead == 42791 ||
          lookahead == 42793 ||
          lookahead == 42795 ||
          lookahead == 42797 ||
          (42799 <= lookahead && lookahead <= 42801) ||
          lookahead == 42803 ||
          lookahead == 42805 ||
          lookahead == 42807 ||
          lookahead == 42809 ||
          lookahead == 42811 ||
          lookahead == 42813 ||
          lookahead == 42815 ||
          lookahead == 42817 ||
          lookahead == 42819 ||
          lookahead == 42821 ||
          lookahead == 42823 ||
          lookahead == 42825 ||
          lookahead == 42827 ||
          lookahead == 42829 ||
          lookahead == 42831 ||
          lookahead == 42833 ||
          lookahead == 42835 ||
          lookahead == 42837 ||
          lookahead == 42839 ||
          lookahead == 42841 ||
          lookahead == 42843 ||
          lookahead == 42845 ||
          lookahead == 42847 ||
          lookahead == 42849 ||
          lookahead == 42851 ||
          lookahead == 42853 ||
          lookahead == 42855 ||
          lookahead == 42857 ||
          lookahead == 42859 ||
          lookahead == 42861 ||
          (42863 <= lookahead && lookahead <= 42872) ||
          lookahead == 42874 ||
          lookahead == 42876 ||
          lookahead == 42879 ||
          lookahead == 42881 ||
          lookahead == 42883 ||
          lookahead == 42885 ||
          lookahead == 42887 ||
          lookahead == 42892 ||
          lookahead == 42894 ||
          lookahead == 42897 ||
          (42899 <= lookahead && lookahead <= 42901) ||
          lookahead == 42903 ||
          lookahead == 42905 ||
          lookahead == 42907 ||
          lookahead == 42909 ||
          lookahead == 42911 ||
          lookahead == 42913 ||
          lookahead == 42915 ||
          lookahead == 42917 ||
          lookahead == 42919 ||
          lookahead == 42921 ||
          lookahead == 42927 ||
          lookahead == 42933 ||
          lookahead == 42935 ||
          lookahead == 42937 ||
          lookahead == 42939 ||
          lookahead == 42941 ||
          lookahead == 42943 ||
          lookahead == 42947 ||
          lookahead == 42952 ||
          lookahead == 42954 ||
          lookahead == 42998 ||
          (43000 <= lookahead && lookahead <= 43002) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43880) ||
          (43888 <= lookahead && lookahead <= 43967) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (66600 <= lookahead && lookahead <= 66639) ||
          (66776 <= lookahead && lookahead <= 66811)) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '`') ADVANCE(77);
      if ((' ' <= lookahead && lookahead <= 127)) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '`') ADVANCE(77);
      if ((' ' <= lookahead && lookahead <= 127)) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == '`') ADVANCE(77);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == 127) ADVANCE(18);
      if (('!' <= lookahead && lookahead <= '#') ||
          ('%' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(21);
      if (('$' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '`') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == 127) ADVANCE(18);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '`') ADVANCE(77);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(21);
      if ((' ' <= lookahead && lookahead <= 127)) ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == '`') ADVANCE(77);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(24);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == '`') ADVANCE(77);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '`') ADVANCE(77);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'k') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == ';') ADVANCE(123);
      if (lookahead == '_') ADVANCE(103);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_package);
      if (lookahead == '_') ADVANCE(99);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '_') ADVANCE(99);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(101);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(101);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(101);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT_COLON);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(101);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(101);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(101);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AT);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(101);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(101);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(101);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(101);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(101);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(101);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(101);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(101);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '%') ADVANCE(65);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(101);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '/') ADVANCE(102);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(101);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '/') ADVANCE(101);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(81);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(81);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(101);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'a') ADVANCE(92);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(100);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'a') ADVANCE(86);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(100);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'a') ADVANCE(90);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(100);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(91);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(113);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(115);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(52);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'g') ADVANCE(89);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'k') ADVANCE(85);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(96);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(54);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(93);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(97);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 's') ADVANCE(88);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(87);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(94);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(99);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(101);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(99);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_wildcard);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_wildcard);
      if (lookahead == '_') ADVANCE(99);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(46);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_number_token2);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '_') ADVANCE(99);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '_') ADVANCE(99);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_character_literal);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_character_literal);
      if (lookahead == '\'') ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_symbol_literal);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_symbol_literal);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__interpolated_string_start);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__interpolated_multiline_string_start);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '_') ADVANCE(99);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(100);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(15);
      if (lookahead == 'y') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'v') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'h') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 'z') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'w') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == 'j') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 50:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_lazy);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_final);
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_trait);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 104:
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_implicit);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 49, .external_lex_state = 2},
  [2] = {.lex_state = 49, .external_lex_state = 2},
  [3] = {.lex_state = 49, .external_lex_state = 2},
  [4] = {.lex_state = 49, .external_lex_state = 2},
  [5] = {.lex_state = 49, .external_lex_state = 2},
  [6] = {.lex_state = 49, .external_lex_state = 2},
  [7] = {.lex_state = 7, .external_lex_state = 3},
  [8] = {.lex_state = 7, .external_lex_state = 3},
  [9] = {.lex_state = 7, .external_lex_state = 3},
  [10] = {.lex_state = 49},
  [11] = {.lex_state = 49},
  [12] = {.lex_state = 7, .external_lex_state = 3},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 49, .external_lex_state = 3},
  [15] = {.lex_state = 49},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 9},
};

enum {
  ts_external_token__automatic_semicolon = 0,
  ts_external_token__simple_string = 1,
  ts_external_token__simple_multiline_string = 2,
  ts_external_token__interpolated_string_middle = 3,
  ts_external_token__interpolated_string_end = 4,
  ts_external_token__interpolated_multiline_string_middle = 5,
  ts_external_token__interpolated_multiline_string_end = 6,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__automatic_semicolon] = sym__automatic_semicolon,
  [ts_external_token__simple_string] = sym__simple_string,
  [ts_external_token__simple_multiline_string] = sym__simple_multiline_string,
  [ts_external_token__interpolated_string_middle] = sym__interpolated_string_middle,
  [ts_external_token__interpolated_string_end] = sym__interpolated_string_end,
  [ts_external_token__interpolated_multiline_string_middle] = sym__interpolated_multiline_string_middle,
  [ts_external_token__interpolated_multiline_string_end] = sym__interpolated_multiline_string_end,
};

static bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__automatic_semicolon] = true,
    [ts_external_token__simple_string] = true,
    [ts_external_token__simple_multiline_string] = true,
    [ts_external_token__interpolated_string_middle] = true,
    [ts_external_token__interpolated_string_end] = true,
    [ts_external_token__interpolated_multiline_string_middle] = true,
    [ts_external_token__interpolated_multiline_string_end] = true,
  },
  [2] = {
    [ts_external_token__simple_string] = true,
    [ts_external_token__simple_multiline_string] = true,
  },
  [3] = {
    [ts_external_token__automatic_semicolon] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_trait] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_GT_COLON] = ACTIONS(1),
    [anon_sym_LT_PERCENT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_val] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [anon_sym_sealed] = ACTIONS(1),
    [anon_sym_implicit] = ACTIONS(1),
    [anon_sym_lazy] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_finally] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym_wildcard] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_character_literal] = ACTIONS(1),
    [sym_symbol_literal] = ACTIONS(1),
    [sym__interpolated_string_start] = ACTIONS(1),
    [sym__interpolated_multiline_string_start] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(1),
    [sym__simple_string] = ACTIONS(1),
    [sym__simple_multiline_string] = ACTIONS(1),
    [sym__interpolated_string_middle] = ACTIONS(1),
    [sym__interpolated_string_end] = ACTIONS(1),
    [sym__interpolated_multiline_string_middle] = ACTIONS(1),
    [sym__interpolated_multiline_string_end] = ACTIONS(1),
  },
  [1] = {
    [sym_compilation_unit] = STATE(16),
    [sym__literal] = STATE(2),
    [sym_number] = STATE(2),
    [sym_boolean_literal] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_compilation_unit_repeat1] = STATE(10),
    [aux_sym_compilation_unit_repeat2] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_package] = ACTIONS(7),
    [anon_sym_null] = ACTIONS(9),
    [sym_wildcard] = ACTIONS(9),
    [aux_sym_number_token1] = ACTIONS(11),
    [aux_sym_number_token2] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_character_literal] = ACTIONS(9),
    [sym_symbol_literal] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [sym__simple_string] = ACTIONS(21),
    [sym__simple_multiline_string] = ACTIONS(21),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      aux_sym_number_token1,
    ACTIONS(13), 1,
      aux_sym_number_token2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_symbol_literal,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      sym__simple_string,
      sym__simple_multiline_string,
    ACTIONS(25), 3,
      anon_sym_null,
      sym_wildcard,
      sym_character_literal,
    STATE(3), 5,
      sym__literal,
      sym_number,
      sym_boolean_literal,
      sym_string,
      aux_sym_compilation_unit_repeat2,
  [36] = 9,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      aux_sym_number_token1,
    ACTIONS(37), 1,
      aux_sym_number_token2,
    ACTIONS(43), 1,
      sym_symbol_literal,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(46), 2,
      sym__simple_string,
      sym__simple_multiline_string,
    ACTIONS(31), 3,
      anon_sym_null,
      sym_wildcard,
      sym_character_literal,
    STATE(3), 5,
      sym__literal,
      sym_number,
      sym_boolean_literal,
      sym_string,
      aux_sym_compilation_unit_repeat2,
  [72] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(51), 2,
      aux_sym_number_token1,
      sym_symbol_literal,
    ACTIONS(49), 9,
      sym__simple_string,
      sym__simple_multiline_string,
      ts_builtin_sym_end,
      anon_sym_null,
      sym_wildcard,
      aux_sym_number_token2,
      anon_sym_true,
      anon_sym_false,
      sym_character_literal,
  [91] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(55), 2,
      aux_sym_number_token1,
      sym_symbol_literal,
    ACTIONS(53), 9,
      sym__simple_string,
      sym__simple_multiline_string,
      ts_builtin_sym_end,
      anon_sym_null,
      sym_wildcard,
      aux_sym_number_token2,
      anon_sym_true,
      anon_sym_false,
      sym_character_literal,
  [110] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(59), 2,
      aux_sym_number_token1,
      sym_symbol_literal,
    ACTIONS(57), 9,
      sym__simple_string,
      sym__simple_multiline_string,
      ts_builtin_sym_end,
      anon_sym_null,
      sym_wildcard,
      aux_sym_number_token2,
      anon_sym_true,
      anon_sym_false,
      sym_character_literal,
  [129] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(63), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [143] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(65), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [157] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(70), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [171] = 4,
    ACTIONS(7), 1,
      anon_sym_package,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym_compilation_unit_repeat1,
  [184] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      anon_sym_package,
    STATE(11), 1,
      aux_sym_compilation_unit_repeat1,
  [197] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(70), 3,
      sym__automatic_semicolon,
      anon_sym_DOT,
      anon_sym_SEMI,
  [206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(14), 1,
      sym_qualified_identifier,
  [216] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(79), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [224] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_package,
  [232] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
  [239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 91,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 143,
  [SMALL_STATE(9)] = 157,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 184,
  [SMALL_STATE(12)] = 197,
  [SMALL_STATE(13)] = 206,
  [SMALL_STATE(14)] = 216,
  [SMALL_STATE(15)] = 224,
  [SMALL_STATE(16)] = 232,
  [SMALL_STATE(17)] = 239,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compilation_unit, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compilation_unit, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat2, 2), SHIFT_REPEAT(3),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilation_unit_repeat2, 2), SHIFT_REPEAT(5),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat2, 2), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat2, 2), SHIFT_REPEAT(6),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilation_unit_repeat2, 2), SHIFT_REPEAT(3),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat2, 2), SHIFT_REPEAT(4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(17),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(13),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat1, 3),
  [83] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_scalar2c_external_scanner_create(void);
void tree_sitter_scalar2c_external_scanner_destroy(void *);
bool tree_sitter_scalar2c_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_scalar2c_external_scanner_serialize(void *, char *);
void tree_sitter_scalar2c_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_scalar2c(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_scalar2c_external_scanner_create,
      tree_sitter_scalar2c_external_scanner_destroy,
      tree_sitter_scalar2c_external_scanner_scan,
      tree_sitter_scalar2c_external_scanner_serialize,
      tree_sitter_scalar2c_external_scanner_deserialize,
    },
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

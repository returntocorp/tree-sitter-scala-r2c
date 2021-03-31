.PHONY: all test
all: test

grammar.js: scalar2c.ebnf script/parse_grammar.lua
	script/parse_grammar.lua -o grammar.js $<

src/grammar.json: grammar.js
	tree-sitter generate
	#node-gyp build

test: src/grammar.json
	tree-sitter test $(DEBUG) $(TEST_FLAG) $(TEST_FILTER)
	if [ -z "$(TEST_FLAG)" ]; then tree-sitter parse examples/*.scala --quiet --time; fi

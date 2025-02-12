package tree_sitter_rson_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_rson "github.com/tree-sitter/tree-sitter-rson/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_rson.Language())
	if language == nil {
		t.Errorf("Error loading Rson grammar")
	}
}

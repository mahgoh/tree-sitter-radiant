package tree_sitter_radiant_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_radiant "github.com/mahgoh/tree-sitter-radiant/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_radiant.Language())
	if language == nil {
		t.Errorf("Error loading Radiant grammar")
	}
}

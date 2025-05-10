package tree_sitter_rsf_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_rsf "github.com/oxidecomputer/tree-sitter-rsf/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_rsf.Language())
	if language == nil {
		t.Errorf("Error loading RSF grammar")
	}
}

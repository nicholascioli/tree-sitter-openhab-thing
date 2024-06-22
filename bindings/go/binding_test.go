package tree_sitter_OpenHAB_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-OpenHAB"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_OpenHAB.Language())
	if language == nil {
		t.Errorf("Error loading OpenHab grammar")
	}
}

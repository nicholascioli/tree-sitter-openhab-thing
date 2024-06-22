package tree_sitter_oh_things_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-oh_things"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_oh_things.Language())
	if language == nil {
		t.Errorf("Error loading OhThings grammar")
	}
}

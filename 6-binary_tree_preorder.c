#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - traversing a tree node, left then right
 *@tree: ptr to the root node.
 *@func: ptr to the function that will be used.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

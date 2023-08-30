#include <stdio.h>
#include "binary_trees.h"

/**
 *binary_tree_height - calculate the height of tree.
 * @tree: ptr to the root node.
 *return: height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right, height;
	if (tree == NULL)
		return (-1);

	left = 1 + binary_tree_height(tree->left);
	right = 1 + binary_tree_height(tree->right); 
	if (left > right)
		height = left;

	else
		height = right;

	return (height);
}
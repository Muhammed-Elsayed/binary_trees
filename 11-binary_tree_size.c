#include "binary_trees.h"

/**
 *binary_tree_size - measure the size of a tree
 * @tree: ptr to the node.
 *Return: the size of the tree.
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count++;
	count += binary_tree_size(tree->left);
	count += binary_tree_size(tree->right);
	return (count);
}

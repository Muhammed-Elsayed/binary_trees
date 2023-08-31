#include "binary_trees.h"

/**
 * binary_tree_nodes - calculate the nodes that contains 1 ch at least.
 *@tree: ptr to node.
 *Return: number of nodes that contain 1 ch at least
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count++;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);
}

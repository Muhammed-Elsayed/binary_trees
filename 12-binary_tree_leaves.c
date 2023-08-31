#include "binary_trees.h"

/**
 * binary_tree_leaves - calculate the number of leafs
 *@tree: ptr to the node.
 *Return: the number of  leaves in a subtree.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right, count = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	count += left + right;

	if (left + right == 0)
		count++;

	return (count);

}

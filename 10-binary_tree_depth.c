#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in tree.
 *@tree: ptr to the node I need to calculate It's depth.
 *Return: the num of nodes to the root
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		counter++;
	}

	return (counter);
}

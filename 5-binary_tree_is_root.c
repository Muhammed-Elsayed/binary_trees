#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - is this node a root or not.
 * @node: ptr to the node.
 * Return: 1 or 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);

	return (0);
}

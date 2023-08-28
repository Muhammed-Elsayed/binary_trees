#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 *binary_tree_node - create a node.
 *@parent: a ptr to the parent of a node.
 *@value: inforamtion that the node contains.
 *Return: ptr to the node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	root = malloc(sizeof(binary_tree_t));
	if (root == NULL)
		return (NULL);

	root->parent = parent;
	root->n = value;

	return (root);
}

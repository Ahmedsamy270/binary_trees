#include "binary_trees.h"

/**
 * binary_tree_is_root - is a function that checks if node is root
 * @node: pointer to node to be checked
 * Return: 1 If True Or 0 If Not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}

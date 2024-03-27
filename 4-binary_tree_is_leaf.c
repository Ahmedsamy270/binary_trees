#include "binary_trees.h"

/**
 * binary_tree_is_leaf - is a function that checks if node is leaf
 * @node: pointer to node to be checked
 * Return: 1 If Node Is Leaf or 0 If Not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node ==NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}

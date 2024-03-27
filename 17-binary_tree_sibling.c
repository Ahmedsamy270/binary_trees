#include "binary_trees.h"

/**
 * binary_tree_sibling -  is a function that finding sibling of node
 * @node: is apointer to the node to find it`s sibling
 * Return: Null If Node Has No Sibling Or Null Or No Parent
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}

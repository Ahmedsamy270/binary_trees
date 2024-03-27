#include "binary_trees.h"

/**
 * binary_tree_uncle - is a function that finds the uncle of node
 * @node: is a pointer to the node
 * Return: Null If Has No Uncle Or If Null
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}

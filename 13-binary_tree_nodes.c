#include "binary_trees.h"

/**
 * binary_tree_nodes - is a function that counts the nodes
 * @tree: is a pointer to root node
 * Return: 0 If Null
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nods = 0;

	if (tree)
	{
		nods += (tree->left || tree->right) ? 1 : 0;
		nods += binary_tree_nodes(tree->left);
		nods += binary_tree_nodes(tree->right);
	}
	return (nods);
}

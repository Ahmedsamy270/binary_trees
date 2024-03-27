#include "binary_trees.h"

/**
 * binary_tree_depth - is a function that measures the depth of node
 * @tree: is a pointer to node
 * Return: 0 If Null
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}

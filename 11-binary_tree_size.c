#include "binary_trees.h"

/**
 * binary_tree_size - is a function that measures the size binary tree
 * @tree: is a pointer to root node
 * Return: 0 If Null
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}

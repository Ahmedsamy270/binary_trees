#include "binary_trees.h"

/**
 * binary_tree_leaves - is a function that counts the leaves in binary tree
 * @tree: is a pointerto root node
 * Return: 0 If Null
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave = 0;

	if (tree)
	{
		leave += (!tree->left && !tree->right) ? 1 : 0;
		leave += binary_tree_leaves(tree->left);
		leave += binary_tree_leaves(tree->right);
	}
	return (leave);
}

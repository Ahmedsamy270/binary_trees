#include "binary_trees.h"
int is_full_recursive(const binary_tree_t *tree);

/**
 * binary_tree_is_full - is a function that checks if binary tree is full
 * @tree: is a pointer to root node
 * Return: 0 If Null
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_full_recursive(tree));
}

/**
 * is_full_recursive - is a function that checks if the binary tree is
 * full recursive
 * @tree: is a pointer to root node
 * Return: 1 If Null Or 0 If Not
 */

int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
			(tree->left == NULL && tree->right != NULL) ||
			is_full_recursive(tree->left) == 0 ||
			is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

#include "binary_trees.h"

/**
 * binary_tree_balance - is a function that measure the balance factor
 * @tree: is a pointer to root node
 * Return: 0 If Null
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

/**
 * binary_tree_height - is function that measure the hight of binary tree
 * @tree: pointer to root node
 * Return: 0 If Null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lf = 0, ri = 0;

		lf = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		ri = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		return ((lf > ri) ? lf : ri);
	}
	return (0);
}


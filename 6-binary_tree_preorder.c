#include "binary_trees.h"

/**
 * binary_tree_preorder - is a function that goes through binary tree
 * using pre-order traversal
 * @tree: pointer to root node
 * @func: pointer to function to call for node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

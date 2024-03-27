#include "binary_trees.h"

/**
 * binary_tree_insert_right - is a function that insert node on right
 * @parent: pointer to node to insert
 * @value: value to be in node
 * Return: Pointer To New Node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}

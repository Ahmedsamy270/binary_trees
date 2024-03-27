#include "binary_trees.h"

/**
 * binary_tree_insert_left - is a function that insert node on left
 * @parent: pointer to noe to insert
 * @value: value to be in node
 * Return: Pointer To New Node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}

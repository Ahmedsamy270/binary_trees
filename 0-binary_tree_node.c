#include "binary_trees.h"

/**
 * binary_tree_node - is a function that creates abinary tree node
 * @parent: is apointer to parent node
 * @value: the value to be put in node
 * Return: Pointer To New Node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}

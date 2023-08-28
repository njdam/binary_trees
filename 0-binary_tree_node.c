#include "binary_trees.h"

/**
 * binary_tree_node - a function to create a binary tree node;
 * @parent: a pointer to the parent node of binary tree to be created;
 * @value: is a value at parent node;
 *
 * Return: a pointer to new node created or NULL if fails.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	/* If memory allocation failed */
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}

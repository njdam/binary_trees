#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function to insert a node as the left-child;
 * @parent: is a parent node where to insert new node as it's left-child;
 * @value: is a value of new_node to be inserted;
 *
 * Return: a pointer to new_node inserted;
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	/* If memmory fails */
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	if (parent->left)
	{
		new_node->left = parent->left;
		/* To change parent of left child of parent to new_node */
		(parent->left)->parent = new_node;
	}
	else
		new_node->left = NULL;

	parent->left = new_node;

	return (new_node);
}

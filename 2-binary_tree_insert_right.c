#include "binary_trees.h"

/**
 * binary_tree_insert_right - is a function to insert at right of parent;
 * @parent: is a pointer to the parent where to insert at new_node at right;
 * @value: is a value of a new node to be inserted at right;
 *
 * Return: a pointer to new node created or inserted at right of parent.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;

	if (parent->right)
	{
		new_node->right = parent->right;
		/* To change parent node of right child node to new_node */
		(parent->right)->parent = new_node;
	}
	else
		new_node->right = NULL;

	parent->right = new_node;

	return (new_node);
}

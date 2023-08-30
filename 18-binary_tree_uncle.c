#include "binary_trees.h"

/**
 * binary_tree_uncle - is a function that finds the uncle of a node;
 * @node: is a node to find it's uncle from binary tree;
 *
 * Return: a pointer to a uncle's node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);

	return (NULL);
}

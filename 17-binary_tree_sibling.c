#include "binary_trees.h"

/**
 * binary_tree_sibling - is a function that find the sibling of a given node
 * @node: is a pointer to a node to find it's sibling
 *
 * Return: a pointer to a sibling of a given node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);

	else if (node->parent->left == node)
		return (node->parent->right);

	return (NULL);
}

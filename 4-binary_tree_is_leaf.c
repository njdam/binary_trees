#include "binary_trees.h"

/**
 * binary_tree_is_leaf - is a function that check if a node is a leaf.
 * @node: is a node in binary tree to be checked if it is a leaf node.
 *
 * Return: true value 1 if is a leaf node otherwise NULL.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent)
		if (node->left == NULL && node->right == NULL)
			return (1);

	return (0);
}

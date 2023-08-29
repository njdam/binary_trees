#include "binary_trees.h"

/**
 * binary_tree_is_root - is a function to check if a node is a root;
 * @node: is a node to be checked if is a root;
 *
 * Return: true value 1 if a node is a root otherwise 0 (false).
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent == NULL && (node->left && node->right))
		return (1);

	return (0);
}

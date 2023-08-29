#include "binary_trees.h"

/**
 * binary_tree_nodes - is a function to count nodes with atleast one node;
 * @tree: is a binary tree where to count nodes with atleast one node;
 *
 * Return: numbers of the nodes with atleast one node.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes, current_node;

	if (!tree)
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	/* Current node if have a node */
	current_node = (tree->right || tree->left) ? 1 : 0;

	return (left_nodes + right_nodes + current_node);
}

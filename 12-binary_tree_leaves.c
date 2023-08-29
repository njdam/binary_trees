#include "binary_trees.h"

/**
 * binary_tree_leaves - is a function that measures number of leaves;
 * @tree: is a binary tree where to measeure it's leaves;
 *
 * Return: numbers of a leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves);
}

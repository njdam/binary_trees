#include "binary_trees.h"

/**
 * binary_tree_size - is func that measures the size of a binary tree;
 * @tree: is a binary tree to measure its size;
 *
 * Return: height of binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_sz, right_sz;

	if (!tree)
		return (0);

	left_sz = binary_tree_size(tree->left);
	right_sz = binary_tree_size(tree->right);

	return (1 + left_sz + right_sz);
}

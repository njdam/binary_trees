#include "binary_trees.h"

/**
 * max - a function to return maximum integer in two integers;
 * @a: first integer;
 * @b: second integer;
 *
 * Return: maximum integer.
 */
size_t max(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree_height - is func that measures the height of a binary tree;
 * @tree: is a binary tree to measure its height;
 *
 * Return: height of binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	return (1 + max(left_h, right_h));
}

#include "binary_trees.h"

/**
 * is_tree_perfect - is a func to check if a binary tree is perfect;
 * @tree: is a pointer to a binary tree to check if it is a perfect;
 *
 * Return: return 1 if is a perfect tree else return 0.
 */
int is_tree_perfect(const binary_tree_t *tree)
{
	int left_t = 0, right_t = 0;

	if (tree->left && tree->right)
	{
		left_t = is_tree_perfect(tree->left) + 1;
		right_t = is_tree_perfect(tree->right) + 1;

		if (left_t == right_t && left_t != 0 && right_t != 0)
			return (left_t);

		return (0);
	}
	else if (!tree->left && !tree->right)
		return (1);

	return (0);
}

/**
 * binary_tree_is_perfect - is a func to check if a binary tree is perfect;
 * @tree: is a pointer to a binary tree to check if it is a perfect;
 *
 * Return: return 1 if is a perfect tree else return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (is_tree_perfect(tree))
		return (1);

	return (0);
}

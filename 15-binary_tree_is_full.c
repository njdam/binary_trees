#include "binary_trees.h"

/**
 * binary_tree_is_full - is a function to find if binary tree is full;
 * @tree: is a pointer to a root node to be checked if is full;
 *
 * Return: value 1 (true) if is full otherwise 0 (false).
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l_value, r_value;

	if (!tree)
		return (0);

	if ((tree->left && !(tree->right)) || (!(tree->left) && tree->right))
		return (0);

	/* If there are both left and right node and no sub child */
	if ((!(tree->left->left) || !(tree->left->right)) &&
		(!(tree->right->left) || !(tree->right->right)))
		return (1);

	l_value = binary_tree_is_full(tree->left);
	r_value = binary_tree_is_full(tree->right);

	return ((l_value < r_value) ? l_value : r_value);
}

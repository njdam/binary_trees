#include "binary_trees.h"

/**
 * bt_height - a function to find a height of a binary tree;
 * @tree: a tree where to find a height;
 *
 * Return: a height of a binary tree.
 */
size_t bt_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree)
		return (0);

	/* Count left node + 1 as root or 1 only if no left node */
	left_h = tree->left ? (1 + bt_height(tree->left)) : 1;
	/* Count right node + 1 (root) or 1 only if no right node */
	right_h = tree->right ? (1 + bt_height(tree->right)) : 1;

	/* return highest height */
	return ((left_h > right_h) ? left_h : right_h);
}

/**
 * binary_tree_balance - is a function that measure balance factor;
 * @tree: is a binary tree to be measured;
 *
 * Return: number of balance factor of a given binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_bf = 0, right_bf = 0;

	if (!tree)
		return (0);

	left_bf = ((int)bt_height(tree->left));
	right_bf = ((int)bt_height(tree->right));

	return (left_bf - right_bf);
}

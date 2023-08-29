#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a tree using post-order traversal;
 * @tree: is a binary tree to use;
 * @func: is a function called to print an integer;
 *
 * Return: nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	/* To start from left leaf, to right leaf to parent node */
	func(tree->n);
}

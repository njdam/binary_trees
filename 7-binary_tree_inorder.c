#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a tree using in-order traversal;
 * @tree: is a binary tree to use;
 * @func: is a function called to print an integer;
 *
 * Return: nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	/* To start from left leaf, parent to the right */
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

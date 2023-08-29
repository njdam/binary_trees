#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a tree using pre-order traversal;
 * @tree: is a binary tree to use;
 * @func: is a function called to print an integer;
 *
 * Return: nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	func(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func);

	if (tree->right)
		binary_tree_preorder(tree->right, func);
}

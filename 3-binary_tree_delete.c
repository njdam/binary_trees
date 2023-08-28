#include "binary_trees.h"

/**
 * binary_tree_delete - a function to delete entire binary tree;
 * @tree: is a binary tree to be deleted;
 *
 * Return: nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/*To return if tree is NULL */
	if (!tree)
		return;

	/* Recursive call of deleting left and right subtree */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* free memory of current node */
	free(tree);
}

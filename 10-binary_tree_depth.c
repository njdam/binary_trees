#include "binary_trees.h"

/**
 * binary_tree_depth - is a func to measure the depth of a node in a tree;
 * @tree: is a node in a tree to be measured it's depth from a root;
 *
 * Return: a deth of a node from a root.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth += 1;
		tree = tree->parent;
	}

	return (depth);
}

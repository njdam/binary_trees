#include "binary_trees.h"

/**
 * depth_t - fnds the depth of a node in binary tree;
 * @node: is a node to find it's depth;
 *
 * Return: a depth of a node.
 */
size_t depth_t(const binary_tree_t *node)
{
	size_t d = 0;

	while (node)
	{
		node = node->parent;
		d++;
	}

	return (d);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes;
 * @first: is the first node;
 * @second: is the second node;
 *
 * Return: a pointer to the lowest common ancestor node of two given nodes.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t d_first = depth_t(first);
	size_t d_second = depth_t(second);

	while (d_first > d_second)
	{
		first = first->parent;
		d_first--;
	}

	while (d_first < d_second)
	{
		second = second->parent;
		d_second--;
	}

	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);

		first = first->parent;
		second = second->parent;
	}

	return (NULL);
}

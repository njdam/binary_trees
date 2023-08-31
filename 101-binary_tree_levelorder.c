#include "binary_trees.h"

/**
 * enqueue - a function that add an item to queue;
 * @head: is a front node of a queue;
 * @tail: is a rear node of a queue;
 * @n: is a pointer to size of queue;
 * @value: is an item to be added to queue;
 *
 * Return: nothing.
 */
void enqueue(binary_tree_t **head, binary_tree_t **tail, int *n, void *value)
{
	binary_tree_t *new_node;
	binary_tree_t *node = (binary_tree_t *)value;

	if (head && tail)
	{
		new_node = malloc(sizeof(binary_tree_t));
		if (!new_node)
			return;

		new_node->left = *tail;
		new_node->right = NULL;
		new_node->n = (!node ? node->n : -1);
		new_node->parent = node;

		if (!(*head))
			(*head) = new_node;

		if (*tail)
			(*tail)->right = new_node;

		(*tail) = new_node;
		if (n)
			(*n)++;
	}
}

/**
 * dequeue - is a function that removes an item from queue;
 * @head: is a front node of a queue to be freed;
 * @tail: is a rear node of a queue to be freed;
 * @n: is a pointer to size of queue;
 *
 * Return: a pointer to a binary tree.
 */
binary_tree_t *dequeue(binary_tree_t **head, binary_tree_t **tail, int *n)
{
	binary_tree_t *tmp, *temp, *node = NULL;

	if (head && tail)
	{
		tmp = *head;
		if (tmp)
		{
			node = tmp->parent;
			if (tmp->right)
			{
				temp = tmp->right;
				temp->left = NULL;
				*head = temp;
				free(tmp);
			}
			else
			{
				free(tmp);
				*head = NULL;
				*tail = NULL;
			}
			if (n)
				(*n)--;
		}
	}

	return (node);
}

/**
 * binary_tree_levelorder - goes through  a binary tree using level-order;
 * @tree: is binary tree to be used;
 * @func: is a function to be used to print;
 *
 * Return: nothing.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *head = NULL, *tail = NULL, *current = NULL;
	int n = 0;

	if (tree && func)
	{
		enqueue(&head, &tail, &n, (void *)tree);
		while (n > 0)
		{
			current = head;
			if (current->parent)
			{
				func(current->parent->n);
				if (current->parent->left)
					enqueue(&head, &tail, &n, (void *)(current->parent->left));
				if (current->parent->right)
					enqueue(&head, &tail, &n, (void *)(current->parent->right));
			}
			dequeue(&head, &tail, &n);
		}
	}
}

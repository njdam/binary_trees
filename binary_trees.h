#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap*/
typedef struct binary_tree_s heap_t;

/* A prototype for binary tree printer */
void binary_tree_print(const binary_tree_t *);


/***** MANDATORY TASKS' PROTOTYPES *****/

/* Task 0. New node: A function that creates a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/* Task 1. Insert left */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/* Task 2. Insert right */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/* Task 3. Delete: A function that deletes an entire binary tree */
void binary_tree_delete(binary_tree_t *tree);
/* Task 4. Is leaf */
int binary_tree_is_leaf(const binary_tree_t *node);
/* Task 5. Is root */
int binary_tree_is_root(const binary_tree_t *node);
/* Task 6. Pre-order traversal */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/* Task 7. In-order traversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/* Task 8. Post-order traversal */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/* Task 9. Height: A function that measures the height of a binary tree */
size_t binary_tree_height(const binary_tree_t *tree);
/* Task 10. Depth */
size_t binary_tree_depth(const binary_tree_t *tree);
/* Task 11. Size */
size_t binary_tree_size(const binary_tree_t *tree);
/* Task 12. Leaves: A function that counts the leaves in a binary tree */
size_t binary_tree_leaves(const binary_tree_t *tree);
/* Task 13. Nodes: counts nodes with at least 1 child in a binary tree */
size_t binary_tree_nodes(const binary_tree_t *tree);
/* Task 14. Balance factor: measures the balance factor of a binary tree */
int binary_tree_balance(const binary_tree_t *tree);
/* Task 15. Is full: A function that checks if a binary tree is full */
int binary_tree_is_full(const binary_tree_t *tree);
/* Task 16. Is perfect: A function to check if a binary tree is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);
/* Task 17. Sibling: A function that finds the sibling of a node */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
/* Task 18. Uncle: function that finds the uncle of a node */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);


/***** ADVANCED TASKS' PROTOTYES *****/


#endif /* BINARY_TREES_H */

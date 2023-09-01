#include "binary_trees.h"

typedef struct queue_node {
    binary_tree_t *node;
    struct queue_node *next;
} queue_node_t;

typedef struct queue {
    queue_node_t *front;
    queue_node_t *rear;
} queue_t;

// Function to enqueue a node in the queue
void enqueue(queue_t *queue, binary_tree_t *node) {
    queue_node_t *newNode = (queue_node_t*)malloc(sizeof(queue_node_t));
    if (newNode) {
        newNode->node = node;
        newNode->next = NULL;
        if (queue->rear == NULL) {
            queue->front = newNode;
            queue->rear = newNode;
        } else {
            queue->rear->next = newNode;
            queue->rear = newNode;
        }
    }
}

// Function to dequeue a node from the queue
binary_tree_t* dequeue(queue_t *queue) {
    if (queue->front == NULL)
        return NULL;
    
    binary_tree_t *node = queue->front->node;
    queue_node_t *temp = queue->front;
    queue->front = queue->front->next;
    
    if (queue->front == NULL)
        queue->rear = NULL;
    
    free(temp);
    return node;
}

// Function to perform level-order traversal
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int)) {
    if (tree == NULL || func == NULL)
        return;

    queue_t queue;
    queue.front = NULL;
    queue.rear = NULL;
    
    enqueue(&queue, (binary_tree_t*)tree);

    while (queue.front != NULL) {
        binary_tree_t *currentNode = dequeue(&queue);
        func(currentNode->n);

        if (currentNode->left)
            enqueue(&queue, currentNode->left);
        
        if (currentNode->right)
            enqueue(&queue, currentNode->right);
    }
}

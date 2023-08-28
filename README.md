# C - Binary trees

[A binary tree]() is a fundamental data structure in computer science and mathematics. It is composed of nodes, where each node contains a value and at most two child nodes, often referred to as the left child and the right child. The topmost node of the tree is called the root, and nodes with no children are known as leaf nodes.

## Concepts of Fundamental Understanding Binary trees and Their Variations.

I. [Binary trees have various applications in computer science, including:]()

1. `Binary Search Trees (BSTs)`: A special type of binary tree where the values in the nodes follow a specific ordering. For any given node, all nodes in its left subtree have values less than its value, and all nodes in its right subtree have values greater than its value. BSTs are often used for efficient searching, insertion, and deletion operations.

2. `Expression Trees`: Binary trees can represent arithmetic expressions, with operators as internal nodes and operands as leaves. These trees are used to evaluate expressions and perform various calculations.

3. `Heap Data Structure`: Heaps are specialized binary trees that satisfy the heap property. Binary heaps are commonly used for priority queues and heapsort algorithms.

4. `Huffman Trees`: These trees are used in data compression algorithms, such as Huffman coding, to efficiently represent and encode characters based on their frequency of occurrence.

5. `Decision Trees`: In machine learning, binary trees can be used as decision trees to make a sequence of decisions based on input features, leading to a final prediction or classification.


II. [Binary trees have some variations and special cases:]()

1. `Complete Binary Tree`: A binary tree where all levels are fully filled except possibly the last level, which is filled from left to right. They are often used in heap data structures.

2. `Full Binary Tree`: A binary tree where every node has either 0 or 2 children.

3. `Perfect Binary Tree`: A binary tree where all internal nodes have exactly two children, and all leaf nodes are at the same level.

4. `Balanced Binary Tree`: A binary tree where the depth of the left and right subtrees of every node differ by at most one. This ensures efficient search and insertion operations in BSTs.


[Note That:]() Binary trees are powerful structures that form the basis for many more advanced data structures and algorithms. They are essential in understanding concepts like recursion, traversal, and divide-and-conquer strategies in computer science.


## REVIEW ON Concepts about Binary trees and their Variation.

1. ***Binary Tree:***

* **A binary tree** is a hierarchical data structure in which each node has at most two children, referred to as the left child and the right child. The topmost node of the tree is called the root, and nodes with no children are leaf nodes. Each node in a binary tree contains a value and pointers (or references) to its left and right children, if they exist.


2. ***Binary Tree vs Binary Search Tree:***

* **A binary tree** is a general concept where each node can have zero, one, or two children, without any particular ordering of values.

* On the other hand, **a Binary Search Tree (BST)** is a specific type of binary tree where the values follow an ordering such that for any node, all nodes in its left subtree have values less than its value, and all nodes in its right subtree have values greater than its value. BSTs provide efficient search, insertion, and deletion operations due to their ordered structure.


3. ***Time Complexity Gain Compared to Linked Lists:***

* Binary trees offer improved time complexity compared to linked lists in certain scenarios. In a balanced binary tree (such as a `balanced BST`), the time complexity for search, insertion, and deletion operations is typically `O(log n)`, where `n` is the number of nodes in the tree. This is much more efficient than the `O(n)` time complexity of linked lists for similar operations. However, in the worst case (unbalanced trees), the time complexity can degrade to `O(n)`, negating the advantages.


4. ***Depth, Height, and Size of a Binary Tree:***

* `Depth`: The depth of a node in a binary tree is the length of the path from the root to that node.

* `Height` (also called `Depth`): The height of a binary tree is the length of the longest path from the root to a leaf node. In other words, it's the maximum depth of any node in the tree.

* `Size`: The size of a binary tree is the total number of nodes in the tree.


5. ***Traversal Methods for Binary Trees:***

* `In-order Traversal`: Traverse the left subtree, visit the current node, and then traverse the right subtree.

* `Pre-order Traversal`: Visit the current node, traverse the left subtree, and then traverse the right subtree.

* `Post-order Traversal`: Traverse the left subtree, traverse the right subtree, and then visit the current node.

* `Level-order Traversal`: Visit nodes level by level, from left to right, starting from the root.


6. ***Types of Binary Trees:***

* `Complete Binary Tree`: A binary tree where all levels are fully filled except possibly the last level, which is filled from left to right.

* `Full Binary Tree`: A binary tree where every node has either 0 or 2 children.

* `Perfect Binary Tree`: A binary tree where all internal nodes have exactly two children, and all leaf nodes are at the same level.

* Balanced Binary Tree: A binary tree where the depth of the left and right subtrees of every node differ by at most one.

[Note That:]() These concepts are fundamental to understanding binary trees and their variations.

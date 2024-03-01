## Binary tree
![b-tree](https://github.com/ayoub22222222/binary_trees/assets/79339502/d2879cd8-7d9f-4bff-99b6-d64304a6f5a7)
## Description

Binary trees are a fundamental data structure in computer science, consisting of nodes where each node can have at most two children: a left child and a right child. In C programming, we can represent binary trees using structures.

### Node Structure:
```c
struct Node {
    int data;           // Holds data for the node
    struct Node* left;  // Pointer to the left child
    struct Node* right; // Pointer to the right child
};
```

### Operations Supported:
1. **Insertion:** Add new nodes to the binary tree according to a specified rule, such as comparing values.

2. **Traversal:** Traverse through the binary tree in different orders:
   - Inorder: Left, Root, Right
   - Preorder: Root, Left, Right
   - Postorder: Left, Right, Root

3. **Deletion:** Remove nodes from the tree while maintaining its structure.

### Common Applications:
Binary trees are used in various applications, including:
- Representing hierarchical structures like file systems.
- Implementing searching and sorting algorithms, such as Binary Search Trees (BST).
- Parsing and evaluating mathematical expressions.

### Implementation Notes:
Implementing binary trees in C involves managing memory allocation, implementing traversal algorithms, and ensuring the integrity of the tree structure.

## Table of Contents
- [Resources](#resources)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Data Structures](#data-structures)
- [Print Function](#print-function)

## Resources
- [Binary tree](https://en.wikipedia.org/wiki/Binary_tree)
- [Data Structure and Algorithms - Tree](https://www.geeksforgeeks.org/binary-tree-data-structure/)
- [Tree Traversal](https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/) 
- [Binary Search Tree](https://www.geeksforgeeks.org/binary-search-tree-data-structure/)
- [Data structures: Binary Tree](https://www.tutorialspoint.com/data_structures_algorithms/binary_tree_algorithm.htm)

## Requirements
- **Allowed editors:** vi, vim, emacs
- **Operating System:** Ubuntu 20.04 LTS
- **Compiler:** gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line`
- Code should follow the Betty style
- No global variables allowed
- Maximum 5 functions per file
- Standard library is allowed
- Prototypes of all functions should be included in the header file `binary_trees.h`
- Header files should be include guarded
## Data Structures
**Basic Binary Tree**

# Binary Tree Preorder Traversal

- [Program No-144](https://leetcode.com/problems/binary-tree-preorder-traversal/)
- **Difficulty:** Easy

## Problem Statement

Given the `root` of a binary tree, return the preorder traversal of its nodes' values.

## Visual Representation

```mermaid
graph TD
    A[1] --> B[null]
    A --> C[2]
    C --> D[3]
    C --> E[null]
    D --> F[null]
    D --> G[null]
```
**Preorder Traversal:** 1 → 2 → 3

## Approach

- **Preorder Traversal:**  
  Visit the root node, then the left subtree, then the right subtree.
- **Recursive Implementation:**  
  - If the current node is `null`, return.
  - Add the current node's value to the result.
  - Recursively traverse the left subtree.
  - Recursively traverse the right subtree.
- **Result:**  
  Collect the values in a vector and return it after traversal.

---
## Example

**Input Tree:**
```
    1
     \
      2
     /
    3
```

**Output:**
```
1 2 3
```


# Binary Tree Postorder Traversal

- **LeetCode Problem:** [Problem No-145](https://leetcode.com/problems/binary-tree-postorder-traversal/)
- **Difficulty:** Easy

## Problem Statement

Given the `root` of a binary tree, return the postorder traversal of its nodes' values.

Postorder order: Left -> Right -> Root

## Visual Representation (flowchart)

```mermaid
flowchart TD
    A[Start at root] --> B{Is node NULL?}
    B -- Yes --> C[Return]
    B -- No --> D[Traverse left subtree]
    D --> E[Traverse right subtree]
    E --> F[Visit node (append value)]
    F --> G[Return to parent]
```

## Detailed Approach

- Recursive approach:
  1. If the current node is null, return (base case).
  2. Recursively traverse the left subtree.
  3. Recursively traverse the right subtree.
  4. After visiting children, append the current node's value to the result vector.
  5. Continue until all nodes are processed.

- Complexity:
  - Time: O(n), where n is the number of nodes (each node visited once).
  - Space: O(h) for recursion stack, where h is tree height (O(n) worst-case).

- Iterative note (optional):
  - Postorder can also be implemented iteratively using a stack or by reversing a modified preorder (Root -> Right -> Left) result.


## Example

Input tree:
```
    1
     \
      2
     /
    3
```

Expected output:
```
3 2 1
```

---
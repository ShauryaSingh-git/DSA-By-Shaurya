# Insert into a Binary Search Tree

- [Problem No-701](https://leetcode.com/problems/insert-into-a-binary-search-tree/)
- **Difficulty:** Easy

## Problem Statement

Given the root of a Binary Search Tree (BST) and a value `val`, insert `val` into the BST and return the root node of the BST after insertion. It is guaranteed that the new value does not exist in the original BST.

## Approach (detailed)

- Property: In a BST, left subtree values < node value < right subtree values.
- Recursive approach:
  1. If the current node is `nullptr`, create and return a new TreeNode with `val` (insertion point).
  2. If `val` is less than current node's value, recurse into the left subtree and assign the returned node to `node->left`.
  3. Otherwise (val >= node->val), recurse into the right subtree and assign the returned node to `node->right`.
  4. Return the current node to reconnect subtrees on the way up.
- This performs the insertion in-place and maintains BST properties.

## Visual Representation

```mermaid
flowchart TD
    A[Start at root] --> B{Is node NULL?}
    B -- Yes --> C[Create new node with val, return it]
    B -- No --> D{val < node->val?}
    D -- Yes --> E[`node->left = insert(node->left, val)`]
    D -- No --> F[`node->right = insert(node->right, val)`]
    E --> G[Return node]
    F --> G
```

## Complexity

- Time: O(h) where h is the height of the tree (O(log n) average, O(n) worst case).
- Space: O(h) recursion stack (O(n) worst case).

---

## Example

Input BST (inorder before): 1 2 3 4 7  
Insert value: 5  
Inorder after insertion: 1 2 3 4 5 7

---
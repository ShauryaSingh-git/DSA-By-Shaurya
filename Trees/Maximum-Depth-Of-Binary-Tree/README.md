# Maximum Depth of Binary Tree

- [Problem N0-104](https://leetcode.com/problems/maximum-depth-of-binary-tree/)
- **Difficulty:** Easy

## Problem Statement

Given the root of a binary tree, return its maximum depth. The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

## Visual Representation (flowchart)

```mermaid
flowchart TD
    A[Start at root] --> B{Is node NULL?}
    B -- Yes --> C[Return 0]
    B -- No --> D[Compute leftDepth = maxDepth(left)]
    D --> E[Compute rightDepth = maxDepth(right)]
    E --> F[Return 1 + max(leftDepth, rightDepth)]
```

## Detailed Approach

- Recursive idea:
  1. Base case: if node is null, depth is 0.
  2. Recursively compute the maximum depth of the left subtree.
  3. Recursively compute the maximum depth of the right subtree.
  4. The depth at the current node is 1 + max(leftDepth, rightDepth).
  5. Return this value up the recursion chain.

- Why it works:
  - Each node's depth depends only on its children's depths; recursion naturally aggregates this.
  - Visits each node exactly once.

## Complexity

- Time: O(n), where n is the number of nodes (each node processed once).
- Space: O(h) recursion stack, where h is the tree height (O(n) worst-case).

---

## Example

Input tree:
```
    3
   / \
  9  20
     / \
    15  7
```

Expected output:
```
Maximum Depth: 3
```

---
# Swap Nodes in Pairs (LeetCode #24)

**Difficulty:** Medium  
[LeetCode Problem No-24](https://leetcode.com/problems/swap-nodes-in-pairs/)

This folder contains a C++ solution for the "Swap Nodes in Pairs" problem using recursion.

---

## 📝 Problem Statement

Given a linked list, swap every two adjacent nodes and return its head.  
You must solve the problem by modifying the nodes themselves (not just values).

**Example:**  
- Input: `1 → 2 → 3 → 4`  
- Output: `2 → 1 → 4 → 3`

---

## 💡 Approach

This solution uses **recursion**:
1. If the list is empty or has only one node, return the head.
2. Identify the first two nodes (`head` and `head->next`).
3. Recursively swap the rest of the list starting from `head->next->next`.
4. Swap the first two nodes and link them to the result of the recursive call.

---

## 🔎 Dry Run Example

Input: `1 → 2 → 3 → 4`

- Swap `1` and `2` → `2 → 1`
- Recursively swap `3` and `4` → `4 → 3`
- Final result: `2 → 1 → 4 → 3`

---

## 📊 Complexity Analysis

- **Time Complexity:** $O(n)$ (each node visited once)
- **Space Complexity:** $O(n)$ (due to recursion stack)

---


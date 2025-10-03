# Palindrome Linked List (LeetCode #234)

**Difficulty:** Easy  
[LeetCode Problem No-234](https://leetcode.com/problems/palindrome-linked-list/)

This folder contains a C++ solution for the "Palindrome Linked List" problem using recursion.

---

## 📝 Problem Statement

Given the head of a singly linked list, determine if it is a palindrome.

**Example:**  
- Input: `1 → 2 → 2 → 1`  
- Output: `true`

---

## 💡 Approach

This solution uses **recursion**:
1. Use a pointer (`left`) starting from the head.
2. Recursively traverse to the end of the list with another pointer (`right`).
3. On unwinding, compare values from both ends.
4. Move `left` forward after each comparison.

---

## 📊 Complexity Analysis

- **Time Complexity:** $O(n)$ (each node visited once)
- **Space Complexity:** $O(n)$ (recursion stack)

---


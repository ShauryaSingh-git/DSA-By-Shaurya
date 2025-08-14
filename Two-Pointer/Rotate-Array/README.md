# Rotate Array 🔄

**LeetCode Problem #189**  
**Difficulty:** Medium

This repository contains a C++ solution for the **"Rotate Array"** problem, a common question found on platforms like LeetCode and in coding interviews.

The task is to rotate an array of *n* elements to the right by *k* steps, where *k* is a non-negative integer.

---

## 📝 Problem Statement

Given an array, rotate the array to the right by `k` steps, where `k` is non-negative.

---

## 📋 Example

**Input:**  
`nums = {1, 2, 3, 4, 5, 6, 7}`, `k = 3`

**Output:**  
`{5, 6, 7, 1, 2, 3, 4}`

**Step-by-step rotation:**
1. After 1st rotation: `{7, 1, 2, 3, 4, 5, 6}`
2. After 2nd rotation: `{6, 7, 1, 2, 3, 4, 5}`
3. After 3rd rotation: `{5, 6, 7, 1, 2, 3, 4}`

---
## ⏱️ Time & Space Complexity

- **Time Complexity:** O(n)- because of 3 for loops its O(3xn) and 3 is constant.

---

## 💡 Solution Approach

### Three-Reversal Algorithm

An efficient, in-place solution can be achieved using a three-step reversal algorithm.

**Steps:**
1. **Reverse the entire array:**  
   `{1, 2, 3, 4, 5, 6, 7}` → `{7, 6, 5, 4, 3, 2, 1}`
2. **Reverse the first `k` elements:**  
   `{7, 6, 5, 4, 3, 2, 1}` → `{5, 6, 7, 4, 3, 2, 1}`
3. **Reverse the remaining `n-k` elements:**  
   `{5, 6, 7, 4, 3, 2, 1}` → `{5, 6, 7, 1, 2, 3, 4}` ✨

---

## 📚 References

- [LeetCode Problem #189: Rotate Array](https://leetcode.com/problems/rotate-array/)

---
# Fibonacci Number (LeetCode #509)

**Difficulty:** Easy  
[LeetCode Problem No-509](https://leetcode.com/problems/fibonacci-number/)

This folder contains a C++ solution for the "Fibonacci Number" problem using recursion.

---

## 📝 Problem Statement

Given `n`, calculate the nth Fibonacci number.  
The Fibonacci sequence is defined as:
- `F(0) = 0`
- `F(1) = 1`
- `F(n) = F(n-1) + F(n-2)` for `n > 1`

**Example:**  
- Input: `4`  
- Output: `3`  
  (Sequence: `0, 1, 1, 2, 3`)

---

## 💡 Approach

This solution uses **recursion**:
1. If `n` is `0` or `1`, return `n` (base case).
2. Otherwise, return `fib(n-1) + fib(n-2)`.

---

## 📊 Complexity Analysis

- **Time Complexity:** $O(2^n)$ (exponential, due to repeated calculations)
- **Space Complexity:** $O(n)$ (recursion stack depth)

---

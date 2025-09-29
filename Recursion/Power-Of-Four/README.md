# Power of Four (Recursive Approach)

- [LeetCode Problem No-342](https://leetcode.com/problems/power-of-four/)
- Difficulty-Easy

This folder contains a C++ implementation to check if a number is a power of four using recursion.

## 📝 Problem Statement

Given an integer `n`, write a recursive function to determine if it is a power of four.  
Return `true` if `n` is a power of four, otherwise return `false`.



---

## 💡 Approach

- If `n` is less than or equal to 0, it cannot be a power of four.
- If `n` is 1, it is a power of four (`4^0 = 1`).
- If `n` is not divisible by 4, it cannot be a power of four.
- Recursively check if `n/4` is a power of four.

---

## 📈 Complexity
### Time Complexity:
 O(log₄ n), since n is divided by 4 in each recursive call.
### Space Complexity:
 O(log₄ n), due to the recursive call stack.

---

## ✅ Example
### Input:
n = 64
### Output:
true

---
### Input:
n = 20
### Output:
false

---
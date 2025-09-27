# Power of Three (Recursive Approach)

- [LeetCode Problem Link](https://leetcode.com/problems/power-of-three/)
- Difficulty-Easy

This folder contains a C++ implementation to check if a number is a power of three using recursion.

## 📝 Problem Statement

Given an integer `n`, write a recursive function to determine if it is a power of three.  
Return `true` if `n` is a power of three, otherwise return `false`.



---

## 💡 Approach

- If `n` is less than or equal to 0, it cannot be a power of three.
- If `n` is 1, it is a power of three (`3^0 = 1`).
- If `n` is not divisible by 3, it cannot be a power of three.
- Recursively check if `n/3` is a power of three.

## 📈 Complexity
### Time Complexity:
 O(log₃ n), since n is divided by 3 in each recursive call.
### Space Complexity:
 O(log₃ n), due to the recursive call stack.

---

## ✅ Example
### Input:
n = 27
### Output:
27 is a power of three.

---

### Input:
n = 10
### Output:
10 is not a power of three.

---
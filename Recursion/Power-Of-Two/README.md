# Power of Two (Recursive Approach)

- [LeetCode Problem Link](https://leetcode.com/problems/power-of-two/)
- Difficulty-Easy

This folder contains a C++ implementation to check if a number is a power of two using recursion.

## 📝 Problem Statement

Given an integer `n`, write a recursive function to determine if it is a power of two.  
Return `true` if `n` is a power of two, otherwise return `false`.



---

## 💡 Approach

- If `n` is less than or equal to 0, it cannot be a power of two.
- If `n` is 1, it is a power of two (`2^0 = 1`).
- If `n` is odd and not 1, it cannot be a power of two.
- Recursively check if `n/2` is a power of two.

---

## 📈 Complexity
### Time Complexity:
 O(log n), since n is divided by 2 in each recursive call.
### Space Complexity:
 O(log n), due to the recursive call stack.

 ---

## ✅ Example
### Input:
n = 16
### Output:
16 is a power of two.

---

### Input:
n = 18
### Output:
18 is not a power of two.

---
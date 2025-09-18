# Sqrt(x) (LeetCode Problem 69)

- [LeetCode Problem No-69](https://leetcode.com/problems/sqrtx/)

- Difficulty-Easy

This folder contains a C++ implementation for the "Sqrt(x)" problem using binary search.

## 📝 Problem Statement

Given a non-negative integer `x`, compute and return the integer part of its square root. Only the integer part (i.e., the floor of the true square root) should be returned.



## 💡 Approach

- Use binary search between 0 and `x` to find the largest integer `mid` such that `mid * mid <= x`.
- Handle edge cases for `x = 0` and `x = 1` directly.
- Use `long long` for `mid` to avoid overflow when squaring.


## 📈 Complexity
### Time Complexity:###
 O(log x), where x is the input number.
### Space Complexity:###
 O(1), as only a constant amount of extra space is used.

---

## ✅ Example

### Input:
x = 8
### Output:
2
### Explanation:
The square root of 8 is approximately 2.828, so the integer part is 2.

---
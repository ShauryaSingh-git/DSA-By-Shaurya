# Check if Array Is Sorted (Recursive Approach)

This folder contains a C++ implementation to check if an array is sorted in ascending order using recursion.

## 📝 Problem Statement

Given an array of integers, determine if the array is sorted in ascending order using a recursive function.

## 💡 Approach

- The function recursively checks if the array up to the (n-1)th element is sorted.
- The base case is when the array has 0 or 1 element, which is always sorted.
- For each recursive call, it checks if the last two elements are in ascending order.
- If any pair is not in order, the function returns `false`.

---

## 📈 Complexity
### Time Complexity:
 O(n), where n is the number of elements in the array.
### Space Complexity:
 O(n), due to recursive call stack.

---


## ✅ Example
### Input:
arr = [1, 2, 3, 4, 5, 11, 7, 8, 9]
### Output:
Array is not sorted

---

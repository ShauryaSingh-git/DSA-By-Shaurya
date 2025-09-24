# Recursive Binary Search

This folder contains a C++ implementation of the binary search algorithm using recursion.

## 📝 Problem Statement

Given a sorted array and a target value, implement a recursive function to find the index of the target value in the array. If the target is not found, return -1.

## 💡 Approach

- Use recursion to divide the search space in half at each step.
- Compare the middle element with the target:
  - If equal, return the index.
  - If the target is smaller, search the left half.
  - If the target is larger, search the right half.
- Base case: If the search space is empty (`left > right`), return -1.

---
## 📈 Complexity
### Time Complexity:
 O(log n), where n is the number of elements in the array.
### Space Complexity:
 O(log n), due to recursive call stack.

---
## ✅ Example
### Input:
arr = [1, 3, 5, 7, 9, 11], target = 7

### Output:
3

### Explanation:
The target value 7 is found at index 3.

---
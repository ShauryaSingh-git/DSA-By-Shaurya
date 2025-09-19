# Search a 2D Matrix (LeetCode Problem 74)
- [LeetCode Problem Link](https://leetcode.com/problems/search-a-2d-matrix/)

- Difficulty:Medium

This folder contains a C++ implementation for the "Search a 2D Matrix" problem using binary search.

---

## 📝 Problem Statement

Write an efficient algorithm that searches for a value in an `m x n` matrix. The matrix has the following properties:
- Integers in each row are sorted from left to right.
- The first integer of each row is greater than the last integer of the previous row.

Return `true` if the target is found, otherwise return `false`.

---

## 💡 Approach

- Treat the 2D matrix as a virtual 1D sorted array.
- Use binary search on this virtual array.
- Map the 1D index back to 2D indices using:
  - `row = mid / number_of_columns`
  - `col = mid % number_of_columns`
- Compare the target with the value at `matrix[row][col]` and adjust the search range accordingly.

---

## 📈 Complexity
### Time Complexity:
 O(log(m * n)), where m is the number of rows and n is the number of columns.
### Space Complexity:
 O(1), as only a constant amount of extra space is used.

## ✅ Example
### Input:
matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
### Output:
true
### Explanation:
3 is present in the matrix.

---


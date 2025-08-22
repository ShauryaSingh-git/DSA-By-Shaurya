# Range Sum Query 2D - Immutable (LeetCode #304)

**Difficulty:** Medium -Hard

[View the problem on LeetCode](https://leetcode.com/problems/range-sum-query-2d-immutable/)

---

## 📝 Problem Statement

Given a 2D matrix, handle multiple queries of the form:  
Given the coordinates `(row1, col1)` and `(row2, col2)`, return the sum of the elements inside the rectangle defined by its upper left corner `(row1, col1)` and lower right corner `(row2, col2)`.

You must design a data structure that efficiently supports these queries.

---

## 🛠️ Prerequisites- 

**IMPORTANT**

- Basic knowledge of 2D arrays and matrix operations
- Understanding of prefix sums (cumulative sums)
- Familiarity with the inclusion-exclusion principle
- Basic C++ programming skills

---

## 💡 Approach

This solution uses **prefix sum (cumulative sum)** for 2D matrices, also known as a **summed-area table**.

### Steps:

1. **Preprocessing:**  
   - Build a 2D prefix sum matrix where `prefix[i][j]` is the sum of all elements in the submatrix from `(0,0)` to `(i-1, j-1)`.

2. **Query:**  
   - For each query, use the inclusion-exclusion principle to get the sum in O(1) time:
     ```
     sumRegion(row1, col1, row2, col2) = 
         prefix[row2+1][col2+1] 
         - prefix[row1][col2+1] 
         - prefix[row2+1][col1] 
         + prefix[row1][col1]
     ```

---

## 🔎 Visual Representation

Suppose `matrix = [[3, 0, 1, 4, 2], [5, 6, 3, 2, 1], [1, 2, 0, 1, 5], [4, 1, 0, 1, 7], [1, 0, 3, 0, 5]]`

Query: sumRegion(2, 1, 4, 3)

```
+---+---+---+---+---+
| 3 | 0 | 1 | 4 | 2 |
+---+---+---+---+---+
| 5 | 6 | 3 | 2 | 1 |
+---+---+---+---+---+
| 1 | 2 | 0 | 1 | 5 |
+---+---+---+---+---+
| 4 | 1 | 0 | 1 | 7 |
+---+---+---+---+---+
| 1 | 0 | 3 | 0 | 5 |
+---+---+---+---+---+
```
The sum of the rectangle from (2,1) to (4,3) is 8.

---

## 📊 Complexity Analysis

- **Time Complexity:**  
  - Preprocessing: O(m * n)
  - Query: O(1) per query
- **Space Complexity:** O(m * n) for the prefix sum matrix

---

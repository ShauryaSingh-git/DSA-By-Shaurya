# 867. Transpose Matrix

- [Problem No-867 ](https://leetcode.com/problems/transpose-matrix/)

- Difficulty: Easy

This program computes the transpose of a given matrix.

---

## Problem Description

Given a 2D integer array `matrix`, return the transpose of `matrix`.

The transpose of a matrix is obtained by swapping the matrix's rows and columns. Formally, the element at position (i, j) in the original matrix becomes the element at position (j, i) in the transposed matrix.

---

## Algorithm / Implementation Notes

- Create a new matrix `arr` with dimensions swapped: rows = number of columns of the original matrix, columns = number of rows of the original matrix.
- Iterate over the indices and set `arr[i][j] = matrix[j][i]`.
- Return the new transposed matrix.

This approach allocates a new matrix and fills it with transposed values. The provided C++ implementation follows this approach.

---

## C++ Code- Leetcode

```
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> arr(matrix[0].size(),vector<int>(matrix.size()));
        for(int i=0;i<matrix[0].size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            {
                arr[i][j]=matrix[j][i];
            }
        }
        return arr;
    }
};
```

---

## Example

Input:
```
matrix = [
  [1, 2, 3],
  [4, 5, 6]
]
```
Output:
```
transposed = [
  [1, 4],
  [2, 5],
  [3, 6]
]
```
---

## Time and Space Complexity

- Time Complexity: O(m * n), where m is number of rows and n is number of columns in the input matrix — each element is visited once.
- Space Complexity: O(n * m) for the new matrix (unless transposition is done in-place for a square matrix).

---

## C++ Usage (matching the repository implementation)

The repository includes a `main()` that prompts for matrix dimensions and elements, then prints the transposed matrix.

Example run (user input shown after prompts):
```
Enter number of rows: 2
Enter number of columns: 3
Enter the elements of the matrix:
1 2 3
4 5 6
Transposed Matrix:
1 4  
2 5  
3 6  
```
---
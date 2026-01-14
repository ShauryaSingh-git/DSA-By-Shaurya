# Rotate Image

- [Problem No- 48](https://leetcode.com/problems/rotate-image/)
- **Difficulty:** Medium

## Problem Statement

You are given an `n x n` 2D matrix representing an image. Rotate the image by **90 degrees clockwise** in-place.

You must do this without using extra space (in-place modification).

For example:
```
Input:  [ 1, 2, 3 ]      Output: [ 7, 4, 1 ]
        [ 4, 5, 6 ]  →           [ 8, 5, 2 ]
        [ 7, 8, 9 ]              [ 9, 6, 3 ]
```

---

## Approach

**Two-Step Transformation:**

1. **Transpose the matrix:** Swap elements across the main diagonal (matrix[i][j] ↔ matrix[j][i])
   - Converts rows to columns
   
2. **Reverse each row:** Reverse the elements in each row
   - Completes the 90-degree clockwise rotation

**Why this works:**
- Transpose converts the matrix to its mirror image along the diagonal
- Reversing rows rotates the transposed matrix 90 degrees clockwise
- Combined effect: 90-degree clockwise rotation

**Visual Example:**
```
Step 0: Original       Step 1: Transpose      Step 2: Reverse rows
1 2 3                 1 4 7                  7 4 1
4 5 6      →          2 5 8       →          8 5 2
7 8 9                 3 6 9                  9 6 3
```

---

## Implementation

```cpp

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // Step 1: Transpose the matrix
        for(int i=0;i<matrix.size();i++) {
            for(int j=i;j<matrix.size();j++) {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        // Step 2: Reverse each row
        int col=matrix.size()-1;
        for(int i=0;i<matrix.size();i++) {
            for(int j=0;j<matrix.size()/2;j++) {
                swap(matrix[i][j],matrix[i][col-j]);
            }
        }
    }
};
```

---

## Examples

| Input | Output |
|-------|--------|
| [[1,2,3],[4,5,6],[7,8,9]] | [[7,4,1],[8,5,2],[9,6,3]] |
| [[1]] | [[1]] |
| [[1,2],[3,4]] | [[3,1],[4,2]] |
| [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]] | [[13,9,5,1],[14,10,6,2],[15,11,7,3],[16,12,8,4]] |

---

## Complexity

- **Time:** O(n²), where n is the dimension of the matrix (must visit each element)
- **Space:** O(1), in-place modification (no extra space used)

---

## Key Points

- **In-place solution:** Modifies the matrix without using extra space
- **Transpose:** Swap elements across the main diagonal (i < j)
- **Reverse rows:** Swap elements from outside to inside of each row
- **Works only for square matrices:** n × n dimensions
- **Two operations** combined achieve the 90-degree clockwise rotation
- More efficient than layer-by-layer rotation approach

---
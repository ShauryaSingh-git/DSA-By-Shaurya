# Spiral Matrix

- [Problem No- 54](https://leetcode.com/problems/spiral-matrix/)
- **Difficulty:** Medium

## Problem Statement

Given an `m x n` matrix, return all elements of the matrix in spiral order (clockwise from outside to inside).

For example:
```
Input:  [ 1, 2, 3 ]
        [ 4, 5, 6 ]
        [ 7, 8, 9 ]

Output: [1, 2, 3, 6, 9, 8, 7, 4, 5]
```

The spiral traversal goes: right → down → left → up → repeat

---

## Approach

**Four-Boundary Technique:**
1. Maintain four boundaries: `top`, `bottom`, `left`, `right`
2. Traverse in four directions in order:
   - **Right:** Move from left to right along top row
   - **Down:** Move from top to bottom along right column
   - **Left:** Move from right to left along bottom row
   - **Up:** Move from bottom to top along left column
3. After each direction, shrink the corresponding boundary
4. Add boundary checks before left and up traversals to avoid revisiting elements
5. Continue until all boundaries are exhausted

**Visual Example:**
```
1 → 2 → 3
        ↓
4   5   6
↓       ↓
7 ← 8 ← 9
```

---

## Implementation

```cpp

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int right=matrix[0].size()-1;
        int left=0;
        int top=0;
        int bottom=matrix.size()-1;
        vector<int>arr;
        
        while(top<=bottom && left<=right) {
            // Traverse right
            for(int i=left;i<=right;i++) {
                arr.push_back(matrix[top][i]);
            }
            top++;

            // Traverse down
            for(int i=top;i<=bottom;i++) {
                arr.push_back(matrix[i][right]);
            }
            right--;
            
            if(top>bottom)break;

            // Traverse left
            for(int i=right;i>=left;i--) {
                arr.push_back(matrix[bottom][i]);
            }
            bottom--;
            
            if(left>right)break;

            // Traverse up
            for(int i=bottom;i>=top;i--) {
                arr.push_back(matrix[i][left]);
            }
            left++;
        }
        
        return arr;
    }
};
```

---

## Examples

| Input | Output |
|-------|--------|
| [[1,2,3],[4,5,6],[7,8,9]] | [1,2,3,6,9,8,7,4,5] |
| [[1,2,3,4],[5,6,7,8],[9,10,11,12]] | [1,2,3,4,8,12,11,10,9,5,6,7] |
| [[1]] | [1] |
| [[1,2],[3,4]] | [1,2,4,3] |
| [[1,2,3,4,5]] | [1,2,3,4,5] |

---

## Complexity

- **Time:** O(m × n), where m is rows and n is columns (visit each element exactly once)
- **Space:** O(1) excluding the output array

---

## Key Points

- Four boundaries (`top`, `bottom`, `left`, `right`) control the spiral traversal
- Boundary checks before left and up traversals prevent revisiting processed elements
- Each iteration processes 4 directions and shrinks boundaries accordingly
- Works for rectangular matrices of any dimensions (m × n)
- Handles edge cases: single row, single column, or single element

---
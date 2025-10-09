# 🔁 Permutations – C++ Solution

- [Problem No-46](https://leetcode.com/problems/permutations/description/)
- Difficulty:Medium

This program generates **all possible permutations** of a given list of numbers using **recursion and backtracking**.  
Each unique arrangement of the input numbers is returned as a separate list.

---

## 📘 Problem Description

Given an array `nums` of distinct integers, return **all possible permutations**.

Each permutation must contain every element exactly once, and all possible orderings must be included.

---

## 🧠 Approach

1. **Backtracking**  
   - We generate permutations by swapping each element into the current index position.
   - After fixing an element at a position, we recursively generate permutations for the remaining elements.

2. **Swapping Technique**  
   - Swap `nums[i]` with `nums[index]` to bring a new number to the current position.
   - After recursion, **swap back** to restore the array’s previous state (backtrack).

3. **Base Case**  
   - When `index == nums.size()`, we’ve created one complete permutation — store it in the result vector.

---

## 🧩 Example

**Input:**

nums = [1, 2, 3]

**Output:**

[1, 2, 3] 
[1, 3, 2]
[2, 1, 3]
[2, 3, 1]
[3, 2, 1]
[3, 1, 2]

---

### Visual Representation of the Approach
recursion tree showing how the backtracking generates all permutations for [1, 2, 3]:
```
                         [1, 2, 3]
                           (index = 0)
             ┌────────────────┼────────────────┐
             |                |                |
        swap(0,0)        swap(0,1)        swap(0,2)
             |                |                |
         [1, 2, 3]        [2, 1, 3]        [3, 2, 1]
             |                |                |
             ↓                ↓                ↓
         index = 1        index = 1        index = 1
             |
        ┌────┼────┐
        |         |
   swap(1,1)  swap(1,2)
        |         |
    [1,2,3]   [1,3,2]
        ↓         ↓
     index=2   index=2
        ↓         ↓
  store [1,2,3] [1,3,2]

```
Similarly, other branches generate:
[2,1,3], [2,3,1], [3,2,1], [3,1,2]

---

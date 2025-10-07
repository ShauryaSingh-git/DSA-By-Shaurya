# 🧩 Subsets With Duplicates(90) – C++ Solution

- [Program No-90](https://leetcode.com/problems/subsets-ii/)
- Difficulty-Medium-Hard

This program generates **all possible subsets (the power set)** of a given integer array, even when the array contains **duplicate elements**, while ensuring that **duplicate subsets are not included** in the final result.

---

## 📘 Problem Description

Given an array `nums` that may contain duplicates, return **all possible unique subsets** (the power set).

Each subset should be sorted in **non-descending order**, and the solution set must **not contain duplicate subsets**.

---

## 🧠 Approach

1. **Sorting**  
   Sort the array first so that duplicates appear together.  
   → This helps to easily skip duplicate elements later.

2. **Recursion (Backtracking)**  
   For each element at index `i`, we have two choices:
   - ✅ **Include** the current element in the subset.
   - 🚫 **Exclude** it and move to the next unique element.

3. **Avoiding Duplicates**  
   When excluding an element, we **skip all its duplicates** by using a `while` loop:
   ```cpp
   while (index < nums.size() && nums[index] == nums[index - 1])
       index++;


---

## 🧩 Example

**Input:**

nums = [1, 2, 2]

**Output:**:
[]
[1]
[1, 2]
[1, 2, 2]
[2]
[2, 2]

---
```
                               []
                                |
                ┌───────────────┴───────────────┐
                |                               |
           Include 1                        Exclude 1
                |                               |
               [1]                            (skip duplicates? No)
                |
        ┌────────┴────────┐
        |                 |
    Include 2         Exclude 2 (skip duplicate 2)
        |                 |
      [1,2]              [1]
        |
   ┌────┴────┐
   |         |
Include 2  Exclude 2 (skip)
   |          |
 [1,2,2]     [1,2]

```

**After processing all branches, we get:**
----------------------------------------
[]
[1]
[1,2]
[1,2,2]
[2]
[2,2]
----------------------------------------

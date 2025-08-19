# Sort Colors by Sorting (Insertion Sort Approach)

**LeetCode Problem #75: Sort Colors**  
**Difficulty:** Medium

[View the problem on LeetCode](https://leetcode.com/problems/sort-colors/)

---

## 📝 Problem Statement

Given an array `nums` with `n` objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red (0), white (1), and blue (2).

You must solve this problem without using the library's sort function.

---

## 💡 Approach

This implementation uses the **Insertion Sort** algorithm to sort the array.  
Insertion sort is simple and works well for small arrays or when the array is nearly sorted.  
Here, since the constraints are manageable, insertion sort is a valid approach.

### Steps:

1. Start from the second element and iterate through the array.
2. For each element, compare it with the elements before it and shift larger elements to the right.
3. Insert the current element into its correct position in the sorted part of the array.

---

## 🔎 Visual Representation

Suppose `nums = [2, 0, 2, 1, 1, 0]`

- After first pass: `[0, 2, 2, 1, 1, 0]`
- After second pass: `[0, 2, 2, 1, 1, 0]`
- After third pass: `[0, 1, 2, 2, 1, 0]`
- After fourth pass: `[0, 1, 1, 2, 2, 0]`
- After fifth pass: `[0, 0, 1, 1, 2, 2]`

---

## 📊 Complexity Analysis

- **Time Complexity:** O(n²)  
  (Insertion sort has quadratic time complexity in the worst case.)
- **Space Complexity:** O(1)  
  (Sorting is done in-place.)

---


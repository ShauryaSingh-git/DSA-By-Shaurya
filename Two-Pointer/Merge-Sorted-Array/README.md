# LeetCode 88: Merge Sorted Array

This repository contains the solution for LeetCode problem 88, "Merge Sorted Array". The implementation is written in C++.

---

## 📜 Problem Description

You are given two integer arrays, `nums1` and `nums2`, sorted in non-decreasing order, and two integers `m` and `n` representing the number of elements in `nums1` and `nums2` respectively.

The task is to merge `nums2` into `nums1` as one sorted array.

**Constraints:**
* The final sorted array should not be returned by the function, but instead be stored **inside the array `nums1`**.
* `nums1` has a length of `m + n`, where the first `m` elements denote the elements that should be merged, and the last `n` elements are set to `0` and should be ignored.
* `nums2` has a length of `n`.

**Example:**
* **Input:** `nums1 = [1,2,3,0,0,0]`, `m = 3`, `nums2 = [2,5,6]`, `n = 3`
* **Output:** `nums1` becomes `[1,2,2,3,5,6]`

---


## 📈 Complexity Analysis

* **Time Complexity:** $O(m + n)$
    * The algorithm iterates through each element of both arrays at most once to place it in the correct position.

* **Space Complexity:** $O(1)$
    * The merge operation is performed **in-place**, modifying `nums1` directly without using any additional data structures proportional to the input size.

---

## 🧠 Approach: Two Pointers from the Back

A naive approach of merging from the beginning would require shifting elements in `nums1` to make space, which is inefficient. A much better approach is to start filling `nums1` from the end. This avoids overwriting the elements of `nums1` that we still need to compare.

The algorithm uses three pointers:
1.  `i`: Points to the last valid element in `nums1` (starts at `m - 1`).
2.  `j`: Points to the last element in `nums2` (starts at `n - 1`).
3.  `write`: Points to the last position of the `nums1` array where the next largest element will be placed (starts at `m + n - 1`).



The core logic iterates as long as there are elements left in `nums2` (`j >= 0`). In each step, it compares the elements at `nums1[i]` and `nums2[j]` and places the larger of the two at the `nums1[write]` position. The corresponding pointers are then decremented.

---

### Key Logic Points:

* **Main Loop:** The loop continues as long as `j >= 0`. If `j` becomes negative, it means all elements from `nums2` have been successfully merged, and the remaining elements in `nums1` (if any) are already in their correct sorted positions.

* **Handling Exhausted `nums1`:** If `i` becomes negative before `j`, it means all of `nums1`'s initial elements have been placed. The condition `i >= 0 && nums1[i] >= nums2[j]` will become `false`, causing the `else` block to execute. This correctly copies the remaining elements from `nums2` into `nums1`.

---




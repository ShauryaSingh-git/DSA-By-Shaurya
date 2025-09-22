# Find Minimum in Rotated Sorted Array (LeetCode Problem 153)

- [LeetCode Problem Link](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)
- Difficulty-Medium

This folder contains a C++ implementation for the "Find Minimum in Rotated Sorted Array" problem using binary search.

## 📝 Problem Statement

Suppose an array of length `n` sorted in ascending order is rotated between 1 and `n` times. Given the rotated array `nums`, return the minimum element.

You must write an algorithm that runs in O(log n) time.



## 💡 Approach

- Use binary search to efficiently find the minimum element.
- If the middle element is greater than the rightmost element, the minimum is in the right half.
- If the middle element is less than or equal to the rightmost element, the minimum is in the left half (including mid).
- Continue until the search space is reduced to one element, which is the minimum.

## ✅ Example
### Input:
nums = [3, 4, 5, 1, 2]
### Output:
1
### Explanation:
The minimum element in the rotated sorted array is 1.

## 🔍 Detailed Walkthrough

Let's go through a detailed example with the array `[3, 4, 5, 1, 2]`:

- Initial array: [3, 4, 5, 1, 2]
- `left = 0`, `right = 4`

**Iteration 1:**
- `mid = (0 + 4) / 2 = 2` (`nums[2] = 5`)
- `nums[2] > nums[4]` (5 > 2), so the minimum is in the right half.
- `left = 3`

**Iteration 2:**
- `mid = (3 + 4) / 2 = 3` (`nums[3] = 1`)
- `nums[3] <= nums[4]` (1 <= 2), so the minimum is at mid or in the left half.
- `right = 3`

Now, `left == right == 3`, so `nums[3] = 1` is the minimum.

---

## 📈 Complexity
### Time Complexity:
 O(log n), where n is the number of elements in nums.
### Space Complexity:
 O(1), as only a constant amount of extra space is used.

 ---
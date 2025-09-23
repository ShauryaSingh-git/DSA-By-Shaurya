# Search in Rotated Sorted Array (LeetCode Problem 33)

- [LeetCode Problem No-33](https://leetcode.com/problems/search-in-rotated-sorted-array/)

- Difficulty-Medium

---

## 📝 Problem Statement

Given a sorted array that has been rotated at an unknown pivot, and a target value, return the index of the target if it exists in the array. Otherwise, return -1. The array contains no duplicate elements.



## 💡 Approach

- Use binary search to efficiently find the target.
- At each step, determine which half of the array is sorted.
- If the target lies within the sorted half, continue searching in that half.
- Otherwise, search in the other half.
- Repeat until the target is found or the search space is exhausted.

---

## ✅ Example
### Input:
nums = [4,5,6,7,0,1,2], target = 0
### Output:
4
### Explanation:
The target 0 is found at index 4.

---

## 🔍 Detailed Walkthrough

Let's go through the given example with detailed iterations:

Array: [4, 5, 6, 7, 0, 1, 2]
Target: 0

### Iteration 1:
  - left = 0, right = 6, mid = 3 (nums[3] = 7)
  - Left part [4, 5, 6, 7] is sorted.
  
  Target 0 is not in [4, 5, 6, 7], so search right half.

### Iteration 2:
  - left = 4, right = 6, mid = 5 (nums[5] = 1)
  - Right part [0, 1, 2] is sorted.

Target 0 is in [0, 1, 2], so search left half.

### Iteration 3:
  - left = 4, right = 4, mid = 4 (nums[4] = 0)

Found target at index 4.

---

## 📈 Complexity
### Time Complexity:
 O(log n), where n is the number of elements in nums.
### Space Complexity:
 O(1), as only a constant amount of extra space is used.

 ---
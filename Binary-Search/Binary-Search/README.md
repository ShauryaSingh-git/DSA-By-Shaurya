# Binary Search (LeetCode Problem 704)

- [LeetCode Problem No-704](https://leetcode.com/problems/binary-search/)

- Difficulty-Easy

This folder contains a C++ implementation of the classic Binary Search algorithm.

---

## 📝 Problem Statement

Given a sorted array of integers `nums` and an integer `target`, return the index of `target` in the array. If `target` is not present, return `-1`.

---

## 💡 Approach

- Use two pointers (`st` for start and `end` for end) to define the current search range.
- Calculate the middle index `mid` in each iteration.
- If `nums[mid]` equals `target`, return `mid`.
- If `nums[mid]` is less than `target`, move the start pointer to `mid + 1`.
- If `nums[mid]` is greater than `target`, move the end pointer to `mid - 1`.
- If the loop ends without finding the target, return `-1`.

---

## 📈 Complexity

`Time Complexity:` O(log n), where n is the number of elements in nums.

`Space Complexity:` O(1), as the algorithm uses constant extra space.
## ✅ Example
### Input:

nums = [-1, 0, 3, 5, 9, 12], target = 9

---

### Output:
4 

--- 
### Explanation:
nums[4] == 9, so the function returns 4.

---
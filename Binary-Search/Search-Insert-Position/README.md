# Search Insert Position (LeetCode Problem 35)

- [LeetCode Problem No-35](https://leetcode.com/problems/search-insert-position/)

-Difficulty-Easy

This folder contains a C++ implementation for the "Search Insert Position" problem using binary search.

---

## 📝 Problem Statement

Given a sorted array of distinct integers `nums` and a target value `target`, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

---

## 💡 Approach

- Use binary search to efficiently find the target or the correct insert position.
- If the target is found, return its index.
- If not found, return the index where the target should be inserted to maintain the sorted order (which will be the value of the `st` pointer after the loop).

---

## 📈 Complexity
### Time Complexity:
 O(log n), where n is the number of elements in nums.
### Space Complexity:
 O(1), as only a constant amount of extra space is used.
## ✅ Example

### Input:
nums = [1, 3, 5, 6], target = 5

### Output:
2

### Explanation:
5 is found at index 2.

---
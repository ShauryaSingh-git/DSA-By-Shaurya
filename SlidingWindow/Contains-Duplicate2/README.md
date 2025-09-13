# Contains Duplicate II (LeetCode Problem 219)

- [Problem No 219](https://leetcode.com/problems/contains-duplicate-ii/)

- Difficulty-Medium

This folder contains a C++ solution for the "Contains Duplicate II" problem using the sliding window technique and an unordered set.

---

## 📝 Problem Statement

Given an integer array `nums` and an integer `k`, return `true` if there are two distinct indices `i` and `j` in the array such that `nums[i] == nums[j]` and `abs(i - j) <= k`.

---

## 💡 Approach

- Use a sliding window of size `k` and an unordered set to keep track of elements in the current window.
- For each element, check if it already exists in the set (duplicate within range).
- If yes, return `true`.
- Otherwise, insert the element into the set.
- If the window size exceeds `k`, remove the element that is out of the window.

---
## 📈 Complexity

- Time Complexity: O(n), where n is the length of nums.
- Space Complexity: O(k), for the sliding window set.

---
## ✅ Example
Input:
nums = [1,2,3,1], k = 3
Output:
true
Explanation:
nums[0] == nums[3] and abs(0 - 3) = 3 <= 3.

---
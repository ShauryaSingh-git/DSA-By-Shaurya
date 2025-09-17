# Guess Number Higher or Lower (LeetCode Problem 374)

- [LeetCode Problem No-374](https://leetcode.com/problems/guess-number-higher-or-lower/)

- Difficulty-Easy

This folder contains a C++ implementation for the "Guess Number Higher or Lower" problem using binary search.

---

## 📝 Problem Statement

You are trying to guess a number between 1 and `n`. Each time you call the `guess(int num)` API, it returns:
- `-1` if your guess is higher than the picked number,
- `1` if your guess is lower than the picked number,
- `0` if your guess is correct.

Return the number that was picked.

---

## 💡 Approach

- Use binary search between 1 and `n`.
- On each iteration, call the `guess(mid)` API:
  - If it returns `0`, you've found the number.
  - If it returns `-1`, search the left half.
  - If it returns `1`, search the right half.

---

## 📈 Complexity

### Time Complexity: 

O(log n), where n is the upper bound of the range.

### Space Complexity:

 O(1), as only a constant amount of extra space is used.

---

## ✅ Example

### Input:
n = 10, picked number is 6

### Output:
6
### Explanation:

The function finds the picked number using binary search and the guess API.


---
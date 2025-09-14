# Longest Substring Without Repeating Characters (LeetCode Problem 3)
- [Problem No-3](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

- Difficulty:Medium

This folder contains a C++ solution for the "Longest Substring Without Repeating Characters" problem using the sliding window technique and a hash map.

## 📝 Problem Statement

Given a string `s`, find the length of the longest substring without repeating characters.

---

## 💡 Approach

- Use a sliding window with two pointers (`left` and `right`) to represent the current substring.
- Use an unordered map to store the last seen index of each character.
- If a character is repeated within the current window, move the `left` pointer to one position after the last occurrence of that character.
- Update the maximum length found so far.

---

## 📈 Complexity
Time Complexity: O(n), where n is the length of the string.

Space Complexity: O(min(n, m)), where m is the size of the character set.

---

## ✅ Example

### Input:
s = "abcabcbb"

### Output:

3

### Explanation:

The answer is "abc", with the length of 3.

---
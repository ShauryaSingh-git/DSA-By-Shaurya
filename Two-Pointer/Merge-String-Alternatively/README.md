# 1768. Merge Strings Alternately

This repository contains the C++ solution for LeetCode problem 1768, "Merge Strings Alternately".

---

## 📜 Problem Statement

You are given two strings, `word1` and `word2`. Merge the strings by adding letters in alternating order, starting with `word1`. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

---

## Examples

**Example 1:**
* **Input:** `word1 = "abc"`, `word2 = "pqr"`
* **Output:** `"apbqcr"`
* **Explanation:** The merged string is formed by taking one letter from `word1` and one from `word2` alternately.

**Example 2:**
* **Input:** `word1 = "ab"`, `word2 = "pqrs"`
* **Output:** `"apbqrs"`
* **Explanation:** After merging `"ab"` and `"pq"`, we are left with `"rs"` from `word2`. These are appended to the end.

**Example 3:**
* **Input:** `word1 = "abcd"`, `word2 = "pq"`
* **Output:** `"apbqcd"`
* **Explanation:** After merging `"ab"` and `"pq"`, we are left with `"cd"` from `word1`. These are appended to the end.

---

## Constraints

* `1 <= word1.length, word2.length <= 100`
* `word1` and `word2` consist of lowercase English letters.

---

## 🚀 Solution

### Approach

This solution uses a **single `while` loop** and **two pointers** to build the merged string in one efficient pass. The logic is designed to handle strings of different lengths without needing extra loops.

1.  **Initialization**: Two pointers, `a` and `b`, are initialized to `0` to track the current index in `word1` and `word2`. An empty string `answer` is created to build the result.

2.  **Unified Loop**: The core of the algorithm is a `while` loop that continues as long as **either** pointer is within its string's bounds (`a < word1.size() || b < word2.size()`). This single condition elegantly manages both the alternating merge and the appending of any leftover characters.

3.  **Conditional Appending**: Inside the loop:
    * It first checks if the pointer `a` is still valid for `word1`. If it is, the character `word1[a]` is appended to the `answer`.
    * Next, it performs the same check for the pointer `b` and `word2`, appending `word2[b]` if it's within bounds.

4.  **Pointer Advancement**: Crucially, both pointers `a` and `b` are incremented in **every single iteration**. This means that once a shorter string is fully processed, its corresponding `if` check will fail on subsequent passes, but the loop continues, allowing the remaining characters from the longer string to be appended on subsequent iterations until both pointers are out of bounds.

5.  **Return Result**: The loop terminates only when both strings have been fully traversed. The final `answer` string is then returned.


### Complexity Analysis

* **Time Complexity:** $O(N + M)$, where $N$ is the length of `word1` and $M$ is the length of `word2`. We iterate through both strings exactly once.
* **Space Complexity:** $O(N + M)$, as we create a new string to store the merged result, which has a length equal to the sum of the lengths of the input strings.

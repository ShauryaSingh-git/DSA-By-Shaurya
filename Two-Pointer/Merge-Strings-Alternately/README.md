# Merge Strings Alternately (LeetCode #1768)

**Difficulty:** Easy  
[View the problem on LeetCode](https://leetcode.com/problems/merge-strings-alternately/)

---

## 📝 Problem Statement

You are given two strings `word1` and `word2`.  
Merge the strings by adding letters in alternating order, starting with `word1`.  
If one string is longer than the other, append the additional letters onto the end of the merged string.

**Example:**  
- Input: `word1 = "abc"`, `word2 = "defgh"`
- Output: `"adbcefg"`

---

## 💡 Approach

This solution uses a **two-pointer technique** to merge the two strings alternately.

### Steps:

1. Initialize two pointers, `a` for `word1` and `b` for `word2`.
2. While either pointer has not reached the end of its string:
    - If `a` is within bounds, append `word1[a]` to the answer and increment `a`.
    - If `b` is within bounds, append `word2[b]` to the answer and increment `b`.
3. Continue until all characters from both strings are merged.

---

## 🔎 Visual Representation

Suppose `word1 = "abc"`, `word2 = "defgh"`

| Step | a | b | answer   | Action                |
|------|---|---|----------|-----------------------|
| 1    | 0 | 0 | "a"      | Add word1[0] = 'a'    |
| 2    | 1 | 0 | "ad"     | Add word2[0] = 'd'    |
| 3    | 1 | 1 | "adb"    | Add word1[1] = 'b'    |
| 4    | 2 | 1 | "adbe"   | Add word2[1] = 'e'    |
| 5    | 2 | 2 | "adbec"  | Add word1[2] = 'c'    |
| 6    | 3 | 2 | "adbecf" | Add word2[2] = 'f'    |
| 7    | 3 | 3 | "adbecfg"| Add word2[3] = 'g'    |
| 8    | 3 | 4 | "adbecfgh"| Add word2[4] = 'h'   |

Final merged string: `"adbcefg"`

---

## 📊 Complexity Analysis

- **Time Complexity:** O(n + m)  
  (Where n and m are the lengths of `word1` and `word2`.)
- **Space Complexity:** O(n + m)  
  (For the merged string.)

---


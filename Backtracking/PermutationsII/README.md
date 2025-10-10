# 🧩 Unique Permutations — C++ Backtracking Solution

- [Problem No-47](https://leetcode.com/problems/permutations-ii/description/)
- Difficulty:Medium-Hard
## 📘 Problem Statement
Given a list of numbers that may contain duplicates, return **all possible unique permutations**.

Example:
Input: [1, 1, 2]
Output: [[1,1,2], [1,2,1], [2,1,1]]

---

## 🧠 Approach

We use **Backtracking** to generate all permutations.

Since the input may contain duplicates (like `1, 1, 2`), we use a **set** to ensure only **unique permutations** are included in the result.

### Steps:
1. Fix one element at a time by swapping it with elements from the current index onward.  
2. Recurse to generate permutations for the remaining elements.  
3. When a full permutation is formed, check if it’s already in the set:  
   - If not → insert it into the result and mark it as visited in the set.  
   - If yes → skip it to avoid duplicates.  
4. Backtrack (undo the last swap) and continue exploring.

---

## 🌳 Visual Representation (Backtracking Tree)

### Initial Input: [1, 1, 2]
- Level 0:
```
       [1, 1, 2]
     /     |     \
    /      |      \
swap(0,0) swap(0,1) swap(0,2)
   ↓        ↓        ↓
[1,1,2]  [1,1,2]  [2,1,1]
```
- Level 1 (recursive calls):
```
[1,1,2] → fix index 0
     swap(1,1) → [1,1,2]
     swap(1,2) → [1,2,1]

[2,1,1] → fix index 0
     swap(1,1) → [2,1,1]
     swap(1,2) → [2,1,1] (duplicate skipped)
```

Unique Results:
[1,1,2]
[1,2,1]
[2,1,1]

---

## 🧾 Example Output


Unique Permutations of [1, 1, 2] are:
[1, 1, 2]
[1, 2, 1]
[2, 1, 1]

---

# 🎯 Two Sum II – Input Array Is Sorted 

[View Problem No-167](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/)

Difficulty-Easy

This Section demonstrates solving the **Two Sum II** problem using the **two-pointer technique**.

---

## 📌 Problem Statement

Given a **1-indexed** array of integers `numbers` that is sorted in **non-decreasing order**, find two numbers such that they add up to a specific target number.  

Return the **indices of the two numbers** (1-based indexing).

---

## 🛠 Approach: Two Pointers

1. Initialize two pointers:
   - `i` at the **start** of the array.
   - `j` at the **end** of the array.

2. Loop while `i < j`:
   - If `numbers[i] + numbers[j] == target` → return `(i+1, j+1)`.
   - If the sum is **greater than target** → move `j--` (to reduce sum).
   - If the sum is **less than target** → move `i++` (to increase sum).

3. Since the array is sorted, this guarantees finding the solution in **O(n)**.

---

## 📄 Function Explained

### **vector<int> twoSum(vector<int>& numbers, int target)**
- **Input**:  
  - `numbers`: sorted integer vector.  
  - `target`: the required sum.  

- **Output**:  
  - A vector of size 2 containing the **1-based indices** of the solution.  

---

## 🧪 Example Run

### Input:
numbers = [2, 7, 11, 15]
target = 9
### Steps:
- `i = 0, j = 3 → 2 + 15 = 17 > 9 → j--`
- `i = 0, j = 2 → 2 + 11 = 13 > 9 → j--`
- `i = 0, j = 1 → 2 + 7 = 9 == target ✅`

### Output:
Indices: 1 2

---

## ⚡ Complexity Analysis
- **Time Complexity** → `O(n)` (each element is visited at most once).  
- **Space Complexity** → `O(1)` (only two pointers used).  

---

## 📄 Sample Output from Code
Indices: 1 2
---

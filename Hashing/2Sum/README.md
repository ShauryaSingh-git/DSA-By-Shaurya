# 🎯 Two Sum (Hashing Solution in C++)

[View Problem No-1](https://leetcode.com/problems/two-sum/description/)

Difficulty-Easy-Medium
This Section demonstrates solving the **Two Sum** problem using a **hash map** for efficient lookup.

---

## 📌 Problem Statement

Given an array of integers `nums` and an integer `target`, return **indices** of the two numbers such that they add up to `target`.

⚠️ Each input has exactly one solution, and you **cannot** use the same element twice.  

---

## 🛠 Approach: Hash Map

1. Create an unordered_map (`maps`) to store:
   - **Key** → number from `nums`.
   - **Value** → index of that number.

2. Iterate through the array:
   - For each number `first = nums[i]`, compute `second = target - nums[i]`.
   - Check if `second` exists in the map:
     - ✅ If yes, return indices `{i, maps[second]}`.
     - ❌ Otherwise, insert `{nums[i], i}` into the map.

3. Return the pair of indices when found.

---

## 📄 Function Explained

### **vector<int> twoSum(vector<int>& nums, int target)**
- **Input**:  
  - `nums`: vector of integers.  
  - `target`: integer sum.  

- **Output**:  
  - A vector of size 2 containing the indices of the pair that adds to `target`.

---

## 🧪 Example Run

### Input:
nums = [2, 7, 11, 15]
target = 9

### Steps:

- i = 0 → nums[0] = 2 → need `7`. Map empty → store {2:0}.
- i = 1 → nums[1] = 7 → need `2`. ✅ Found 2 in map → return {1,0}.

### Output:
Indices: 1 0

---

## ⚡ Complexity Analysis
- **Time Complexity** → `O(n)` (each element processed once).  
- **Space Complexity** → `O(n)` (map stores up to n elements).  

---

## 📄 Sample Output from Code
Indices: 1 0

---

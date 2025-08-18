# 3Sum Problem (LeetCode #15)

**Difficulty:** Medium  
[View the problem on LeetCode](https://leetcode.com/problems/3sum/)

---

## 📝 Problem Statement

Given an integer array `nums`, return all the unique triplets `[nums[i], nums[j], nums[k]]` such that `i != j != k` and `nums[i] + nums[j] + nums[k] == 0`.

- The solution set must not contain duplicate triplets.

---

## 💡 Approach

This solution uses the **two-pointer technique** after sorting the array to efficiently find all unique triplets that sum to zero.

### Steps:

1. **Sort the Array:**  
   Sorting helps in efficiently skipping duplicates and applying the two-pointer technique.

2. **Iterate and Fix the First Element:**  
   For each index `i`, fix `nums[i]` as the first element of the triplet. Skip duplicates to ensure unique triplets.

3. **Two-Pointer Search:**  
   Use two pointers, `j` (starting from `i+1`) and `k` (starting from the end), to find pairs such that `nums[i] + nums[j] + nums[k] == 0`.
   - If the sum is less than zero, increment `j`.
   - If the sum is greater than zero, decrement `k`.
   - If the sum is zero, record the triplet and skip duplicates for both `j` and `k`.

4. **Avoid Duplicates:**  
   After finding a valid triplet, increment `j` and decrement `k` while skipping over duplicate values to ensure all triplets are unique.

---

## 🔎 Visual Representation

Suppose `nums = [-1, 0, 1, 2, -1, -4]`

After sorting: `[-4, -1, -1, 0, 1, 2]`

### Example Step-by-Step


| i   | nums[i] | j   | k   | nums[j] | nums[k] | Sum | Action                    |
|-----|---------|-----|-----|---------|---------|-----|---------------------------|
| 0   | -4      | 1   | 5   | -1      | 2       | -3  | j++                       |
| 0   | -4      | 2   | 5   | -1      | 2       | -3  | j++                       |
| 0   | -4      | 3   | 5   | 0       | 2       | -2  | j++                       |
| 0   | -4      | 4   | 5   | 1       | 2       | -1  | j++                       |
| 1   | -1      | 2   | 5   | -1      | 2       | 0   | Add [-1, -1, 2], j++, k-- |
| 1   | -1      | 3   | 4   | 0       | 1       | 0   | Add [-1, 0, 1], j++, k--  |


*Continue this process for all valid i, j, k combinations, skipping duplicates as needed.*

---

## 📦 Example Output

For input: `[-1, 0, 1, 2, -1, -4]`

**Output as a vector of vectors:**
```cpp
{
  {-1, -1, 2},
  {-1, 0, 1}
}
```

---

## 📊 Complexity Analysis

- **Time Complexity:** O(n²)  
  (Sorting takes O(n log n), and for each element, the two-pointer scan is O(n))
- **Space Complexity:** O(|output|)  
  (For storing the resulting triplets)

---

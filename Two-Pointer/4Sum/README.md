# 4Sum Problem (LeetCode #18)

**Difficulty:**   Hard 
[View the problem on LeetCode](https://leetcode.com/problems/4sum/)

---

## 📝 Problem Statement

Given an array `nums` of `n` integers and an integer `target`, return all unique quadruplets `[nums[a], nums[b], nums[c], nums[d]]` such that:

- `a`, `b`, `c`, and `d` are distinct indices,
- `nums[a] + nums[b] + nums[c] + nums[d] == target`.

The solution set must not contain duplicate quadruplets.

---

## 💡 Approach

The 4Sum problem is a generalization of the 3Sum problem. The main idea is to fix two numbers and then use the two-pointer technique to find the remaining two numbers that sum up to the required value.

### Steps:

1. **Sort the Array:**  
   Sorting helps in efficiently skipping duplicates and applying the two-pointer technique.

2. **Fix the First Two Numbers:**  
   Use two nested loops to fix the first (`i`) and second (`j`) numbers. Skip duplicates to ensure unique quadruplets.

3. **Two-Pointer Search for Remaining Two Numbers:**  
   For each pair `(i, j)`, use two pointers (`k` and `l`) to scan the subarray to the right of `j`.  
   - If the sum of the quadruplet is less than the target, move `k` forward.
   - If the sum is greater than the target, move `l` backward.
   - If the sum matches the target, record the quadruplet and skip duplicates for both `k` and `l`.

4. **Avoid Duplicates:**  
   After finding a valid quadruplet, increment `k` and decrement `l` while skipping over duplicate values to ensure all quadruplets are unique.

---

## 🔎 Visual Representation

Suppose `nums = [1, 0, -1, 0, -2, 2]`, `target = 0`

After sorting: `[-2, -1, 0, 0, 1, 2]`


### Example Step-by-Step

| i   | j   | k   | l   | nums[i] | nums[j] | nums[k] | nums[l] | Sum | Action                |
|-----|-----|-----|-----|---------|---------|---------|---------|-----|-----------------------|
| 0   | 1   | 2   | 5   | -2      | -1      | 0       | 2       | -1  | k++                   |
| 0   | 1   | 3   | 5   | -2      | -1      | 0       | 2       | -1  | k++                   |
| 0   | 1   | 4   | 5   | -2      | -1      | 1       | 2       | 0   | Add quadruplet, k++, l-- |
| ... | ... | ... | ... | ...     | ...     | ...     | ...     | ... | ...                   |

---

## 📊 Complexity Analysis

- **Time Complexity:** O(n³)  
  - The outer two loops run in O(n²), and the two-pointer scan for each pair runs in O(n), resulting in O(n³) overall.

- **Space Complexity:** O(|output|)  
  - For storing the resulting quadruplets.

  ---
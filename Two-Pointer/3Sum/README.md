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

---

## 🔎 Visual Representation

Suppose `nums = [-1, 0, 1, 2, -1, -4]`

After sorting: `[-4, -1, -1, 0, 1, 2]`

### Flowchart

```mermaid
flowchart TD
    A[Sort the array] --> B[For i = 0 to n-3]
    B --> C{Skip duplicate i?}
    C -- Yes --> B
    C -- No --> D[Set j = i+1, k = n-1]
    D --> E{j < k?}
    E -- No --> B
    E -- Yes --> F[sum = nums[i] + nums[j] + nums[k]]
    F --> G{sum == 0?}
    G -- Yes --> H[Add triplet, j++, k--, skip duplicates]
    H --> E
    G -- No --> I{sum < 0?}
    I -- Yes --> J[j++]
    J --> E
    I -- No --> K[k--]
    K --> E
```

### Example Step-by-Step
```
| i   | nums[i] | j   | k   | nums[j] | nums[k] | Sum | Action                    |
|-----|---------|-----|-----|---------|---------|-----|---------------------------|
| 0   | -4      | 1   | 5   | -1      | 2       | -3  | j++                       |
| 0   | -4      | 2   | 5   | -1      | 2       | -3  | j++                       |
| ... | ...     | ... | ... | ...     | ...     | ... | ...                       |
| 1   | -1      | 2   | 5   | -1      | 2       | 0   | Add [-1, -1, 2], j++, k-- |
| 1   | -1      | 3   | 4   | 0       | 1       | 0   | Add [-1, 0, 1], j++, k--  |
```

---

## 📦 Example Output

For input: `[-1, 0, 1, 2, -1, -4]`

**Output:**
```
-1 -1 2
-1 0 1
```
Return this as an vector of vectors.
---


## 📊 Complexity Analysis

- **Time Complexity:** O(n²)  
  (Sorting takes O(n log n), and for each element, the two-pointer scan is O(n))
- **Space Complexity:** O(|output|)  
  (For storing the resulting triplets)

---

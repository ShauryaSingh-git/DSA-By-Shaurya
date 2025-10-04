# Subsets (LeetCode #78)

**Difficulty:** Medium  
[LeetCode Problem No-78](https://leetcode.com/problems/subsets/)

This folder contains a C++ solution for the "Subsets" problem using backtracking.

---

## 📝 Problem Statement

Given an integer array `nums`, return all possible subsets (the power set).

**Example:**  
- Input: `[1,2,3]`  
- Output: `[[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]`

---

## 💡 Approach

This solution uses **backtracking**:
1. At each index, choose to include or exclude the current element.
2. Recursively build all possible combinations.
3. Store each subset when reaching the end of the array.

---

## 🖼️ Visualization & Dry Run

Let's visualize the backtracking process for `nums = [1, 2, 3]`:

```
Start: []
│
├── Add 1: [1]
│   ├── Add 2: [1, 2]
│   │   ├── Add 3: [1, 2, 3]   → Store [1,2,3]
│   │   └── Skip 3: [1, 2]     → Store [1,2]
│   └── Skip 2: [1]
│       ├── Add 3: [1, 3]      → Store [1,3]
│       └── Skip 3: [1]        → Store [1]
├── Skip 1: []
    ├── Add 2: [2]
    │   ├── Add 3: [2, 3]      → Store [2,3]
    │   └── Skip 3: [2]        → Store [2]
    └── Skip 2: []
        ├── Add 3: [3]        → Store [3]
        └── Skip 3: []        → Store []
```

**Dry Run Table:**

| Step         | Current Subset | Stored Subsets                |
|--------------|---------------|-------------------------------|
| Start        | `[]`          | `[[]]`                        |
| Add 1        | `[1]`         | `[[], [1]]`                   |
| Add 2        | `[1,2]`       | `[[], [1], [1,2]]`            |
| Add 3        | `[1,2,3]`     | `[[], [1], [1,2], [1,2,3]]`   |
| Backtrack 3  | `[1,2]`       | `[[], [1], [1,2], [1,2,3]]`   |
| Backtrack 2  | `[1]`         | `[[], [1], [1,2], [1,2,3]]`   |
| Add 3        | `[1,3]`       | `[[], [1], [1,2], [1,2,3], [1,3]]` |
| ...          | ...           | ...                           |

This process continues until all possible subsets are generated.

---
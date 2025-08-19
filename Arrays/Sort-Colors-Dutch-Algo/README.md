# Sort Colors (Dutch National Flag Algorithm)

**LeetCode Problem #75: Sort Colors**  
**Difficulty:** Medium

[View the problem on LeetCode](https://leetcode.com/problems/sort-colors/)

---

## 📝 Problem Statement

Given an array `nums` with `n` objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red (0), white (1), and blue (2).

You must solve this problem without using the library's sort function.

---

## 💡 Approach: Dutch National Flag Algorithm

This implementation uses the **Dutch National Flag Algorithm** by Edsger Dijkstra.  
It efficiently sorts the array in a single pass with constant space.

### Steps:

1. **Initialize Three Pointers:**
   - `low` (next position for 0)
   - `mid` (current element)
   - `high` (next position for 2)

2. **Traverse the Array:**
   - If `nums[mid] == 0`: Swap with `nums[low]`, increment both `low` and `mid`.
   - If `nums[mid] == 1`: Just increment `mid`.
   - If `nums[mid] == 2`: Swap with `nums[high]`, decrement `high`.

3. **Continue until `mid > high`.**

---

## 🔎 Visual Representation

Suppose `nums = [2, 0, 2, 1, 1, 0]`

| low | mid | high | nums                        | Action                                  |
|-----|-----|------|-----------------------------|-----------------------------------------|
| 0   | 0   | 5    | [2, 0, 2, 1, 1, 0]          | nums[mid]=2, swap mid/high, high--      |
| 0   | 0   | 4    | [0, 0, 2, 1, 1, 2]          | nums[mid]=0, swap mid/low, low++, mid++ |
| 1   | 1   | 4    | [0, 0, 2, 1, 1, 2]          | nums[mid]=0, swap mid/low, low++, mid++ |
| 2   | 2   | 4    | [0, 0, 2, 1, 1, 2]          | nums[mid]=2, swap mid/high, high--      |
| 2   | 2   | 3    | [0, 0, 1, 1, 2, 2]          | nums[mid]=1, mid++                      |
| 2   | 3   | 3    | [0, 0, 1, 1, 2, 2]          | nums[mid]=1, mid++                      |

Final array: `[0, 0, 1, 1, 2, 2]`

---

## 📊 Complexity Analysis

- **Time Complexity:** O(n)  
  (Each element is checked at most once.)
- **Space Complexity:** O(1)  
  (Sorting is done in-place.)

---

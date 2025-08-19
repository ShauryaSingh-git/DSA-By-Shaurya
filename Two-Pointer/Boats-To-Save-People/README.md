# Boats to Save People (LeetCode #881)

**Difficulty:** Medium  

[View the problem on LeetCode](https://leetcode.com/problems/boats-to-save-people/)

---

## 📝 Problem Statement

You are given an array `people` where `people[i]` is the weight of the `i`-th person, and an integer `limit` representing the maximum weight a boat can carry. Each boat can carry at most two people at the same time, provided the sum of their weights is at most `limit`.

Return the minimum number of boats to carry every given person.

---

## 💡 Approach

This solution uses the **two-pointer technique** after sorting the array of people's weights.

### Steps:

1. **Sort the Array:**  
   Sort the `people` array in non-decreasing order.

2. **Initialize Two Pointers:**  
   - `low` starts at the beginning (lightest person).
   - `high` starts at the end (heaviest person).

3. **Pair People Greedily:**  
   - If the lightest and heaviest person can share a boat (`people[low] + people[high] <= limit`), move both pointers inward.
   - Otherwise, the heaviest person goes alone (`high--`).
   - In both cases, increment the boat count.

4. **Repeat Until All People Are Assigned to Boats:**  
   - If only one person is left (`low == high`), they need a boat.

---

## 🔎 Visual Representation

Suppose `people = [1, 2, 3, 4, 5]`, `limit = 5`

After sorting: `[1, 2, 3, 4, 5]`

| low | high | people[low] | people[high] | Pair? | Boats Used | Action                      |
|-----|------|-------------|--------------|-------|------------|-----------------------------|
| 0   | 4    | 1           | 5            | No    | 1          | 5 alone, high--             |
| 0   | 3    | 1           | 4            | Yes   | 2          | 1+4 together, low++, high-- |
| 1   | 2    | 2           | 3            | Yes   | 3          | 2+3 together, low++, high-- |

All people are assigned to boats in 3 steps.

---

## 📊 Complexity Analysis

- **Time Complexity:** O(n log n)  
  (Due to sorting the array. The two-pointer scan is O(n).)
- **Space Complexity:** O(1)  
  (Sorting is in-place, and only a few variables are used.)

---


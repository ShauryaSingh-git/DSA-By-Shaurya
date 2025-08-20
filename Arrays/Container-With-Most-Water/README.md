# Container With Most Water (LeetCode #11)

**Difficulty:** Medium  
[View the problem on LeetCode](https://leetcode.com/problems/container-with-most-water/)

---

## 📝 Problem Statement

Given `n` non-negative integers `height[0], height[1], ..., height[n-1]`, where each represents a point at coordinate `(i, height[i])`.  
`n` vertical lines are drawn such that the two endpoints of the line `i` are at `(i, 0)` and `(i, height[i])`.

Find two lines that, together with the x-axis, form a container such that the container contains the most water.

Return the maximum amount of water a container can store.

---

## 💡 Approach

This solution uses the **two-pointer technique** to efficiently find the maximum area.

### Steps:

1. **Initialize Two Pointers:**  
   - `i` at the start (leftmost line)
   - `j` at the end (rightmost line)

2. **Calculate Area:**  
   - The area is determined by the shorter of the two lines (`min(height[i], height[j])`) multiplied by the distance between them (`j - i`).

3. **Move Pointers:**  
   - Move the pointer pointing to the shorter line inward, hoping to find a taller line that could potentially increase the area.
   - Repeat until the two pointers meet.

---

## 🔎 Visual Representation

Suppose `height = [1,8,6,2,5,4,8,3,7]`

- Start with `i = 0` and `j = 8`
- Calculate area: `min(1,7) * (8-0) = 8`
- Move `i` (since `height[0] < height[8]`)
- Continue this process, always updating the maximum area found.

| i   | j   | height[i] | height[j] | Width | Area | Max Area So Far | Move    |
|-----|-----|-----------|-----------|-------|------|-----------------|---------|
| 0   | 8   | 1         | 7         | 8     | 8    | 8               | i++     |
| 1   | 8   | 8         | 7         | 7     | 49   | 49              | j--     |
| 1   | 7   | 8         | 3         | 6     | 18   | 49              | j--     |
| 1   | 6   | 8         | 8         | 5     | 40   | 49              | j--     |
| 1   | 5   | 8         | 4         | 4     | 16   | 49              | j--     |
| 1   | 4   | 8         | 5         | 3     | 15   | 49              | j--     |
| 1   | 3   | 8         | 2         | 2     | 4    | 49              | j--     |
| 1   | 2   | 8         | 6         | 1     | 6    | 49              | j--     |

Final answer: **49**

---

## 📊 Complexity Analysis

- **Time Complexity:** O(n)  
  (Each element is visited at most once by the two pointers.)
- **Space Complexity:** O(1)  
  (Only a few variables are used.)

---


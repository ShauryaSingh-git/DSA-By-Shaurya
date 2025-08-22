# Majority Element II (LeetCode #229)

**Difficulty:** Medium 
 
[View the problem on LeetCode](https://leetcode.com/problems/majority-element-ii/)

---

## 📝 Problem Statement

Given an integer array of size `n`, find all elements that appear more than ⌊ n/3 ⌋ times.

You may return the answer in any order.

---

## 💡 Approach

This solution sorts the array and then counts the occurrences of each element. If an element appears more than ⌊ n/3 ⌋ times and is not already in the answer, it is added to the result.

### Steps:

1. **Sort the Array:**  
   Sorting groups identical elements together, making it easy to count their occurrences.

2. **Count Occurrences:**  
   Iterate through the sorted array, counting consecutive identical elements.

3. **Check Majority Condition:**  
   If the count of an element exceeds ⌊ n/3 ⌋ and it is not already in the answer, add it to the result.

---

## 🔎 Visual Representation

Suppose `nums = [3, 2, 3]`

- After sorting: `[2, 3, 3]`
- Count occurrences:
  - 2 appears once (not > n/3)
  - 3 appears twice (2 > 3/3 = 1), so 3 is a majority element

**Output:** `[3]`

---

## 📊 Complexity Analysis

- **Time Complexity:** O(n log n)  
  (Due to sorting the array. Counting is O(n).)
- **Space Complexity:** O(1) (excluding the space for the output)

---


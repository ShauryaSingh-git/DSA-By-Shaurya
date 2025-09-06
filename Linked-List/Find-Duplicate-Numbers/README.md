# Find the Duplicate Number
[View Problem No-287](https://leetcode.com/problems/find-the-duplicate-number/description/)

Difficulty-Medium
## Problem Statement
You are given an array of integers `nums` containing `n + 1` integers where each integer is in the range `[1, n]`.  

There is only **one repeated number**, but it may appear more than once.  
Your task is to **find and return the duplicate number**.

---

## Approach: Floyd’s Tortoise and Hare (Cycle Detection)
This is not generally a `linked list` question but due to this algo this has been marked as a linked list question.

### 🔹 Key Idea
- Treat the array as a **linked list**:
  - Each index represents a node.
  - Each value at an index points to the next node (like `next` in a linked list).
- Because there is a duplicate, this "linked list" will have a **cycle**.
- The **entry point of the cycle** is the duplicate number.

---

### 🔹 Algorithm Steps

1. **Phase 1: Find Intersection Point**
   - Initialize two pointers:
     - `slow` → moves one step at a time.
     - `fast` → moves two steps at a time.
   - Move them until they meet inside the cycle.

<br>

2. **Phase 2: Find Entrance to Cycle**
   - Reset `slow` to the start (index 0).
   - Move both `slow` and `fast` one step at a time.
   - The node where they meet is the **duplicate number**.

---

## Dry Run Example

### Input:
nums = [1, 3, 4, 2, 2]

### Visualization:
Index: 0 → 1 → 3 → 2 → 4
Value: 1 3 2 4 2
- From index `0` we go to `1`,  
- From `1` we go to `3`,  
- From `3` we go to `2`,  
- From `2` we go to `4`,  
- From `4` we go back to `2`.  

This forms a **cycle at node 2** → hence duplicate = `2`.

---


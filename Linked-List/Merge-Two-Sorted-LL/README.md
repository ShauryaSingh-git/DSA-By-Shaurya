# Merge Two Sorted Linked Lists
[View Problem No-21](https://leetcode.com/problems/merge-two-sorted-lists/)

Difficulty:Easy-Medium

---
## Problem Statement

You are given two sorted linked lists `list1` and `list2`.  
The task is to **merge the two lists into a single sorted linked list** and return its head.

---

## Approach

### 1. Handle Edge Cases
- If one of the lists is empty, return the other one directly.

### 2. Initialization
- Compare the first nodes of both lists.
- Select the smaller value as the head of the new merged list.
- Move the pointer of the list whose value was chosen.

### 3. Merge Process
- Traverse both lists simultaneously.
- Compare the current nodes of both lists:
  - Attach the smaller node to the tail of the new list.
  - Move the pointer of that list ahead.
- Move the tail pointer to the newly added node.

### 4. Remaining Nodes
- If one list becomes empty while the other still has nodes,  
  **attach all remaining nodes** of that list to the tail.

### 5. Return Result
- Return the head of the newly merged sorted linked list.

---

## Visual Representation (Dry Run)

**Input Lists:**
list1: 1 → 2 → 4

list2: 1 → 3 → 4


**Merging Process:**
1. Compare `1 (list1)` and `1 (list2)` → Choose `1`  
   Result: `1`

2. Compare `2 (list1)` and `1 (list2)` → Choose `1`  
   Result: `1 → 1`

3. Compare `2 (list1)` and `3 (list2)` → Choose `2`  
   Result: `1 → 1 → 2`

4. Compare `4 (list1)` and `3 (list2)` → Choose `3`  
   Result: `1 → 1 → 2 → 3`

5. Compare `4 (list1)` and `4 (list2)` → Choose `4 (from list1)`  
   Result: `1 → 1 → 2 → 3 → 4`

6. `list1` empty, append remaining `list2 (4)`  
   Result: `1 → 1 → 2 → 3 → 4 → 4`

---

## Input (from main function)

list1: 1 → 2 → 4

list2: 1 → 3 → 4

---
## Output

1 1 2 3 4 4

---

## 📊 Optional Diagram Representation

list1: 1 → 2 → 4
list2: 1 → 3 → 4

Merged:

Head → [1] → [1] → [2] → [3] → [4] → [4]

---
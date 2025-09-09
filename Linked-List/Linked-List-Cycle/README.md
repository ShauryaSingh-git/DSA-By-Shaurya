# 🔁 Linked List Cycle Detection 

[View Problem No-141](https://leetcode.com/problems/linked-list-cycle/description/)

Difficulty-Medium

---

This Section implements **Cycle Detection in a Linked List** using the **Floyd’s Cycle Detection Algorithm (Tortoise and Hare method)**.  
The goal is to detect if a given singly linked list has a cycle.

---

## 📌 Approach

1. **Two Pointers (Tortoise & Hare)**
   - Use two pointers:
     - `temp2` → slow pointer (moves **1 step** at a time).
     - `temp` → fast pointer (moves **2 steps** at a time).
   
2. **Cycle Detection**
   - If there is a cycle, the **fast pointer** will eventually meet the **slow pointer**.  
   - If the fast pointer reaches `NULL`, it means no cycle exists.

3. **Return Result**
   - If pointers meet → cycle exists (`true`).  
   - Otherwise → no cycle (`false`).  

---

## 🛠 Functions Explained

### **bool hasCycle(ListNode* head)**
- Takes the head of the linked list as input.
- Returns `true` if a cycle is detected, otherwise `false`.

---

## 🧪 Example Run

### Input (with cycle):
3 → 2 →  0 → -4
    ↑         ↓
    └─────────┘

### Output:

Cycle detected!
---

## ✅ Dry Run (with cycle)

- `temp2` at `3`, `temp` at `3`.  
- Move:
  - `temp2` → `2`  
  - `temp` → `0`  
- Move:
  - `temp2` → `0`  
  - `temp` → `2`  
- Move:
  - `temp2` → `-4`  
  - `temp` → `-4`  
- Both meet → **Cycle detected!**

---

## ⚡ Complexity Analysis
- **Time Complexity** → `O(n)` (each pointer traverses list)  
- **Space Complexity** → `O(1)` (no extra space used)  

---

## 📄 Sample Code Output

Cycle detected!

---

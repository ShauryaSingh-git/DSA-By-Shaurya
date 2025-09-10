# 🔄 Reverse a Linked List (C++)

[View Problem No-206](https://leetcode.com/problems/reverse-linked-list/description/)

Difficulty-Easy

This Section demonstrates how to **reverse a singly linked list** using the **iterative method**.

---

## 📌 Approach

1. Use **three pointers**:
   - `prev` → Initially `NULL`, will trail behind current.
   - `current` → Starts at `head`, points to the node being processed.
   - `next_temp` → Stores `current->next` so the original link is not lost.

2. For each node:
   - Save the next node in `next_temp`.
   - Reverse the link → `current->next = prev`.
   - Move `prev` forward → `prev = current`.
   - Move `current` forward → `current = next_temp`.

3. When `current` becomes `NULL`, `prev` will be the **new head**.

---

## 🛠 Functions Explained

### **ListNode* reverseList(ListNode* head)**
- Input → head of linked list.  
- Reverses the list **in-place** (without extra memory).  
- Returns the **new head** of the reversed linked list.  

### **void printList(ListNode* head)**
- Helper function to print list values sequentially.  

---

## 🧪 Example Run

### Input:
Original List: 1 → 2 → 3 → 4 → 5

### Output:
Reversed List: 5 → 4 → 3 → 2 → 1

---

## ✅ Dry Run

### Initial State:
prev = NULL
current = 1

### Iteration Steps:
1. Save next: `next_temp = 2`  
   Reverse: `1 -> NULL`  
   Move pointers → `prev = 1`, `current = 2`

2. Save next: `next_temp = 3`  
   Reverse: `2 -> 1`  
   Move pointers → `prev = 2`, `current = 3`

3. Save next: `next_temp = 4`  
   Reverse: `3 -> 2`  
   Move pointers → `prev = 3`, `current = 4`

4. Save next: `next_temp = 5`  
   Reverse: `4 -> 3`  
   Move pointers → `prev = 4`, `current = 5`

5. Save next: `next_temp = NULL`  
   Reverse: `5 -> 4`  
   Move pointers → `prev = 5`, `current = NULL`

### Final:
`prev = 5 (new head)`

---

## ⚡ Complexity Analysis
- **Time Complexity** → `O(n)` (one pass through list).  
- **Space Complexity** → `O(1)` (in-place reversal).  

---

## 📄 Sample Code Output
Original List: 1 2 3 4 5
Reversed List: 5 4 3 2 1

---

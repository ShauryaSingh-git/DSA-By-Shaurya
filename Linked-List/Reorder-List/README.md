# 🔄 Reorder List (Linked List) 
[View Problem No-143](https://leetcode.com/problems/reorder-list/description/)

Difficulty-Medium

---

This Section implements the **Reorder List** problem in C++ using a linked list.  
The task is to reorder a singly linked list in the following pattern:  

L0 → L1 → … → Ln-1 → Ln

becomes:

L0 → Ln → L1 → Ln-1 → L2 → Ln-2 → …

---

## 📌 Approach

1. **Count the nodes**  
   Traverse the linked list to find the total number of nodes.  

2. **Find the middle**  
   Calculate the middle index of the list → this helps split the list into two halves.  

3. **Reverse the second half**  
   Use a **stack** to reverse the nodes from the second half of the list.  

4. **Reorder the list**  
   Alternately merge nodes from:
   - First half (original order)  
   - Second half (reversed order using stack)  

5. **Terminate the list**  
   Ensure the last node points to `NULL` to avoid cycles.  

---

## 🛠 Functions Explained

### **1. reorderList(ListNode* head)**
- Handles the entire reordering process:
  - Counts nodes  
  - Splits the list into two halves  
  - Reverses the second half using a stack  
  - Merges both halves alternately  

---

## 🧪 Example Run

### Input:
1 → 2 → 3 → 4 → 5

### Output:
1 → 5 → 2 → 4 → 3

---

## ✅ Dry Run

- Step 1: Count nodes = 5  
- Step 2: Middle = 2 (0-based index) → split into  
  - First half = `1 → 2`  
  - Second half = `3 → 4 → 5`  
- Step 3: Push `3, 4, 5` into stack → reversed order available  
- Step 4: Merge alternately:  
  - Take `1`, then `5`  
  - Take `2`, then `4`  
  - Finally take `3`  
- Step 5: Final reordered list:  
1 → 5 → 2 → 4 → 3

---

## ⚡ Complexity Analysis
- **Time Complexity** → `O(n)` (traverse + stack push + merge)  
- **Space Complexity** → `O(n/2)` = `O(n)` (extra stack storage)  

---

## 📄 Sample Code Output
1 5 2 4 3
---

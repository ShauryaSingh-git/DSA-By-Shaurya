# Remove Nth Node From End of List (LeetCode 19)

[LeetCode Problem 19: Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/?utm_source=chatgpt.com)

difficulty-Medium-Hard

---
## 📌 Problem Statement
Given the `head` of a linked list, remove the `n`-th node from the end of the list and return its head.

---

### Example 1:
**Input:**  
head = [1,2,3,4,5], n = 2



**Output:**  
[1,2,3,5]

---

**Explanation:**  
- The linked list is: 1 → 2 → 3 → 4 → 5  
- Removing the 2nd node from the end removes **node 4**.  
- The updated list is: 1 → 2 → 3 → 5  

---

## 💡 Approach
- Use **two pointers** (`pointer1` and `pointer2`).  
- Move `pointer1` to the end while keeping track of distance from `pointer2`.  
- Once the gap equals `n`, start moving both simultaneously.  
- When `pointer1` reaches the end, `pointer2` will be at the `n`-th node from the end.  
- Handle edge cases where the node to be removed is the **head itself**.  

---
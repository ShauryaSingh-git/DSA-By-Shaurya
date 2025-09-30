# 🗑️ Remove Linked List Elements (LeetCode 203)
[View Problem No-203](https://leetcode.com/problems/remove-linked-list-elements/)
Difficulty: Easy-Medium

---

## 📌 Problem Statement

Given the `head` of a linked list and an integer `val`, **remove all the nodes of the linked list that have `Node.val == val`**, and return the new head.

---

### Example

**Input:**
head = [1,2,6,3,4,5,6], val = 6

**Output:**
[1,2,3,4,5]

---

## 💡 Approach

- Use **recursion** to traverse the linked list.
- For each node:
  - Recursively process the next node.
  - If the current node's value equals `val`, remove it by returning the next node.
  - Otherwise, keep the current node and link it to the processed next node.

---

## 🛠️ Functions Explained

### `ListNode* removeElements(ListNode* head, int val)`
- **Input:** Head of the linked list, value to remove.
- **Output:** Head of the modified linked list.
- **Logic:**  
  - Base case: If `head` is `NULL`, return `NULL`.
  - Recursively process `head->next`.
  - If `head->val == val`, delete the node and return the next node.
  - Otherwise, return the current node.

---

## 🧪 Example Run

### Input:
head = [1,2,6,3,4,5,6], val = 6

### Output:
[1,2,3,4,5]

### Execution Steps:
1. Start with the head of the list: `1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6`
2. The first node's value is not `6`, keep it: `1`
3. Move to the next node, value is `2`, keep it: `1 -> 2`
4. Next node is `6`, remove it, link previous node `2` to `3`: `1 -> 2 -> 3`
5. Continue this process until the end of the list.
6. Return the new head of the list: `1 -> 2 -> 3 -> 4 -> 5`
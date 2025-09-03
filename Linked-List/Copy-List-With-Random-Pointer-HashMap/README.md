# 🧩 Copy List with Random Pointer (LeetCode 138)
 [View Problem on LeetCode](https://leetcode.com/problems/copy-list-with-random-pointer/)
 
Difficulty-Hard

---
## 📌 Problem Statement
You are given a linked list where each node contains:
- An integer `val`
- A pointer `next` to the next node
- A pointer `random` that can point to **any node** in the list (or `null`).

Your task is to return a **deep copy** of the list.  
A *deep copy* means the new list is completely independent of the original, and no pointers should point back to the old list.

---

## 💡 Example

### Input:
Node A (val=7) → Node B (val=13) → Node C (val=11)
A.random = null
B.random = A
C.random = B

### Output (deep copy):
Node A' (val=7) → Node B' (val=13) → Node C' (val=11)
A'.random = null
B'.random = A'
C'.random = B'

---

## 🛠️ Approach (HashMap Solution)

We use a **hash map** to maintain the mapping between original nodes and their corresponding cloned nodes:

1. **First traversal** → create a copy of each node (with only `val`), and store mapping:

2. **Second traversal** → connect the `next` and `random` pointers of the copied nodes using the hash map:
- `copied->next   = mp[original->next]`
- `copied->random = mp[original->random]`

This ensures all random pointers are correctly redirected to the new nodes.

---

## ⏱️ Complexity
- **Time Complexity**: `O(N)` – we traverse the list twice.  
- **Space Complexity**: `O(N)+O(N)=O(2N)` – hashmap stores `N` mappings, And Copy-List stores `N` Nodes. 

---
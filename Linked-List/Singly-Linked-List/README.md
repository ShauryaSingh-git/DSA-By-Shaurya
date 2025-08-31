# Singly Linked List Implementation in C++

## 📌 Problem Statement
Implement a **singly linked list** in C++ with the following operations:

- Insert at **head**  
- Insert at **tail**  
- Insert at a **middle position**  
- **Delete** a node from a given position  
- **Traverse** and print the list  
- **Access** a single element at a given position  
- **Count** total nodes in the list  

---

## 💡 Approach (Function-wise Explanation)

### 🔹 `InsertionAtHead`
- Create a new node.  
- Point its `next` to the current head.  
- Move the head pointer to this new node.  
- **Time Complexity:** O(1)

---

### 🔹 `InsertionAtTail`
- Create a new node.  
- Attach it to the `next` of the current tail.  
- Move the tail pointer to this new node.  
- **Time Complexity:** O(1)

---

### 🔹 `InsertionAtMiddle`
- Traverse the list until reaching the `(position-1)`th node.  
- Create a new node and link it between `(position-1)`th node and `(position)`th node.  
- Special cases:  
  - If `position == 1`, call `InsertionAtHead`.  
  - If inserting at the end, call `InsertionAtTail`.  
- **Time Complexity:** O(n) (because of traversal)

---

### 🔹 `Deletion`
- If deleting the **head** (position == 1), just move head to `head->next`.  
- Otherwise, traverse until reaching the node to be deleted.  
- Keep track of the **previous node** to reconnect the list.  
- Free the memory of the deleted node.  
- **Time Complexity:** O(n)

---

### 🔹 `TransverseAsingleElement`
- Traverse the list node by node until reaching the required position.  
- Return the `data` of that node.  
- **Time Complexity:** O(n)

---

### 🔹 `Print`
- Start from `head`.  
- Traverse the list until `NULL`.  
- Print each node’s `data`.  
- **Time Complexity:** O(n)

---

### 🔹 `Counter`
- Initialize `count = 0`.  
- Traverse through the list, incrementing `count` at each node.  
- Return the total count.  
- **Time Complexity:** O(n)

---
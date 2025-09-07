# 🚀 Design Circular Queue (Linked List)
[View Problem No-622](https://leetcode.com/problems/design-circular-queue/description/)

Difficulty-Medium

---
This Code implements a **Circular Queue** using a **linked list** in C++.  
The queue supports the following operations:

- **enQueue()** → Insert an element into the circular queue  
- **deQueue()** → Delete an element from the circular queue  
- **Front()** → Get the front element  
- **Rear()** → Get the last element  
- **isEmpty()** → Check if the queue is empty  
- **isFull()** → Check if the queue is full  

---

## 📌 Approach

- Instead of using an array, the queue is implemented using a **circular linked list**.  
- Each node contains a `val` and a pointer to the `next` node.  
- The **tail node points back to the head** to maintain the circular property.  
- The queue keeps track of:
  - `capacity` → maximum number of elements allowed  
  - `size` → current number of elements  

---

## 🛠 Functions Explained

### 1. **Constructor → `MyCircularQueue(int k)`**
- Initializes the circular queue with capacity `k`.  
- Sets `head` and `tail` as `nullptr` (empty queue).  

---

### 2. **enQueue(int value)**
- Inserts a value into the circular queue.  
- If queue is full → return `false`.  
- If queue is empty → create first node, set `head` and `tail` to it.  
- Otherwise → add new node at `tail` and connect it back to `head`.  

---

### 3. **deQueue()**
- Deletes the front element from the circular queue.  
- If queue is empty → return `false`.  
- If only one element → set `head` and `tail` to `nullptr`.  
- Otherwise → move `head` to the next node and reconnect `tail->next = head`.  

---

### 4. **Front()**
- Returns the value at the **front (head)**.  
- If queue is empty → return `-1`.  

---

### 5. **Rear()**
- Returns the value at the **rear (tail)**.  
- If queue is empty → return `-1`.  

---

### 6. **isEmpty()**
- Returns `true` if size = 0.  

---

### 7. **isFull()**
- Returns `true` if size = capacity.  

---

## 🧪 Example Run

```cpp
MyCircularQueue* obj = new MyCircularQueue(3);

obj->enQueue(1);   // true
obj->enQueue(2);   // true
obj->enQueue(3);   // true
obj->enQueue(4);   // false (queue full)

obj->Rear();       // 3
obj->isFull();     // true

obj->deQueue();    // true
obj->enQueue(4);   // true
obj->Rear();   // 4
```
## Sample Output

- enQueue(1) → true 
- enQueue(2) → true
- enQueue(3) → true
- enQueue(4) → false
- Rear() → 3
- isFull() → true
- deQueue() → true
- enQueue(4) → true
- Rear() → 4
---

## ⚡ Complexity Analysis

- Time Complexity → O(1) for all operations (insertion, deletion, access).

- Space Complexity → O(k) (extra space for k nodes).
---
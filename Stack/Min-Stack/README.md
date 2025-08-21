# Min Stack (LeetCode #155)

**Difficulty:** Medium  
[View the problem on LeetCode](https://leetcode.com/problems/min-stack/)

---

## 📝 Problem Statement

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the `MinStack` class:
- `MinStack()` initializes the stack object.
- `void push(int val)` pushes the element val onto the stack.
- `void pop()` removes the element on the top of the stack.
- `int top()` gets the top element of the stack.
- `int getMin()` retrieves the minimum element in the stack.

---

## 💡 Approach

This solution uses **two stacks**:
- The main stack (`s1`) stores all elements.
- The auxiliary stack (`s2`) keeps track of the minimum element at each level.

### Steps:

1. **Push Operation:**  
   - Push the value onto the main stack.
   - If the auxiliary stack is empty or the new value is less than or equal to the current minimum, also push it onto the auxiliary stack.

2. **Pop Operation:**  
   - If the top of the main stack is equal to the top of the auxiliary stack, pop from both stacks.
   - Otherwise, pop only from the main stack.

3. **Top Operation:**  
   - Return the top element of the main stack.

4. **GetMin Operation:**  
   - Return the top element of the auxiliary stack, which is always the minimum.

---

## 🔎 Visual Representation

Suppose we perform the following operations:

- `push(1)`  
  - s1: [1]  
  - s2: [1]  
- `push(2)`  
  - s1: [1, 2]  
  - s2: [1]  
- `getMin()` → 1  
- `pop()`  
  - s1: [1]  
  - s2: [1]  
- `getMin()` → 1

---


## 📊 Complexity Analysis

- **Time Complexity:** O(1) for all operations (`push`, `pop`, `top`, `getMin`)
- **Space Complexity:** O(n) for storing elements in two stacks

---

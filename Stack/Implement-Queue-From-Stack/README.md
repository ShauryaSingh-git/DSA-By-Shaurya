# Implement Queue using Stacks in C++

**LeetCode Problem #232: Implement Queue using Stacks**  
**Difficulty:** Easy

[View the problem on LeetCode](https://leetcode.com/problems/implement-queue-using-stacks/)

---

## 📝 Problem Statement

Implement a queue using stacks. The implemented queue should support all the functions of a normal queue (`push`, `pop`, `peek`, and `empty`).

---

## 💡 Algorithm Explanation

The main idea is to use two stacks to reverse the order of elements so that the oldest element can be accessed first, simulating queue behavior.

### Operations:

- **push(x):**  
  Push the element onto the first stack.

- **pop():**  
  Move all elements from the first stack to the second stack, pop the top element from the second stack (which is the front of the queue), then move the elements back to the first stack.

- **peek():**  
  Move all elements from the first stack to the second stack, get the top element from the second stack (front of the queue), then move the elements back to the first stack.

- **empty():**  
  Return true if the first stack is empty.


---

## 📊 Complexity Analysis

- **Time Complexity:**  
  - `push(x)`: O(1)  
  - `pop()`: O(n)  
  - `peek()`: O(n)  
  - `empty()`: O(1)  
  (where n is the number of elements in the queue)

- **Space Complexity:** O(n)  
  (for storing the elements in the two stacks)

---


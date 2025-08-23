# Asteroid Collision (LeetCode #735)

**Difficulty:** Medium  
[View the problem on LeetCode](https://leetcode.com/problems/asteroid-collision/)

---

## 📝 Problem Statement

We are given an array `asteroids` of integers representing asteroids in a row.  
- Each asteroid moves at the same speed.
- Each value represents the size and direction: positive for right, negative for left.
- When two asteroids meet, the smaller one explodes. If they are the same size, both explode.
- Two asteroids moving in the same direction never meet.

Return the state of the asteroids after all collisions.

---

## 💡 Approach

This solution uses a **stack** to simulate the collisions:

### Steps:

1. **Iterate through the asteroids:**
   - If the stack is empty or the current asteroid is moving right (`> 0`), push it onto the stack.
   - If the current asteroid is moving left (`< 0`), check for collisions:
     - While the stack is not empty and the top of the stack is a right-moving asteroid (`> 0`), compare sizes:
       - If the right-moving asteroid is smaller, pop it and continue checking.
       - If both are the same size, pop the right-moving asteroid and do not push the current one.
       - If the right-moving asteroid is larger, the current one is destroyed.
   - If the current asteroid survives all collisions, push it onto the stack.

2. **Collect the result:**
   - The stack contains the surviving asteroids in reverse order, so reverse it before returning.

---

## 🔎 Visual Representation

Suppose `asteroids = [5, 10, -5]`

| Stack State | Current | Action/Collision                |
|-------------|---------|---------------------------------|
| []          | 5       | Push 5                          |
| [5]         | 10      | Push 10                         |
| [5, 10]     | -5      | 10 > 5, 10 > 5, so -5 destroyed |

**Final State:** `[5, 10]`

---


## 📊 Complexity Analysis

- **Time Complexity:** O(n)  
  (Each asteroid is pushed and popped at most once.)
- **Space Complexity:** O(n)  
  (For the stack and result vector.)

---


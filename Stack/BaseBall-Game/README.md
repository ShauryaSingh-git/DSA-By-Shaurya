# 682. Baseball Game ⚾

**OUR SCORE**- Easy

This file contains a C++ solution for LeetCode problem #682, "Baseball Game".

The problem asks us to calculate the total score after performing a series of operations. We are given a list of strings, where each string can be an integer (a score), or one of four special operation symbols: "+", "D", or "C".

---

## Method: Stack Simulation

The most intuitive way to solve this problem is to simulate the game round by round using a stack data structure. A `vector` can effectively serve as our stack.

We iterate through the list of operations and perform the following actions:

* **If the operation is an integer:** We convert the string to an integer and **push** it onto our stack.
* **If the operation is `+`:** We look at the last two scores on the stack, sum them up, and **push** the result onto the stack.
* **If the operation is `D`:** We look at the last score on the stack, double it, and **push** the result onto the stack.
* **If the operation is `C`:** This invalidates the previous score, so we simply **pop** the last element from the stack.

The final answer is the sum of all the numbers remaining in the stack after all operations have been processed. The provided code efficiently keeps a running total (`ans`) as it processes each operation.

---

## Complexity Analysis

* **Time Complexity:** $O(N)$
    -   We iterate through the list of `N` operations just once. Each stack operation (`push_back`, `pop_back`, `back`) takes constant time on average.

* **Space Complexity:** $O(N)$
    -   In the worst-case scenario (e.g., a list with no "C" operations), the stack could grow to hold a score for each of the `N` operations.

---


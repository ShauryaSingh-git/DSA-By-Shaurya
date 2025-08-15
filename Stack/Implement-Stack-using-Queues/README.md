# LeetCode 225: Implement Stack using Queues
**OUR SCORE**- Easy

---

## Question

Implement a last-in-first-out (LIFO) stack using only two queues. The implemented stack should support all the functions of a normal stack (`push`, `pop`, `top`, and `empty`).

**Note:**  
You must use only standard queue operations—i.e., only `push to back`, `peek/pop from front`, `size`, and `is empty` operations are valid.

---

## Example

**Input:**  
["MyStack", "push", "push", "top", "pop", "empty"]  
[[], [1], [2], [], [], []]

**Output:**  
[null, null, null, 2, 2, false]

**Explanation:**  
`MyStack` myStack = new MyStack();`  
`myStack.push(1);`  
`myStack.push(2);`  
`myStack.top(); // returns 2`  
`myStack.pop(); // returns 2`  
`myStack.empty(); // returns false`

---

## Approach

This solution implements a stack's Last-In, First-Out (LIFO) behavior using a single **queue**, which naturally operates in a First-In, First-Out (FIFO) manner. The key is to manipulate the queue during the `push` operation to ensure the most recently added element is always at the front. This is often called the "push-heavy" or "making push costly" method.

1.  **`push(int x)` Operation:**
    * The new element `x` is added to the back of the queue as usual.
    * Immediately after, the queue is "rotated." We loop `n-1` times, where `n` is the new size of the queue.
    * In each iteration of the loop, the element at the front of the queue is moved to the back.
    * This process effectively brings the newly added element `x` to the front of the queue, while all pre-existing elements are placed behind it, maintaining their relative order.

2.  **`pop()` Operation:**
    * Since the `push` operation ensures the "top" of the stack is always at the front of the queue, `pop()` is straightforward.
    * We simply retrieve and remove the element from the front of the queue.

3.  **`top()` Operation:**
    * Similar to `pop()`, this operation is simple. It returns the element currently at the front of the queue without removing it.

4.  **`empty()` Operation:**
    * The stack is empty if and only if the underlying queue is empty. This operation directly checks the state of the queue.

---

## Complexity Analysis

### Time Complexity

The time complexity varies for different operations:

* **`push(int x)`: O(n)**
    The dominant part of this operation is the loop that rotates the queue. Since we move `n-1` elements from the front to the back, the time complexity is **linear** with respect to the number of elements `n` in the stack.

* **`pop()`: O(1)**
    This involves a single `front()` and `pop()` operation on the queue, which takes **constant time**.

* **`top()`: O(1)**
    This involves a single `front()` operation on the queue, which also takes **constant time**.

* **`empty()`: O(1)**
    Checking if the queue is empty is a **constant time** operation.
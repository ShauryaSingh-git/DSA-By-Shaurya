# Add Two Numbers (Linked List) ➕🔗
[View Problem No-2](https://leetcode.com/problems/add-two-numbers/)

Difficulty-Medium

## Problem Statement
You are given two **non-empty linked lists** representing two non-negative integers.  
The digits are stored in **reverse order**, and each node contains a single digit.  

Add the two numbers and return the sum as a linked list.  
You may assume the two numbers do not contain any leading zeros, except the number `0` itself.

---

## Approach 🚀
We simulate the process of addition, digit by digit, just like how we do it manually on paper.

### Steps:
1. Initialize:
   - A variable `carry = 0`.
   - A new linked list `answer` to store the result.
2. Traverse both linked lists (`l1` and `l2`) node by node:
   - Compute `sum = l1->val + l2->val + carry`.
   - Store `(sum % 10)` in the new node.
   - Update `carry = sum / 10`.
3. If one list is longer than the other, continue adding remaining digits with `carry`.
4. If after finishing both lists `carry != 0`, add a final node with value `carry`.
5. Return the head of the resultant linked list.

⏱️ **Time Complexity**: `O(max(m, n))`  
📦 **Space Complexity**: `O(max(m, n))` (new linked list for result)  

---

## Dry Run Example 📝
Input:  
l1 = [2 -> 4 -> 3] (represents 342)

l2 = [5 -> 6 -> 4] (represents 465)

| Step | l1 | l2 | Carry | Sum = l1+l2+carry | Node Value | Result List |
|------|----|----|-------|--------------------|------------|--------------|
| 1    | 2  | 5  | 0     | 7                  | 7          | [7]          |
| 2    | 4  | 6  | 0     | 10                 | 0          | [7 → 0]      |
| 3    | 3  | 4  | 1     | 8                  | 8          | [7 → 0 →8]  |

Final Result:  
`[7 → 0 → 8]` → represents **807** (342 + 465).

---



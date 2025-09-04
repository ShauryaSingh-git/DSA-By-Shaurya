# Evaluate Reverse Polish Notation (RPN) 🔢
[View Problem No-150](https://leetcode.com/problems/evaluate-reverse-polish-notation/description/)

Difficulty-Medium
## Problem Statement
You are given an array of strings `tokens` that represent an arithmetic expression in **Reverse Polish Notation (RPN)**.  
Evaluate the expression and return the result as an integer.  

**Valid Operators**: `+`, `-`, `*`, `/`  
**Valid Operands**: Integers (can be positive or negative).  

---

## Approach 🚀
We use a **stack** to evaluate the postfix expression.

### Steps:
1. Traverse through each token:
   - If it is a **number**, convert it to integer and push into the stack.
   - If it is an **operator**, pop the top two elements from the stack:
     - Perform the operation (using the order correctly).
     - Push the result back into the stack.
2. At the end, the stack will contain only one element → the final result.

⚠️ **Important Note on Order**:
- For `+` and `*`, order doesn’t matter (commutative).
- For `-` and `/`, order matters:  
  - `a - b` → where `a` is **second top** and `b` is **top** of stack.  
  - `a / b` → where `a` is **second top** and `b` is **top** of stack.

⏱️ **Time Complexity**: `O(n)`  
📦 **Space Complexity**: `O(n)`  

---

## Dry Run Example 📝
Input:  
`tokens = ["2","1","+","3","*"]`

| Step | Token | Action | Stack (Top → Bottom) |
|------|-------|--------|----------------------|
| 1    | "2"   | Push 2 | [2] |
| 2    | "1"   | Push 1 | [1,2] |
| 3    | "+"   | Pop (1,2) → 2+1=3 → Push 3 | [3] |
| 4    | "3"   | Push 3 | [3,3] |
| 5    | "*"   | Pop (3,3) → 3*3=9 → Push 9 | [9] |

Final Answer: `9`

---


# LeetCode 20: Valid Parentheses

This document provides a detailed explanation of the C++ solution for the "Valid Parentheses" problem.

---
## Complexity Analysis

### Time Complexity: O(n)

The time complexity is **linear** with respect to the length of the input string, `n`. This is because we iterate through the string exactly once, and each operation within the loop (pushing to the stack, popping from the stack, and checking the top element) takes constant time, O(1).

### Space Complexity: O(n)

The space complexity is also **linear** in the worst-case scenario. The space is determined by the number of elements stored in the stack. In the worst case, the input string could consist entirely of opening brackets (e.g., `"(((((((")`), which would all be pushed onto the stack. Therefore, the space required is proportional to the length of the string, `n`.

---

## Approach

The problem is solved using a **stack** data structure, which is ideal for handling cases that require a "Last-In, First-Out" (LIFO) logic. The core idea is to process the input string character by character and use the stack to keep track of the opening brackets encountered.

1.  **Iterate Through the String:** We loop through each character of the input string `s`.

2.  **Opening Brackets:** If the character is an opening bracket (`(`, `{`, or `[`), we push it onto the stack. This signifies that we have an unclosed bracket that needs a matching closing bracket later on.

3.  **Closing Brackets:** If the character is a closing bracket (`)`, `}`, or `]`), we check two conditions:
    * **Is the stack empty?** If the stack is empty, it means we have a closing bracket without a corresponding opening bracket. In this case, the string is invalid, and we return `false`.
    * **Does the bracket match?** If the stack is not empty, we check if the character at the top of the stack is the matching opening bracket for the current closing bracket.
        * If it matches (e.g., `(` and `)`), we `pop` the opening bracket from the stack, signifying that this pair is now correctly closed.
        * If it does not match, the string is invalid, and we return `false`.

4.  **Final Check:** After iterating through the entire string, we check if the stack is empty.
    * If the stack is **empty**, it means every opening bracket had a corresponding and correctly placed closing bracket. The string is valid, and we return `true`.
    * If the stack is **not empty**, it means there are unclosed opening brackets left over. The string is invalid, and we return `false`.

---


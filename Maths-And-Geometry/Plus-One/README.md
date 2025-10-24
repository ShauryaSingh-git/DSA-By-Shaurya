# Plus One

- [Problem No-66](https://leetcode.com/problems/plus-one/)
- **Difficulty:** Easy

## Problem Statement

Given a non-empty array of decimal digits representing a non-negative integer, increment the integer by one and return the resulting digits array. The most significant digit is at the head of the list. You may assume the integer does not contain leading zeros, except the number 0 itself.

## Detailed Approach

- Initialize carry = 1 (we add one).
- Iterate digits from least significant (end) to most significant (start):
  - sum = digits[i] + carry
  - digits[i] = sum % 10
  - carry = sum / 10
- After the loop, if carry == 1, insert 1 at the beginning of the array.
- Return the modified vector.

Edge cases:
- [0] -> [1]
- [9,9,9] -> [1,0,0,0]

## Visual Representation

```mermaid
flowchart TD
    A[Start] --> B[carry = 1, i = last index]
    B --> C{i >= 0?}
    C -- Yes --> D[sum = digits[i] + carry]
    D --> E[digits[i] = sum % 10]
    E --> F[carry = sum / 10]
    F --> G[i = i - 1]
    G --> C
    C -- No --> H{carry == 1?}
    H -- Yes --> I[insert 1 at start]
    H -- No --> J[Return digits]
```

## Complexity

- Time: O(n) — process each digit once.
- Space: O(1) extra (in-place), O(n) if insertion at front requires reallocation.

---

## Example

Input:
```
digits = [9, 9, 9]
```
Output:
```
[1, 0, 0, 0]
```

---
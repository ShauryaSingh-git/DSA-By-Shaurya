# ⚡ Subset XOR Sum — C++ Backtracking Solution

- [Problem No-1863](https://leetcode.com/problems/sum-of-all-subset-xor-totals/description/)
- Difficulty:Easy-Medium

---

## 📘 Problem Statement

Given an array of integers `nums`, you need to find the **sum of all XOR totals for every subset** of the array.

### Example:
Input: [1, 3]
Output: 6

**Explanation:**
All possible subsets and their XORs:
| Subset | XOR Value  |
|--------|------------|
| [1]    | 1          |
| [3]    | 3          |
| [1,3]  | 2          |
| []     | 0          |

Sum of all XORs = 1 + 3 + 2 + 0 = **6**

---

## 🧠 Approach

We use **Backtracking** to explore all subsets and calculate their XOR totals.

### Step-by-step logic:
1. Start with an initial XOR value of `0`.
2. For each element, choose to **include** or **exclude** it.
3. Every time we include an element, we compute the new XOR value.
4. Add this XOR value to the running total (`sum`).
5. Recursively explore further elements using the updated XOR value.
6. This ensures that all subset combinations are covered.

---

## 🌳 Visual Representation (Backtracking Tree)

### Here’s how the recursion explores all subsets visually:

**Initial: nums = [1, 3]**
**xor1 = 0, sum = 0**
```
               (start)
                 |
                 v
              include 1
              xor = 0 ^ 1 = 1
              sum += 1 → sum = 1
                 |
                 v
            include 3
            xor = 1 ^ 3 = 2
            sum += 2 → sum = 3
```
- Backtrack to include only 3:
    - xor = 0 ^ 3 = 3
    - sum += 3 → sum = 6

- Subsets explored:
  - [1] → XOR = 1  
  - [1,3] → XOR = 2  
  - [3] → XOR = 3  
  - [] → XOR = 0  (not added explicitly)

### The sum of all XOR totals for the subsets of [1, 3] is: 6

---

# LeetCode 344 – Reverse String

## 📝 Problem Statement
Write a function that reverses a string.  
The input string is given as an array of characters `s`.  
You must do this by modifying the input array **in-place** with O(1) extra memory.

### Example 1:
**Input:**  
`s = ["h","e","l","l","o"]`  
**Output:**  
`["o","l","l","e","h"]`

### Example 2:
**Input:**  
`s = ["H","a","n","n","a","h"]`  
**Output:**  
`["h","a","n","n","a","H"]`

---

## ⏱️ Time Complexity
- **O(n)** → We visit each character once.
  
---

## 💡 Logic Explanation
We use the **two-pointer technique**:
1. Initialize two pointers:  
   - `left` starting from index `0`  
   - `right` starting from the last index `n - 1`
2. Swap characters at `left` and `right`.
3. Move `left` forward and `right` backward until they meet.

This ensures the string is reversed **in-place** without extra memory.

---
## Visual representation

1. arr=      {H   E   L   L   O}
   Pointers=  i               j    (swap and move inwards) 
2. arr=      {O   E   L   L   H}
   Pointers=      i       j         (swap and move inwards)   
3. arr=      {O   L   L   O   H}
    and the middle l where i=j is same so we do not need to swap it as it is a single character.
---


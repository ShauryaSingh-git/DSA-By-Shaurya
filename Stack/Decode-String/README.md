# Decode String (LeetCode 394)

[LeetCode Problem 394: Decode String](https://leetcode.com/problems/decode-string/?utm_source=chatgpt.com)

Difficulty-Medium-Hard
---
## 📌 Problem Statement

Given an encoded string, return its decoded version.  
The encoding rule is: `k[encoded_string]`, where the `encoded_string` inside the square brackets is repeated exactly `k` times.  
Note: `k` is guaranteed to be a positive integer.

---

### Example 1:
**Input:**  
s = "3[a]2[bc]"

**Output:**  
"aaabcbc"


---

### Example 2:
**Input:**  
s = "3[a2[c]]"



**Output:**  
"accaccacc"


---
### Example 3:
**Input:**  
s = "2[abc]3[cd]ef"


**Output:**  
"abcabccdcdcdef"



---

## 💡 Approach


- Use **two stacks**:  
  - One for numbers (`numst`) to store repeat counts.  
  - One for strings (`stringst`) to store intermediate results.  
- Traverse the input string character by character:  
  - If a digit is found, build the number.  
  - On `'['`, push the current number and string into their respective stacks.  
  - On `']'`, pop values and expand the substring accordingly.  
  - Otherwise, keep adding characters to the current string.  
- Finally, return the decoded string.

---

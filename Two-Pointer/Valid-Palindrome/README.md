# LeetCode 680 – Valid Palindrome II

**OUR SCORE**-EASY-MEDIUM
## 📝 Problem Statement
Given a string `s`, return `true` if the string can be a palindrome after deleting **at most one character**.

A palindrome is a string that reads the same backward as forward.

**Example:**
nput: s = "abca"
Output: true
**Explanation**: Remove 'b' to make "aca", which is a palindrome.


---

## ⏳ Time Complexity
- **O(n)** — We traverse the string once, and at most do **two more traversals** when checking for palindrome in the helper function.

## 📦 Space Complexity
- **O(1)** — No extra data structures are used.

---

## 💡 Approach

### 1. Two Pointers
We use **two pointers**:
- `left` starts from the beginning of the string.
- `right` starts from the end.

### 2. Checking for Palindrome
- If `s[left] == s[right]`, move both pointers inward.(it means left+1,right-1){-> <-}
- If a mismatch is found:
  - Skip the character at `left` and check if the rest is a palindrome.(it means left+1, right)
  - Skip the character at `right` and check if the rest is a palindrome.(it means left, right-1)
- If **either** skipping left **or** right results in a palindrome, return `true`.

---


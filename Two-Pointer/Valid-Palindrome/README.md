# LeetCode 125 – Valid Palindrome
**OUR SCORE**- Easy
## 📝 Problem Statement
Given a string `s`, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

A palindrome is a word, phrase, or sequence that reads the same backward as forward, after ignoring spaces, punctuation, and letter case.

---

## ⏱ Time Complexity
- **O(n)** – We traverse the string once with two pointers.

## 📦 Space Complexity
- **O(1)** – Constant space used (no extra data structure).

---

### Example 1
**Input:**
s = "A man, a plan, a canal: Panama"= without spaces="Amanaplanacanal"
**Output:**
true ,as the reverse ="amanaplanacanal"
**Explanation:**
After removing non-alphanumeric characters and ignoring case, `amanaplanacanalpanama` is a palindrome.
### Example 2
**Input:**
s = "race a car"
**Output:**
false
**Explanation:**
After cleaning, `raceacar` is not the same as its reverse.

---

## 💡 Approach & Logic

1. **Two-pointer method**:
   - Use two pointers, `left` at the start and `right` at the end of the string.
   - Move pointers inward while skipping non-alphanumeric characters.
   - Compare lowercase versions of characters at both ends.
   - If all characters match, it is a palindrome.

2. **Character Filtering**:
   - Use `isalnum()` to check if a character is alphanumeric.
   - Use `isalpha()` to check the alphabet only.
   - Use `tolower()` to make comparison case-insensitive or the ascii code to change it manually.

---


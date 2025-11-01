# 43. Multiply Strings

- [Problem No-43 ](https://leetcode.com/problems/multiply-strings/)

- Difficulty: Medium

This program multiplies two numbers represented as strings without directly converting them to integers.

---

## Problem Description

Given two non-negative integers `num1` and `num2` represented as strings, return the product of `num1` and `num2`, also represented as a string.

Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.

---

## Algorithm / Implementation Notes

The solution uses the standard multiplication algorithm (like we do on paper):
1. Reverse both strings to make least significant digit at index 0
2. Create result array of size m + n (m, n are lengths of input strings)
3. For each digit pair:
   - Multiply digits and add to corresponding position
   - Handle carry in separate pass
4. Remove leading zeros
5. Build result string in correct order

Example multiplication process:
```
  123 × 456
= (3×6) + (3×5×10) + (3×4×100) +
  (2×6×10) + (2×5×100) + (2×4×1000) +
  (1×6×100) + (1×5×1000) + (1×4×10000)
```

---

## C++ Code- Leetcode

```cpp
class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int m = num1.size(); // length of num1
        int n = num2.size(); // length of num2

        // reverse to put least-significant digit at index 0
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        // m + n is enough space for the result digits
        vector<int> arr(m + n, 0);

        // Multiply digits: iterate according to each string's length
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                arr[i + j] += (num1[i] - '0') * (num2[j] - '0');
            }
        }

        // Propagate carry through the array
        for (int i = 0; i < (int)arr.size() - 1; ++i) {
            arr[i + 1] += arr[i] / 10;
            arr[i] %= 10;
        }

        // Remove leading zeros
        while (!arr.empty() && arr.back() == 0) arr.pop_back();

        // Build result string in correct order
        string ans;
        ans.reserve(arr.size());
        for (int i = (int)arr.size() - 1; i >= 0; --i) {
            ans.push_back(char('0' + arr[i]));
        }

        return ans;
    }
};
```

---

## Example

```
Input: num1 = "123", num2 = "456"
Output: "56088"
Explanation:
123 × 456 = 56088

Input: num1 = "2", num2 = "3"
Output: "6"
```

Sample run from the implementation:
```
Enter first number: 123
Enter second number: 456
The product of 123 and 456 is: 56088
```

---

## Time and Space Complexity

- Time Complexity: O(m * n), where m and n are lengths of input strings
- Space Complexity: O(m + n) for the result array

---

## Notes

- Handles numbers of any length (as long as memory permits)
- No integer overflow issues as numbers are processed digit by digit
- Special case for zero multiplication returns "0" immediately
- Removes leading zeros from the result
- Uses character to integer conversion with '0' subtraction

---
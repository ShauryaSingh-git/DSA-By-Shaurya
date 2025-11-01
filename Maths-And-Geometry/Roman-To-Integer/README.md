# 13. Roman to Integer

- [Problem No-13](https://leetcode.com/problems/roman-to-integer/)

- Difficulty: Easy

This program converts Roman numerals to integer values.

## Problem Description

Convert a Roman numeral string to an integer value. Roman numerals are represented by seven different symbols:

| Symbol | Value |
|--------|--------|
| I      | 1      |
| V      | 5      |
| X      | 10     |
| L      | 50     |
| C      | 100    |
| D      | 500    |
| M      | 1000   |

### Special Cases

Roman numerals are usually written largest to smallest from left to right. However, there are six instances where subtraction is used:

- `IV` = 4 (5 - 1)
- `IX` = 9 (10 - 1)
- `XL` = 40 (50 - 10)
- `XC` = 90 (100 - 10)
- `CD` = 400 (500 - 100)
- `CM` = 900 (1000 - 100)

## Algorithm

The solution uses a right-to-left traversal approach:

1. Start from the rightmost character
2. Keep track of the running sum
3. For each character:
   - If it's part of a subtraction case (like 'I' in "IV"), subtract its value
   - Otherwise, add its value to the sum

---
## C++ Code
```
class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='I'&& i!=s.length()-1 && s[i+1]!='V' && s[i+1]!='X')
            {
                ans=ans+1;
            }
            else if(s[i]=='I' && i!=s.length()-1 && s[i+1]=='V' )
            {
                ans=ans-1;
            }else if(s[i]=='I' && i!=s.length()-1 && s[i+1]=='X' )
            {
                ans=ans-1;
            }
            else if(s[i]=='D')
            {
                ans=ans+500;
            }
            else if(s[i]=='M')
            {
                ans=ans+1000;
            }
            else if(s[i]=='X'&& i!=s.length()-1 && s[i+1]!='L' && s[i+1]!='C')
            {
                ans=ans+10;
            }
            else if(s[i]=='X' && i!=s.length()-1 && s[i+1]=='C')
            {
                ans=ans-10;
            }
            else if(s[i]=='X' && i!=s.length()-1 && s[i+1]=='L')
            {
                ans=ans-10;
            }
            else if(s[i]=='C'&& i!=s.length()-1 && s[i+1]!='M' && s[i+1]!='D')
            {
                ans=ans+100;
            }
            else if(s[i]=='C' && i!=s.length()-1 && (s[i+1]=='D' || s[i+1]=='M'))
            {
                ans=ans-100;
            }
            else if(s[i]=='V')
            {
                ans=ans+5;
            }
            else if(s[i]=='L')
            {
                ans=ans+50;
            }
            else if(s[i]=='C')
            {
                ans=ans+100;
            }
            else if(s[i]=='I')
            {
                ans=ans+1;
            }
            else if(s[i]=='X')
            {
                ans=ans+10;
            }
            else if(s[i]=='C')
            {
                ans=ans+100;
            }
        }
        return ans;
    }
};
```
---

## Example

```
Input: MCMXCIV
Breakdown:
M = 1000
CM = 900 (1000 - 100)
XC = 90 (100 - 10)
IV = 4 (5 - 1)
Output: 1994
```

## Time Complexity

- Time Complexity: O(n), where n is the length of the input string
- Space Complexity: O(1), only constant extra space is used

## Implementation

The solution is implemented in C++ and uses conditional statements to handle all special cases of Roman numerals. The program processes the input string from right to left to correctly handle subtraction cases.

---
# Greatest Common Divisor of Strings

- [Problem No- 1071](https://leetcode.com/problems/greatest-common-divisor-of-strings/)
- **Difficulty:** Easy

## Problem Statement

For two strings `str1` and `str2`, return the longest string `x` such that `x` divides both `str1` and `str2`.

A string `x` divides a string `y` if `y` can be constructed by concatenating `x` one or more times.

For example:
- str1 = "ABAB", str2 = "AB" → "AB" (because "ABAB" = "AB" + "AB")
- str1 = "ABABAB", str2 = "ABAB" → "AB"
- str1 = "ABC", str2 = "DEF" → "" (no common divisor)

---

## Approach

The key insight is that a GCD string exists only if the concatenation of both strings in different orders produces the same result.

**Algorithm:**
1. Check if `str1 + str2 == str2 + str1`:
   - If not equal, no common divisor exists, return ""
   - If equal, a GCD string exists
2. Find the GCD of the lengths of both strings using the Euclidean algorithm
3. Extract the first `gcdlen` characters from either string (they will be identical)
4. Return the substring

**Why this works:**
- If `str1 + str2 == str2 + str1`, both strings are composed of the same repeating pattern
- The length of the GCD string must divide both string lengths
- The GCD of the lengths gives us the longest such divisor

---

## Implementation

```cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2==str2+str1)
        {
            int len1=str1.length();
            int len2=str2.length();
            int gcdlen=gcd(len1,len2);
            string ans=str2.substr(0,gcdlen);
            return ans;
        }
        return "";
    }
};

int main()
{
    Solution sol;
    string str1,str2;
    cout<<"Enter first string: ";
    cin>>str1;
    cout<<"Enter second string: ";
    cin>>str2;
    string result=sol.gcdOfStrings(str1,str2);
    if(result!="")
    {
        cout<<"The greatest common divisor of the two strings is: "<<result<<endl;
    }
    else
    {
        cout<<"There is no common divisor string for the given strings."<<endl;
    }
    return 0;
}
```

---

## Examples

| str1 | str2 | Output |
|------|------|--------|
| ABAB | AB | AB |
| ABABAB | ABAB | AB |
| ABC | DEF | (empty) |
| LMAO | LMAOLMAO | LMAO |

---

## Complexity

- **Time:** O(n + m), where n and m are the lengths of str1 and str2 (string concatenation and comparison is O(n + m), GCD computation is O(log(min(n, m))))
- **Space:** O(n + m) for the concatenated strings in the comparison

---

## Notes

- The concatenation check `str1 + str2 == str2 + str1` is the key: if this is true, both strings are built from the same repeating pattern
- Custom `gcd()` function uses Euclidean algorithm for compatibility with all C++ standards
- The GCD string is the first `gcdlen` characters of either string
- If no common divisor exists, return an empty string

---
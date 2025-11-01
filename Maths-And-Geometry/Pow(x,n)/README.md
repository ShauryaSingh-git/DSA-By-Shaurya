# 50. Pow(x, n)

- [Problem No-50 ](https://leetcode.com/problems/powx-n/)

- Difficulty: Medium

This program implements a function to calculate x raised to the power of n (x^n).

---

## Problem Description

Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).
- x can be any double value
- n can be positive, negative, or zero integer

---

## Algorithm / Implementation Notes

The solution uses fast exponentiation (binary exponentiation) approach:
1. Handle base cases:
   - If n == 0, return 1.0
   - If x == 1, return 1.0
2. Handle negative exponents:
   - If n < 0, convert x to 1/x and n to positive
3. Use binary exponentiation:
   - While n > 0:
     - If n is odd, multiply answer by x
     - Square x (x = x * x)
     - Divide n by 2

---

## C++ Code- Leetcode

```cpp
class Solution {
public:
    double myPow(double x, long int n) {
        double answer=1;
        if(n==0)return 1.0;
        if(x==1)return 1.0;
        if(n<0){
            x=(1.0)/x;
            n=-n;
        }
        while(n>0){
            if(n%2==1){
                answer*=x;
            }
            x*=x;
            n/=2;
        }
        return answer;
    }
};
```

---

## Example

```
Input: x = 2.00000, n = 10
Output: 1024.00000
Explanation: 2^10 = 1024

Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2^(-2) = (1/2)^2 = 1/4 = 0.25
```

---

## Time and Space Complexity

- Time Complexity: O(log n) - Binary exponentiation divides power by 2 in each step
- Space Complexity: O(1) - Only uses a constant amount of extra space

---

## Notes

- Uses `long int` for n to handle INT_MIN case
- Handles negative exponents by converting to positive and taking reciprocal of base
- Takes care of overflow by using intermediate results
- Special cases (x = 1, n = 0) are handled first for optimization

---

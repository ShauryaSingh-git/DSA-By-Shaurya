# 202. Happy Number

- [Problem No-202 ](https://leetcode.com/problems/happy-number/)

-  Difficulty: Easy

This program determines whether a number is a Happy Number.

## Problem Description

Write an algorithm to determine if a number `n` is happy.

A **happy number** is a number defined by the following process:
- Starting with any positive integer, replace the number by the sum of the squares of its digits.
- Repeat the process until the number equals 1 (where it will stay), or it enters a cycle which does not include 1.
- Those numbers for which this process ends in 1 are happy numbers.

## Algorithm

The solution uses a cycle detection approach with the following steps:

1. Initialize an unordered set to track seen numbers
2. For the given number:
   - Calculate sum of squares of its digits
   - If sum equals 1, return true (it's a happy number)
   - If sum has been seen before, return false (cycle detected)
   - Add sum to set of seen numbers
   - Repeat with the new sum

---

## C++ Code- Leetcode

```
class Solution {
public:
    bool isHappy(int n) {
        int ans=n;
        int i=0;
        unordered_set<int>m;
        while(n!=1 && m.find(n)==m.end())

        {
            m.insert(n);
            ans=0;
            do
            {
                ans=ans+pow(n%10,2);
                 i=n;
                n=n/10;
            }while(i/10!=0);
            n=ans;
            
        }
        if(ans==1)
        {
            return true;
        }
        return false;
    }
};
```
---

## Examples

Example 1:
```
Input: n = 19
Process: 
1² + 9² = 82
8² + 2² = 68
6² + 8² = 100
1² + 0² + 0² = 1
Output: true
Explanation: 19 is a happy number as the process ends in 1
```

Example 2:
```
Input: n = 2
Process: 
2² = 4
4² = 16
1² + 6² = 37
3² + 7² = 58
5² + 8² = 89
8² + 9² = 145
1² + 4² + 5² = 42
4² + 2² = 20
2² + 0² = 4 (cycle detected)
Output: false
Explanation: 2 is not a happy number as it enters a cycle
```

## Time and Space Complexity

- Time Complexity: O(log n) for calculating digits + O(k) where k is the number of iterations before finding 1 or a cycle
- Space Complexity: O(k) to store k numbers in the hash set

---

## Notes

1. All happy numbers eventually reach 1 through the process
2. Numbers that are not happy enter a cycle
3. The sequence for any positive integer will either end in 1 or enter a cycle
4. Common cycles include: 4 → 16 → 37 → 58 → 89 → 145 → 42 → 20 → 4

---
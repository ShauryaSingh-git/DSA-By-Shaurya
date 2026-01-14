# Excel Sheet Column Title

- [Problem No- 168](https://leetcode.com/problems/excel-sheet-column-title/)
- **Difficulty:** Easy

## Problem Statement

Given an integer `columnNumber`, return its corresponding column title as it appears in an Excel sheet.

For example:
- A → 1
- B → 2
- Z → 26
- AA → 27
- AB → 28
- ...
- ZZ → 702
- AAA → 703

## Approach

The key insight is that Excel column titles use a base-26 system, but with A-Z (not 0-25). This is a tricky conversion because:
- There's no "zero" digit (A starts at 1, not 0)
- We need to handle the offset by subtracting 1 before taking modulo and division

**Algorithm:**
1. While columnNumber is not 0:
   - Get the remainder: `(columnNumber - 1) % 26` (subtract 1 to handle 1-indexing)
   - Convert remainder to character: `'A' + remainder` (ASCII 65 is 'A')
   - Update columnNumber: `(columnNumber - 1) / 26`
   - Push character to result string
2. Reverse the result string (since we built it backwards)
3. Return the reversed string

---

## Implementation

```cpp

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string answer;
        int ans;
        while(columnNumber!=0)
        {   
            ans=(columnNumber-1)%26;
            columnNumber=(columnNumber-1)/26;
            answer.push_back(ans+65);
        }
        int left=0;
        int right=answer.size()-1;
        while(left<right)
        {
            swap(answer[left],answer[right]);
            left++;
            right--;
        }
        return answer;
    }
};

int main()
{
    Solution sol;
    int columnNumber;
    cout<<"Enter the column number: ";
    cin>>columnNumber;
    string result=sol.convertToTitle(columnNumber);
    cout<<"The corresponding Excel sheet column title is: "<<result<<endl;
    return 0;
}
```

---

## Examples

| Input | Output |
|-------|--------|
| 1 | A |
| 28 | AB |
| 701 | ZY |
| 702 | ZZ |
| 703 | AAA |

---

## Complexity

- **Time:** O(log₂₆ n) ≈ O(log n), where n is the column number
- **Space:** O(log₂₆ n) ≈ O(log n) for the result string

---

## Notes

- The key trick is subtracting 1 before modulo and division to handle 1-based indexing
- We reverse the string at the end because we build it backwards (remainders from least to most significant)
- This is similar to base conversion, but with a 1-indexed offset instead of 0-indexed

---
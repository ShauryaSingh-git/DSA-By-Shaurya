# Daily Temperatures Problem 🌡️
[View Problem No-739](https://leetcode.com/problems/daily-temperatures/description/)

Difficulty-Medium

---

## Problem Statement
Given a list of daily temperatures, return a list such that for each day, tells you how many days you would have to wait until a warmer temperature.  
If there is no future day for which this is possible, put `0` instead.

---

## Approach 🚀
- We use a **Monotonic Decreasing Stack** to solve this efficiently.
- **Stack stores indices** of days, not temperatures directly.
- Steps:
  1. Iterate through each day's temperature.
  2. While the current day's temperature is greater than the temperature at the index stored at the top of the stack:
     - Pop the index from the stack.
     - Calculate the number of days until a warmer temperature:  
       `answer[prevDay] = currentIndex - prevDay`.
  3. Push the current day's index into the stack.
  4. If no warmer day exists for some day, its answer remains `0`.

⏱️ **Time Complexity**: `O(n)` (each index pushed and popped at most once)  
📦 **Space Complexity**: `O(n)` (stack + answer array)

---

## Dry Run Example 📝
Input:  
`temperatures = [73, 74, 75, 71, 69, 72, 76, 73]`

| Day | Temp | Action | Stack (indices) | Answer (so far) |
|-----|------|--------|-----------------|-----------------|
| 0   | 73   | Push 0 | [0]             | [0,0,0,0,0,0,0,0] |
| 1   | 74   | Pop 0 → ans[0]=1, Push 1 | [1]             | [1,0,0,0,0,0,0,0] |
| 2   | 75   | Pop 1 → ans[1]=1, Push 2 | [2]             | [1,1,0,0,0,0,0,0] |
| 3   | 71   | Push 3 | [2,3]           | [1,1,0,0,0,0,0,0] |
| 4   | 69   | Push 4 | [2,3,4]         | [1,1,0,0,0,0,0,0] |
| 5   | 72   | Pop 4 → ans[4]=1, Pop 3 → ans[3]=2, Push 5 | [2,5] | [1,1,0,2,1,0,0,0] |
| 6   | 76   | Pop 5 → ans[5]=1, Pop 2 → ans[2]=4, Push 6 | [6] | [1,1,4,2,1,1,0,0] |
| 7   | 73   | Push 7 | [6,7]           | [1,1,4,2,1,1,0,0] |

Final Answer:  
`[1, 1, 4, 2, 1, 1, 0, 0]`

---
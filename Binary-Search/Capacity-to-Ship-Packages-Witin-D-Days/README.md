# Capacity To Ship Packages Within D Days (LeetCode Problem 1011)
- [LeetCode Problem No-1011](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/)

- Difficulty-Medium-Hard

This folder contains a C++ implementation for the "Capacity To Ship Packages Within D Days" problem using binary search.

## 📝 Problem Statement

A conveyor belt has packages that must be shipped from one port to another within `D` days. The `i`-th package on the conveyor belt has a weight of `weights[i]`. Each day, you load the ship with packages in the order given by `weights`. You may not load more weight than the ship's capacity. Return the least weight capacity of the ship that will result in all the packages being shipped within `D` days.



## 💡 Approach

- The minimum possible ship capacity is the maximum weight in the array (since every package must be shipped).
- The maximum possible ship capacity is the sum of all weights (ship everything in one day).
- Use binary search between these bounds to find the minimum capacity that allows shipping all packages within `D` days.
- For each candidate capacity, simulate the shipping process:
  - If the current package would exceed the capacity, increment the day counter and start a new day.
  - If the total days needed is less than or equal to `D`, try a smaller capacity.
  - If more days are needed, try a larger capacity.

## ✅ Example
### Input:
weights = [1,2,3,4,5,6,7,8,9,10], days = 5
### Output:
15
### Explanation:
A ship capacity of 15 is the minimum needed to ship all packages in 5 days.

## 🔍 Detailed Walkthrough

Let's consider the example with weights = [1,2,3,4,5,6,7,8,9,10] and D = 5 to illustrate the binary search process:

- Initial search space: [10, 55] (max weight is 10, sum is 55)

- Iteration 1:
  - mid = (10 + 55) / 2 = 32
  - Days needed at capacity 32: 3 (<= 5)
  - Try lower capacity: right = 31

- Iteration 2:
  - mid = (10 + 31) / 2 = 20
  - Days needed at capacity 20: 4 (<= 5)
  - Try lower capacity: right = 19

- Iteration 3:
  - mid = (10 + 19) / 2 = 14
  - Days needed at capacity 14: 6 (> 5)
  - Need higher capacity: left = 15

- Iteration 4:
  - mid = (15 + 19) / 2 = 17
  - Days needed at capacity 17: 5 (<= 5)
  - Try lower capacity: right = 16

- Iteration 5:
  - mid = (15 + 16) / 2 = 15
  - Days needed at capacity 15: 5 (<= 5)
  - Try lower capacity: right = 14

Now, left > right, so the answer is 15.


## 📈 Complexity
### Time Complexity:
 O(n * log S), where n is the number of packages and S is the sum of all weights.
### Space Complexity:
 O(1), as only a constant amount of extra space is used.

 ---
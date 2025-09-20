# Koko Eating Bananas (LeetCode Problem 875)
- [LeetCode Problem No-875](https://leetcode.com/problems/koko-eating-bananas/)
- Difficulty-Medium-Hard

This folder contains a C++ implementation for the "Koko Eating Bananas" problem using binary search.

## 📝 Problem Statement

Koko loves to eat bananas. There are `n` piles of bananas, the `i`-th pile has `piles[i]` bananas. The guards allow Koko to eat at most `h` hours. Each hour, she chooses a pile and eats up to `k` bananas from that pile. If the pile has less than `k` bananas, she eats all of them and won't eat any more bananas during that hour.

Return the minimum integer `k` such that she can eat all the bananas within `h` hours.



## 💡 Approach

- The problem is to find the minimum eating speed `k` such that Koko can finish all piles within `h` hours.
- Use binary search on the possible values of `k` (from 1 to the maximum pile size).
- For each candidate speed `mid`, calculate the total hours needed to eat all bananas at that speed.
- If the total hours is less than or equal to `h`, try a smaller speed.
- If the total hours is more than `h`, try a larger speed.
- The answer is the smallest `k` for which Koko can finish all bananas within `h` hours.

## ✅ Example
### Input:
piles = [3, 6, 7, 11], h = 8
### Output:
4

---

### Explanation:
At speed 4, Koko can eat all bananas in 8 hours:

3/4 = 1 hour (first pile)
6/4 = 2 hours (second pile)
7/4 = 2 hours (third pile)
11/4 = 3 hours (fourth pile)
Total = 1 + 2 + 2 + 3 = 8 hours

## 🧠 Visualization of the Approach

Initial search space: [1, 11] (since the largest pile is 11)

- Iteration 1:

    mid = (1 + 11) / 2 = 6
    Total hours needed at speed 6:

    `3/6=1`, `6/6=1`, `7/6=2`, `11/6=2`  => `1+1+2+2=6` hours `(<= 8)`
   
    Try lower speed: high = 5

---

- Iteration 2:

  mid = (1 + 5) / 2 = 3
 
    Total hours needed at speed 3:

    `3/3=1`, `6/3=2`, `7/3=3`, `11/3=4`  => `1+2+3+4=10` hours `(> 8)`
    
    Need higher speed: low = 4

---

- Iteration 3:

  mid = (4 + 5) / 2 = 4

  Total hours needed at speed 4:

    `3/4=1`, `6/4=2`, `7/4=2`, `11/4=3`  => `1+2+2+3=8` hours`(<= 8)`

    Try lower speed: high = 3

    Now, low > high, so the answer is 4.


## Table of Speeds and Hours


| Speed (k) | Hours Needed |
|-----------|--------------|
|     3     |     10       |
|     4     |      8       |
|     5     |      7       |
|     6     |      6       |
|    11     |      4       |

---

## 📈 Complexity
### Time Complexity:
 O(n * log m), where n is the number of piles and m is the maximum number of bananas in a pile.
### Space Complexity:
 O(1), as only a constant amount of extra space is used.

 ---

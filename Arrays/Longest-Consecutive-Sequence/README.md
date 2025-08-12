# 128. Longest Consecutive Sequence

This file breaks down the solution for LeetCode problem 128, "Longest Consecutive Sequence".
OUR SCORE- MEDIUM to LITTLE HARD
---

## ⚙️ Complexity Analysis

* **Time Complexity: `O(N log N)`**
    The performance bottleneck is building the `std::set`. Inserting `N` elements, where each insertion into the underlying balanced binary tree takes `O(log N)` time, results in a total time complexity of **`O(N log N)`**. The final loop to check the streak is only `O(N)` and doesn't change the overall result.

---

## 📝 Problem Description

Given an unsorted array of integers, `nums`, find the length of the longest consecutive elements sequence. The sequence elements don't need to be adjacent in the input array.

**Example:**

* **Input:** `nums = [100, 4, 200, 1, 3, 2]`
* **Output:** `4`
* **Explanation:** The longest consecutive sequence is `[1, 2, 3, 4]`. Its length is 4.

---

## 💡 Algorithm & Approach (Set-based)

This approach uses a `std::set` to simplify the problem. A C++ set automatically stores **unique** elements in **sorted order**, making it easy to find consecutive numbers.

1.  **Sanitize Input:** We load all numbers from the input `vector` into a `std::set`. This handles both sorting and removing duplicates in one step.
2.  **Handle Edge Case:** If the set is empty (meaning the input was empty), we immediately return `0`.
3.  **Iterate and Count:** We loop through the sorted numbers in the set, keeping track of the `currentStreak` and the `longestStreak` found so far.
    * If the current number is exactly one greater than the previous number, the sequence continues, so we increment `currentStreak`.
    * If the sequence is broken, we reset `currentStreak` back to `1`.
    * After checking each number, we update `longestStreak = max(longestStreak, currentStreak)`.

After the loop finishes, `longestStreak` holds the answer.

---


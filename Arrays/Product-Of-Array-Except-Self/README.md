# 238. Product of Array Except Self

OUR SCORE- MEDIUM

---

## 📜 Problem Statement

Given an integer array `nums`, return an array `answer` such that `answer[i]` is equal to the product of all the elements of `nums` except `nums[i]`.

You must write an algorithm that runs in $O(n)$ time and does not use the division operation.

---

## 💡 Examples

**Example 1:**

* **Input**: `nums = [1, 2, 3, 4]`
* **Output**: `[24, 12, 8, 6]`
* **Explanation**:
    * `answer[0] = 2 * 3 * 4 = 24`
    * `answer[1] = 1 * 3 * 4 = 12`
    * `answer[2] = 1 * 2 * 4 = 8`
    * `answer[3] = 1 * 2 * 3 = 6`

**Example 2:**

* **Input**: `nums = [-1, 1, 0, -3, 3]`
* **Output**: `[0, 0, 9, 0, 0]`

---

### Complexity Analysis

* **Time Complexity**: $O(N)$, where $N$ is the number of elements in `nums`. We perform three separate passes through the array (one for prefixes, one for suffixes, one for the final answer), each taking $O(N)$ time. The total time is $O(N) + O(N) + O(N) = O(3N)$, which simplifies to $O(N)$.

* **Space Complexity**: $O(N)$. This approach requires extra space for the `prefix` and `suffix` arrays, each of size $N$. The `answer` array does not count towards the space complexity as per the problem statement. Therefore, the extra space used is $O(2N)$, which simplifies to $O(N)$.

---

## 🚀 Solution

### Approach (Using Prefix and Suffix Arrays)

This solution breaks the problem down into three straightforward passes by calculating prefix and suffix products separately. The core idea is that the product of all elements except `self` is simply **(product of all elements to the left) \* (product of all elements to the right)**.

1.  **Initialization**: Three vectors of the same size as `nums` are created:
    * `prefix`: To store the product of all elements to the left of the current index.
    * `suffix`: To store the product of all elements to the right of the current index.
    * `answer`: To store the final results.
    All are initialized with `1`.

2.  **First Pass (Prefix Products)**: The code iterates from left to right to fill the `prefix` array. For each index `i`, `prefix[i]` is calculated as the product of all elements *before* `i`.
    * `prefix[i] = prefix[i-1] * nums[i-1]`

3.  **Second Pass (Suffix Products)**: The code then iterates from right to left to fill the `suffix` array. For each index `i`, `suffix[i]` is calculated as the product of all elements *after* `i`.
    * `suffix[i] = suffix[i+1] * nums[i+1]`

4.  **Third Pass (Final Calculation)**: Finally, the `answer` array is constructed. For each index `i`, the result is the product of the corresponding prefix and suffix values.
    * `answer[i] = prefix[i] * suffix[i]`

This method is very clear and easy to follow, as it separates each logical step into its own loop.

---

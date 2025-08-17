# Merge Sort in C++

**LeetCode Problem #912: Sort an Array**  
**Difficulty:** Hard

[View the problem on LeetCode](https://leetcode.com/problems/sort-an-array/)



---

## 📝 Problem Statement

Given an array of integers, sort the array in ascending order using the Merge Sort algorithm.

---

## 💡 Algorithm Explanation

**Merge Sort** works by recursively dividing the array into two halves, sorting each half, and then merging the sorted halves to produce the sorted result.

### Steps:

1. **Divide:**  
   Recursively split the array into two halves until each subarray contains only one element (which is trivially sorted).

2. **Conquer:**  
   Recursively sort the two halves.

3. **Combine (Merge):**  
   Merge the two sorted halves into a single sorted array.

### Why Merge Sort?

- **Time Complexity:** O(n log n) in all cases (best, average, and worst).
- **Space Complexity:** O(n) due to the use of temporary arrays for merging.
- **Stable:** Maintains the relative order of equal elements.
- **Not in-place:** Requires additional space for merging.

---

## 📊 Complexity Analysis

- **Time Complexity:** O(n log n)  
  - The array is repeatedly divided in half (log n divisions), and merging each level takes O(n) time.
- **Space Complexity:** O(n)  
  - Temporary arrays are used during the merge process.

---

## ▶️ How to Use

1. Save the code above as a `.cpp` file (e.g., `Merge-Sort.cpp`).
2. Compile it using a C++ compiler like `g++`:
    ```sh
    g++ Merge-Sort.cpp -o merge_sort
    ```
3. Run the executable:
    ```sh
    ./merge_sort
    ```
4. Enter the number of elements you want to sort.
5. Input the elements of the array when prompted.
6. The sorted array will be displayed as the output.

---
# Selection Sort Algorithm
this problem is also an coding ninjas problem but the sorting algo is a common type of algo used for sorting.

[View the problem on Coding Ninjas](https://www.codingninjas.com/studio/problems/selection-sort_624381)


---

## 📝 Problem Statement

The goal is to sort a given array or vector of integers in ascending order using the Selection Sort algorithm.

---

## 🧠 Algorithm Explanation

Selection Sort is an in-place comparison-based sorting algorithm. The main idea is to divide the array into two parts: a sorted part and an unsorted part. The algorithm repeatedly finds the minimum element from the unsorted part and moves it to the end of the sorted part.

**Steps:**
1. Start with the first element (index `i = 0`). Assume it is the minimum.
2. Iterate through the rest of the unsorted part of the array (from index `j = i + 1` to the end).
3. During this iteration, find the index of the smallest element in the unsorted subarray.
4. After finding the minimum element, swap it with the element at the current position `i`.
5. Increment `i` by one to expand the sorted part of the array.
6. Repeat these steps until the entire array is sorted.

---

## 📊 Complexity Analysis

**Time Complexity:** O(n²)  
The algorithm consists of two nested loops. The outer loop runs n-1 times, and the inner loop runs n-i times for each i. This results in a quadratic time complexity in all cases (best, average, and worst), as the comparisons must be made regardless of the initial order of elements.

**Space Complexity:** O(1)  
Selection Sort is an in-place algorithm. It does not require any extra space that scales with the input size. The only extra memory used is for a few variables to store indices and for swapping, which is constant space.

---


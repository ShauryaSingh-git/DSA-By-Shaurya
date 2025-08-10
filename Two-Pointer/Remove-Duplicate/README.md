# LeetCode 26 – Remove Duplicates from Sorted Array

## 📝 Problem Statement- Given By Leetcode
Given an integer array `nums` sorted in **non-decreasing order**, remove the duplicates **in-place** such that each unique element appears only once.  
The relative order of the elements should be kept the same.  
Return the new length of the modified array.

You must do this using **O(1)** extra space.

---

### Example 1:
**Input:**  
`nums = [1,1,2]`  
**Output:**  
`2, nums = [1,2,_]`

### Example 2:
**Input:**  
`nums = [0,0,1,1,1,2,2,3,3,4]`  
**Output:**  
`5, nums = [0,1,2,3,4,_,_,_,_,_]`

(Underscores `_` indicate values that can be ignored beyond the new length.)

---
## Visualization
```
1. arr=     [1     2      2 ]
pointer=         unique
                   i         
- it is a valid situation as index 0 and 1 is not having same elements
 arr=     [1    2     2 ]
pointer=             unique 
                       i         
- it is not a valid situation as index 1 and 2 is  having same elements which is 2 so unique will not get incremented and element will get ignored
```

---

## ⏱️ Time Complexity
- **O(n)** → Single pass through the array.

---
## 💡 Logic Explanation
We can use the **two-pointer technique**:
1. If `nums` is empty, return `0`.
2. Let `k` (write pointer) start at `1` (since the first element is always unique).
3. Iterate through the array starting from index `1`:
   - If `nums[i] != nums[i-1]`, assign `nums[k] = nums[i]` and increment `k`.
4. At the end, `k` will be the count of unique elements.

This works because the array is already sorted — duplicates will always be next to each other.

---

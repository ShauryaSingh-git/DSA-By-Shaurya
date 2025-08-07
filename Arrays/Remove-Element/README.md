# Problem 27 - Remove Element

## 🧠 Problem Statement

Given an integer array `nums` and an integer value `val`, remove all occurrences of `val` in-place and return the new length of the array.

You must do this in-place with **O(1)** extra memory. The order of elements **can be changed**, and you don't need to consider elements beyond the returned length.

---

## Difficulty

**Difficulty** of this question is marked as EASY on leetcode and i will also rate it as easy.

---

## Time complexity

There is only single for loop working in this solution so 
Time complexity= O(n)

---

## ✍️ Example

### Input:
**nums=** [2,3,3,2]
**val==** 3

### Output :
**k**= 2
**Modified array**= [2,2,_,_]
Blanks are just to show that the given space elements does not matter.

---

## Logic And Explanation

The explanation on the leetcode is written poorly which made me confuse initially too, but i figured it out what the question was asking.
1. Basically it is asking to **RETURN** the value of the last index where we have the value which is **NOT EQUAL** TO **Val** , it is not asking us to return the size of the array.
2. Also it is clearly mentioned that **NO NEW ARRAY SHOULD BE MADE AND CHANGES HAS TO BE MADE IN THE nums array ITSELF**
3. Only the values other then the val are important rest of the order in nums is unsignificant.

---

##  Code Explanation

1. We took a pointer as 'K' and initialized it as 0, which will help us to write in the nums array itself.
2. when the value is not equal to val we will override in the array and then increase the value of 'K' so it does no override twice.
3. then we will return the last index which is 'K'.

---

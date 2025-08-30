# Car Fleet (LeetCode 853)
[View Problem No 853](https://leetcode.com/problems/car-fleet/?utm_source=chatgpt.com)

Difficulty:Medium


---

## 📌 Problem Statement
There are `n` cars going to the same destination along a one-lane road.  
The destination is `target` miles away.  

- Each car starts at a position `position[i]` with a speed `speed[i]`.  
- A **car fleet** is a group of cars that travel together at the same speed because a faster car catches up with a slower one before reaching the target.  
- Note that no car can pass another car, but they can **meet** and form a fleet.  

Return the **number of car fleets** that will arrive at the destination.



---

### Example 1:
**Input:**  
target = 12
position = [10,8,0,5,3]
speed = [2,4,1,1,3]


**Output:**  
3



**Explanation:**  
- Car at 10 (speed 2) → reaches in 1 hour.  
- Car at 8 (speed 4) → reaches in 1 hour, forms a fleet with car at 10.  
- Car at 0 (speed 1) → reaches in 12 hours, forms its own fleet.  
- Car at 5 (speed 1) → reaches in 7 hours.  
- Car at 3 (speed 3) → reaches in 3 hours, but since car at 5 reaches later, they form a fleet together.  

Total = **3 fleets**.

---

## 💡 Approach
- Use a **map (sorted by position in descending order)** to pair cars' positions with their speeds.  
- Calculate the **time taken** for each car to reach the target.  
- Use a **stack** to maintain these times:
  - If the current car’s time is **less than or equal to** the stack top, it means it merges into the fleet ahead.  
  - Otherwise, push the new time (new fleet formed).  
- The size of the stack (or counter) gives the total number of fleets.

---

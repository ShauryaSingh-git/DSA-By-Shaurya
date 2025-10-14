# Combinations

- **LeetCode Problem:** [Problem No-77](https://leetcode.com/problems/combinations/)
- **Difficulty:** Medium

## Problem Statement

Given two integers `n` and `k`, return all possible combinations of `k` numbers chosen from the range `[1, n]`.

## Visual Representation

```
flowchart TD
    A[Start] --> B{Is current combination size == k?}
    B -- Yes --> C[Add current combination to answer]
    B -- No --> D[For j = index to n-1]
    D --> E[Add give[j] to current combination]
    E --> F[Recurse with level+1, j+1]
    F --> G[Remove last element (backtrack)]
    G --> D
```

## Approach

- **Initialization:**  
  Create a list of numbers from 1 to n. Start with an empty combination and index 0.

- **Backtracking:**  
  Use a recursive function to build combinations:
  - At each recursive call, check if the current combination size is equal to `k`.  
    - If yes, add a copy of the combination to the answer list.
    - If not, iterate from the current index to the end of the list.
      - Add the current number to the combination.
      - Recurse with the next index (`j+1`) and increment the level.
      - After recursion, remove the last number (backtrack) to try the next possibility.

- **Avoiding Duplicates:**  
  By always moving forward in the list (using `j+1`), each number is used only once per combination and combinations are unique.

- **Termination:**  
  The recursion stops when all combinations of size `k` have been explored.

## Example

**Input:**
```
n = 4, k = 2
```

**Output:**
```
1 2 
1 3 
1 4 
2 3 
2 4 
3 4 
```

---
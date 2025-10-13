# Combination Sum II

- **LeetCode Problem:** [40. Combination Sum II](https://leetcode.com/problems/combination-sum-ii/)
- **Difficulty:** Medium

## Problem Statement

Given a collection of candidate numbers (`candidates`) and a target number (`target`), find all unique combinations in `candidates` where the candidate numbers sum to `target`. Each number in `candidates` may only be used once in the combination.

The solution set must not contain duplicate combinations.

## Visual Representation

```mermaid
flowchart TD
    A[Start] --> B{Is adder == target?}
    B -- Yes --> C[Add current combination to answer]
    B -- No --> D{Is adder > target?}
    D -- Yes --> E[Return]
    D -- No --> F[For j = i to n-1]
    F --> G{Skip duplicates?}
    G -- Yes --> F
    G -- No --> H[Add candidates[j] to current combination]
    H --> I[Recurse with adder + candidates[j], j+1]
    I --> J[Remove last element (backtrack)]
    J --> F
```

## Approach

- Sorts the input to handle duplicates.
- Uses backtracking to explore all possible unique combinations.
- Skips duplicate elements to avoid repeated combinations.
- Each candidate can be used only once per combination.



## Example

**Input:**
```
candidates = [10,1,2,7,6,1,5], target = 8
```

**Output:**
```
1 1 6 
1 2 5 
1 7 
2 6 
```
---
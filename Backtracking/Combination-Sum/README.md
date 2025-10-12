# Combination Sum


- [Problem No-39](https://leetcode.com/problems/combination-sum/)
- **Difficulty:** Medium

## Problem Statement

Given an array of distinct integers `candidates` and a target integer `target`, find all unique combinations in `candidates` where the numbers sum to `target`. Each number in `candidates` may be used an unlimited number of times.

## Approach

- Uses backtracking to explore all possible combinations.
- At each step, either include the current candidate or move to the next.
- Stops exploring a path if the sum exceeds the target.

## Visual Representation

```mermaid
flowchart TD
    A[Start] --> B{Is adder == target?}
    B -- Yes --> C[Add current combination to answer]
    B -- No --> D{Is adder > target?}
    D -- Yes --> E[Return]
    D -- No --> F[For j = i to n-1]
    F --> G[Add candidates[j] to current combination]
    G --> H[Recurse with adder + candidates[j], j]
    H --> I[Remove last element (backtrack)]
    I --> F
```


## Example

**Input:**
```
candidates = [2,3,6,7], target = 7
```

**Output:**
```
2 2 3 
7 
```

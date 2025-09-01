# Online Stock Span Problem

[View Problem No-901](https://leetcode.com/problems/online-stock-span/description/)


Difficulty-Medium-Hard

---

## Problem Statement
Design a data structure `StockSpanner` that collects the price of a stock for each day and returns the **span** of the stock's price for the current day.

- The span of the stock's price today is defined as the maximum number of consecutive days (starting from today and going backwards) for which the stock price was **less than or equal** to today's price.

---

## Approach

### 1. Use Monotonic Stack
- We maintain a **monotonic decreasing stack** (stores indices of stock prices).
- For each new price, we pop elements from the stack while the top element’s price is `<= current price`.

### 2. Keep an Array of Prices
- Use a vector `ans` to store all stock prices seen so far.
- Each day’s price gets added to this array.

### 3. Compute Span
- If stack is empty → all previous prices are smaller → span = `i + 1`.
- Otherwise → span = `i - st.top()`.
- Push the current index `i` onto the stack.

---

## Steps (Algorithm)
1. Initialize empty stack `st` and vector `ans`.
2. For each price:
   - Add it to `ans`.
   - Pop from stack while `ans[st.top()] <= current price`.
   - If stack empty → span = `i + 1`.
   - Else → span = `i - st.top()`.
   - Push `i` into stack.
3. Return the span.

---

## Dry Run

### Input:

Prices: [100, 80, 60, 70, 60, 75, 85]

### Process:

| Day | Price | Action                                      | Stack (indices) | Span |
|-----|-------|---------------------------------------------|-----------------|------|
| 0   | 100   | Stack empty → span = 1                      | [0]             | 1    |
| 1   | 80    | 80 < 100 → span = 1                         | [0,1]           | 1    |
| 2   | 60    | 60 < 80 → span = 1                          | [0,1,2]         | 1    |
| 3   | 70    | Pop 2 (60 < 70) → span = 2                  | [0,1,3]         | 2    |
| 4   | 60    | 60 < 70 → span = 1                          | [0,1,3,4]       | 1    |
| 5   | 75    | Pop 4 (60), Pop 3 (70) → span = 4           | [0,1,5]         | 4    |
| 6   | 85    | Pop 5 (75), Pop 1 (80), Pop 0 (100) → span=6| [6]             | 6    |

---

## Output

[1, 1, 1, 2, 1, 4, 6]

---
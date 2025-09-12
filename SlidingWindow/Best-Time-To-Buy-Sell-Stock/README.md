# 📈 Best Time to Buy and Sell Stock (C++)

[View Problem No-121](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/)


Difficulty-Medium

This Section solves the **Best Time to Buy and Sell Stock** problem using a **single-pass greedy approach**.

---

## 📌 Problem Statement

You are given an array `prices` where `prices[i]` is the price of a stock on the `i-th` day.  
Your goal is to **maximize profit** by choosing a **single day to buy** one stock and a **different day in the future to sell** it.

⚠️ You may only complete **one transaction**.

---

## 🛠 Approach: Greedy (One-pass)

1. Assume the **first day** as the best day to buy (`bestbuy = prices[0]`).
2. Traverse the array:
   - If a lower price is found, update `bestbuy`.
   - Otherwise, compute profit = `prices[i] - bestbuy`.
   - Update `maxprofit` whenever we find a higher profit.
3. Return the maximum profit found.

---

## 📄 Function Explained

### **int maxProfit(vector<int>& prices)**
- **Input**:  
  - `prices`: vector of stock prices over `n` days.
- **Output**:  
  - Maximum profit possible from one buy-sell transaction.

---

## 🧪 Example Run

### Input:
n = 6
prices = [7, 1, 5, 3, 6, 4]
### Steps:
- Day 1 → bestbuy = 7  
- Day 2 → price = 1 → update bestbuy = 1  
- Day 3 → price = 5 → profit = 5 - 1 = 4 → maxprofit = 4  
- Day 4 → price = 3 → profit = 2 → maxprofit = 4  
- Day 5 → price = 6 → profit = 5 → maxprofit = 5  
- Day 6 → price = 4 → profit = 3 → maxprofit = 5  

### Output:

Maximum Profit: 5

---

## ⚡ Complexity Analysis
- **Time Complexity** → `O(n)` (traverse prices once).  
- **Space Complexity** → `O(1)` (only variables used).  

---

## 📄 Sample I/O from Code

### Input:
Enter number of days: 6
Enter stock prices for 6 days: 7 1 5 3 6 4
### Output:

Maximum Profit: 5

---

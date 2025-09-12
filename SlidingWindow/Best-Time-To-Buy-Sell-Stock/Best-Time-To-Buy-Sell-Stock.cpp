#include <iostream>
#include <vector>
#include <algorithm> // for max()

using namespace std;

class Solution {
public:
    // Function to calculate maximum profit from stock prices
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;             // To store maximum profit
        int bestbuy = prices[0];       // Assume first price is the best buying point initially

        // Traverse from day 1 to end
        for (int i = 1; i < prices.size(); i++) {
            // If current price is lower than our bestbuy, update bestbuy
            if (prices[i] - bestbuy <= 0) {
                bestbuy = prices[i];
            }
            // Otherwise, calculate profit and update maxprofit if it's larger
            else if (prices[i] - bestbuy > 0) {
                maxprofit = max(prices[i] - bestbuy, maxprofit);
            }
        }
        return maxprofit;
    }
};

int main() {
    // Example input: prices of stock on different days
    // For example: [7,1,5,3,6,4]
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter stock prices for " << n << " days: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    // Create object of Solution class
    Solution sol;

    // Call maxProfit function
    int result = sol.maxProfit(prices);

    // Print result
    cout << "Maximum Profit: " << result << endl;

    return 0;
}

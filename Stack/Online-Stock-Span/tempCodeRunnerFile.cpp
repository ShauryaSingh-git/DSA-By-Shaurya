#include <bits/stdc++.h>
using namespace std;

class StockSpanner {
public:
    // To store the stock prices
    vector<int> ans;
    // Monotonic decreasing stack to store indices of stock prices
    stack<int> st;
    // Constructor to initialize the StockSpanner object
    StockSpanner() {}
    // Function to process the next stock price and return its span
    int next(int price) {
     int i=ans.size();
        ans.push_back(price);
        // If the stack is empty, the span is the entire length of the prices seen so far
        int k=1;
            // Pop elements from the stack while the current price is greater than or equal to the price at the index stored at the top of the stack
            while (!st.empty()&&price>= ans[st.top()]) {
                st.pop();
                
            } 
            // If the stack is empty, it means the current price is greater than all previous prices
            if (st.empty()) {
                k=i+1;
            }
            // If the stack is not empty, the span is the difference between the current index and the index at the top of the stack
            else if ((!st.empty())&&price<ans[st.top()]) {
                k = i - st.top();
                
               
            }
            // Push the current index onto the stack
              st.push(i);
             return k;
        }
       

};

int main() {
    StockSpanner* obj = new StockSpanner();
    cout<<obj->next(100)<<endl; // return 1
    cout<<obj->next(80)<<endl;  // return 1
    cout<<obj->next(60)<<endl;  // return 1
    cout<<obj->next(70)<<endl;  // return 2
    cout<<obj->next(60)<<endl;  // return 1
    cout<<obj->next(75)<<endl;  // return 4
    cout<<obj->next(85)<<endl;  // return 6

    return 0;
}
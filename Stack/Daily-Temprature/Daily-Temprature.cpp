#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
// Function to find the number of days until a warmer temperature
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // Initialize the answer vector with zeros
        vector<int>answer(temperatures.size(),0);
        // Stack to keep track of indices of temperatures
        stack<int> capacity;
        // Get the size of the temperatures vector
        int n=temperatures.size();
        // Iterate through each temperature
        for(int i=0;i<n;i++){
            // While the stack is not empty and the current temperature is greater than the temperature at the index stored at the top of the stack
            while((!capacity.empty())&& temperatures[i]>temperatures[capacity.top()]){
                // Calculate the number of days until a warmer temperature
                answer[capacity.top()]=i-capacity.top();
                capacity.pop();

}
            // Push the current index onto the stack
            capacity.push(i);
        }
        // Return the answer vector
        return answer;
    }
};

int main() {
    Solution sol;
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> result = sol.dailyTemperatures(temperatures);
    
    for (int days : result) {
        cout << days << " ";
    }
    
    return 0;
}
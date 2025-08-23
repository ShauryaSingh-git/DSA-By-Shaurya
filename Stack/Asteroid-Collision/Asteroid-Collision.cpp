#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    // Function to simulate asteroid collisions
    vector<int> asteroidCollision(vector<int>& asteroids) {
        // Stack to keep track of asteroids
        stack<int> st;
        // Vector to store the final state of asteroids
        vector<int> ans;
        // Iterate through each asteroid
        for (int i = 0; i < asteroids.size(); i++) {
            // If the stack is empty or the current asteroid is moving right, push it onto the stack
            bool des=false;
            // Check for collisions
            while (!st.empty() && st.top() > 0 && asteroids[i] < 0) {
                if (st.top() < abs(asteroids[i])) {
                    st.pop();
                    
                    continue;
                
                }
                // If the top asteroid is larger, the current one is destroyed
            else if (st.top() == abs(asteroids[i])) {
                    st.pop();
                    des=true;
                    break;
                }
            // If the top asteroid is smaller, pop it and continue checking
            else {
                    des=true;
                    break;
                }
            }
            // If the current asteroid is not destroyed, push it onto the stack
            if (!des) {
                st.push(asteroids[i]);
            }
        }
        // Transfer the remaining asteroids from the stack to the answer vector
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        // Reverse the answer vector to maintain the original order
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> asteroids = {5, 10, -5};
    vector<int> result = sol.asteroidCollision(asteroids);
    for (int asteroid : result) {
        cout << asteroid << " ";
    }
    return 0;
}
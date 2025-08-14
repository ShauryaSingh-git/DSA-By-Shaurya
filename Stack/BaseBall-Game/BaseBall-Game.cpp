#include <iostream>
#include <vector>
#include <string>
using namespace std;
// The Solution class contains the method to calculate the total points in a baseball game based on given operations.
class Solution {
public:

    int calPoints(vector<string>& operations) {
        vector<int> st;
        // Initialize the total points to 0.
        int ans=0;
        // Iterate through the operations.
        for(int i =0;i<operations.size();i++){
            // If the operation is "+", add the sum of the last two scores to the stack and update the total points.
            if(operations[i]=="+"){
                
                st.push_back(st[st.size()-1]+st[st.size()-2]);
                ans+=st.back();
            }
           
            // If the operation is "C", remove the last score from the stack and update the total points.
            else if(operations[i]=="C"){
                ans=ans-st.back();
                st.pop_back();
            }
            // If the operation is "D", double the last score, add it to the stack, and update the total points.
            else if(operations[i]=="D"){
                st.push_back(2*st.back());
                ans+=st.back();
            }
            // If the operation is a number, convert it to an integer, add it to the stack, and update the total points.
             else {

                st.push_back(stoi(operations[i]));
                ans+=st.back();
             }
        }
        // Return the total points accumulated.
        return ans;
    }
};

int main() {
    Solution sol;
    vector<string> operations = {"5", "2", "C", "D", "+"};
    int result = sol.calPoints(operations);
    cout << "Total points: " << result << endl;
    return 0;
}
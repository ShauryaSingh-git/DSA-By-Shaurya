#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    // Function to check if the parentheses in the string are valid
    bool isValid(string s) {
        // Using a stack to keep track of opening parentheses
        stack<char> st;
        // Iterate through each character in the string
        for(int i=0;i<s.size();i++){
            // If the character is an opening parenthesis, push it onto the stack
            if(s[i]=='{'||s[i]=='('||s[i]=='['){
            
                st.push(s[i]);

                continue;
            }
            // If the character is a closing parenthesis, check if it matches the top of the stack
            if(st.size()==0&&(s[i]=='}'||s[i]==']'||s[i]==')')){
                return false;
            }
            // If it matches, pop the top of the stack
            if(st.top()=='{'&&s[i]=='}'||st.top()=='('&&s[i]==')'||st.top()=='['&&s[i]==']'){
                st.pop();
            }
            // If it doesn't match, return false
            else{
                return false;
            }

        }
        // If the stack is empty at the end, all parentheses were matched
        if(!st.empty()){
            return false;
        }
        else{
            return true;
        }
    }
};
int main() {
    Solution sol;
    string s = "{[()]}";
    if (sol.isValid(s)) {
        cout << "The string is valid." << endl;
    } else {
        cout << "The string is not valid." << endl;
    }
    return 0;
}
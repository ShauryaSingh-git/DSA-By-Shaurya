#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to simplify the given Unix-style file path
    string simplifyPath(string path) {
        // Stack to hold the valid directory names
        stack<string>st;
        // Using stringstream to split the path by '/'
        stringstream ss(path);
        // Variable to hold each part of the path
        string input;
        // Process each part of the path
        while(getline(ss,input,'/')){
            //  Handle special cases
            if(input==".."){
                if(!st.empty()){
                st.pop();
            }
            }
            //  Ignore current directory references and empty parts
            else if(input=="."){
                continue;
            }
            //  Push valid directory names onto the stack
            else if(input==""){
                continue;
            }
            //  Push valid directory names onto the stack
            else{
                st.push(input);
            }
        }
        // Construct the simplified path from the stack
        string result;
        //  If the stack is empty, return the root directory
        while(!st.empty()){
            result='/'+st.top()+result;
            st.pop();
        }
        //  Return the simplified path or root if empty
       if(!result.empty())
        return result;
        else return "/";
    }
};
int main() {
    Solution s;
    string path = "/a/./b/../../c/";
    cout << s.simplifyPath(path) << endl;
        
    return 0;
}
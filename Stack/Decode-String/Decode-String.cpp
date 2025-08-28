#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to decode the given encoded string
    string decodeString(string s) {
        // Stacks to hold numbers and strings
        stack<int> numst;
        stack<string> stringst;
        
        bool key = true;
        
        int rep = 1;
        // Variable to hold the current number and string
        int num = 0;
        // Variable to hold the current string being processed
        string curr = "";
        // Process each character in the input string
        for (int i = 0; i < s.size(); i++) {
            // If the character is a digit, build the number
            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                key = false;
            // If the character is an opening bracket, push the current number and string onto their respective stacks
            } else if (s[i] == '[') {
                if (key)
                    num = 1;
                numst.push(num);
                stringst.push(curr);
                num = 0;
                curr = "";
                key=true;

                // If the character is a closing bracket, pop from the stacks and build the decoded string
            } else if (s[i] == ']') {
                int rep = numst.top();
                numst.pop();
                string prev = stringst.top();
                stringst.pop();
                string temp = "";
                for (int i = 0; i < rep; i++) {
                    temp += curr;
                }
            // Append the repeated string to the previous string
            curr=prev+temp;
            } else {
                // If the character is a letter, append it to the current string
                curr = curr + s[i];
            }
        }
        // Return the fully decoded string
        return curr;
    }
};

int main() {
    Solution s;
    string str = "3[a]2[bc]";
    cout << s.decodeString(str) << endl;

    return 0;
}
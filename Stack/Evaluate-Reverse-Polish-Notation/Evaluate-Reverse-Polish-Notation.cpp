#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        //1.Using Stack
        stack<int> st;
        
        int result=0;
        int multidev=1;
        //2.Traversing through the tokens
        for(int i=0;i<tokens.size();i++){
            //2.1 If we encounter an operator, we pop the top two elements from the stack, perform the operation, and push the result back onto the stack.
            if(tokens[i]=="+"){
                for(int j=0;j<2;j++){
                    result=result+st.top();
                    st.pop();
                }
                st.push(result);

            }
            //2.2 If we encounter a number, we convert it to an integer and push it onto the stack.
            else if(tokens[i]=="-"){
                result=result-st.top();
                st.pop();
                result=result+st.top();
                st.pop();
                st.push(result);

            }
            //2.3 Multiplication and Division
            else if(tokens[i]=="*"){

                   multidev=multidev*st.top();
                   st.pop();
                   multidev=multidev*st.top();
                    st.pop();
                
                st.push(multidev);

            }
            //2.4 Division
             else if(tokens[i]=="/"){

                   int a = st.top();
                   st.pop();
                   int b = st.top();
                   st.pop();
                   st.push(b/a);

            }
            //2.5 If we encounter a number, we convert it to an integer and push it onto the stack.
            else{
                st.push(stoi(tokens[i]));
            }
            //3.Resetting the result and multidev variables for the next operation.
            result=0;
            multidev=1;

        }
        //4.At the end of the traversal, the stack will contain a single element, which is the result of the expression.
        return st.top();

    }
};
int main() {
    Solution sol;
    vector<string> tokens = {"2", "1", "+", "3", "*"};
    cout << sol.evalRPN(tokens) << endl; // Output: 9
    return 0;
}
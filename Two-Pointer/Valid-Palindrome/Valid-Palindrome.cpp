#include <iostream>
#include <string>
#include <cctype>
using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while (i<=j){
            //this is for spaces for the left pointer
            if(!(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122||s[i]>=48&&s[i]<=57)){
                i++;
            }
            //for the spaces in the right pointer
            else if(!(s[j]>=65&&s[j]<=90||s[j]>=97&&s[j]<=122||s[j]>=48&&s[j]<=57)){
                j--;
            }
            //if there is a capital letter matching the small letter ,its still a palindrome
            else if((s[i]+32==s[j]||s[i]-32==s[j])&&isalpha(s[i])&&isalpha(s[j])){
                i++;
                j--;
            }
            //for the direct matching pair
            else if(s[i]==s[j]){
                i++;
                j--;
            }
            //if unmatched then it returns false
            else if(s[i]!=s[j]){
                return false;
            }
            //any other exceptions also return false like using of any symbols etc
            else{
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    if (sol.isPalindrome(input)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
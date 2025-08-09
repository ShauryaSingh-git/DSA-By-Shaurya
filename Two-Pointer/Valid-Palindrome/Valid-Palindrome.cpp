#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    bool validPalindrome(string s) {
        int right=s.size()-1;
        int left=0;
        while(left<right){
            if(s[left]==s[right]){
                left++;
                right--;
            }
            else{
                return ispalindrome(s,left+1,right)||ispalindrome(s,left,right-1);
            }
        }
        return true;
        
    }
    bool ispalindrome(string &s,int left,int right){
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;

    }
};


int main() {
    Solution sol;
    vector<string> tests = {"aba", "abca", "abc", "deeee", "raceacar"};

    for (string s : tests) {
        cout << "String: " << s 
             << " -> " << (sol.validPalindrome(s) ? "True" : "False") 
             << endl;
    }

    return 0;
}
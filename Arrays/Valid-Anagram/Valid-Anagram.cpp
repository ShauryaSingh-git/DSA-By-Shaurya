


#include <iostream>
#include <string>// for strings
#include <algorithm> //for sort function

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        sort(s.begin(), s.end());// we have sorted both of the strings here
        sort(t.begin(), t.end());

        //we are now comparing the size to shortlist the conditions if size of 1st string is not equal then directly it is not an anagram
        if (s.size() != t.size())
        {
            return false;
        }
        //now we are comparing both the strings if they are same or not
        if (s == t)
        {
            return true;//returning true
        }
        else//if it is not same then---
        {
            return false;// returning false
        }
    }
};

int main()
{
    string s = "anagram";
    string t = "nagaram";

    Solution sol;
    bool result = sol.isAnagram(s, t);

    if (result)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
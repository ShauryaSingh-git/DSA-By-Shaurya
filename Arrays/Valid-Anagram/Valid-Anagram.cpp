/*
PROBLEM NUMBER- 242 Valid anagram  
Difficulty level - Easy

PREREQUISITES-
1. If-else condition / control statements
2. algorithms header functions- sort, begin(),end() etc
3. Functions and classes

METHODS AND WORKING-

What is a anagram?
i will not go into professonal meaning , this repo is to understand things like a beginner,so
1. lets say you have word "cat" and another word "tac" , these both words are anagram as they both has {a,c,t} words
2. lets take another example- word1= "apple" word2="apel" so word1 has{a,p,p,l,e} word 2 has {"a,p,e,l"} so this is not a anagram

how to solve-
1. we'll sort it out so we can match the characters and no of characters of both strings 
2. then we will compare it directly if both sorted words are same then it is an anagram otherwise it is not.

TIME COMPLEXITY-
O(nlogn)
*/


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
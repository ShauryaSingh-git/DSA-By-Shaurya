#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2==str2+str1)
        {
            int len1=str1.length();
            int len2=str2.length();
            int gcdlen=gcd(len1,len2);
            string ans=str2.substr(0,gcdlen);
            return ans;
        }
        return "";
    }
};

int main()
{
    Solution sol;
    string str1,str2;
    cout<<"Enter first string: ";
    cin>>str1;
    cout<<"Enter second string: ";
    cin>>str2;
    string result=sol.gcdOfStrings(str1,str2);
    if(result!="")
    {
        cout<<"The greatest common divisor of the two strings is: "<<result<<endl;
    }
    else
    {
        cout<<"There is no common divisor string for the given strings."<<endl;
    }
    return 0;
}
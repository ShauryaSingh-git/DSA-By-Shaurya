#include <iostream>
#include <string>
using namespace std;

/*
* This program converts Roman numerals to integers
* Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M
* Symbol values:
* I = 1
* V = 5
* X = 10
* L = 50
* C = 100
* D = 500
* M = 1000
* 
* Special cases:
* - When a smaller value appears before a larger value, it is subtracted
* - Example: IV = 4 (5-1), IX = 9 (10-1), XL = 40 (50-10), XC = 90 (100-10)
*/
class Solution {
public:
    // Converts a Roman numeral string to an integer
    // Algorithm: Traverse from right to left to handle subtraction cases properly
    int romanToInt(string s) {
        int ans=0;  // stores the final integer value
        for(int i=s.length()-1;i>=0;i--)  // traverse from right to left
        {
            // Handle 'I' when it's not part of IV (4) or IX (9)
            if(s[i]=='I'&& i!=s.length()-1 && s[i+1]!='V' && s[i+1]!='X')
            {
                ans=ans+1;  // Add 1 to the result
            }
            // Handle subtraction cases for 'I':
            // IV = 4 (subtract 1 from 5)
            else if(s[i]=='I' && i!=s.length()-1 && s[i+1]=='V' )
            {
                ans=ans-1;  // Subtract 1 for IV (4)
            }
            // IX = 9 (subtract 1 from 10)
            else if(s[i]=='I' && i!=s.length()-1 && s[i+1]=='X' )
            {
                ans=ans-1;  // Subtract 1 for IX (9)
            }
            // Handle basic cases for D (500) and M (1000)
            // These symbols are never subtracted
            else if(s[i]=='D')
            {
                ans=ans+500;  // Add 500 for D
            }
            else if(s[i]=='M')
            {
                ans=ans+1000;  // Add 1000 for M
            }
            // Handle 'X' when it's not part of XL (40) or XC (90)
            else if(s[i]=='X'&& i!=s.length()-1 && s[i+1]!='L' && s[i+1]!='C')
            {
                ans=ans+10;  // Add 10 for X
            }
            // XC = 90 (subtract 10 from 100)
            else if(s[i]=='X' && i!=s.length()-1 && s[i+1]=='C')
            {
                ans=ans-10;  // Subtract 10 for XC (90)
            }
            // XL = 40 (subtract 10 from 50)
            else if(s[i]=='X' && i!=s.length()-1 && s[i+1]=='L')
            {
                ans=ans-10;  // Subtract 10 for XL (40)
            }
            // Handle 'C' when it's not part of CD (400) or CM (900)
            else if(s[i]=='C'&& i!=s.length()-1 && s[i+1]!='M' && s[i+1]!='D')
            {
                ans=ans+100;  // Add 100 for C
            }
            // Handle subtraction cases for C: CD (400) and CM (900)
            else if(s[i]=='C' && i!=s.length()-1 && (s[i+1]=='D' || s[i+1]=='M'))
            {
                ans=ans-100;  // Subtract 100 for CD (400) or CM (900)
            }
            // Handle basic cases for remaining symbols
            // These are cases where the symbol appears at the end
            // or is not part of any subtraction combination
            else if(s[i]=='V')
            {
                ans=ans+5;    // Add 5 for V
            }
            else if(s[i]=='L')
            {
                ans=ans+50;   // Add 50 for L
            }
            else if(s[i]=='C')
            {
                ans=ans+100;  // Add 100 for C
            }
            else if(s[i]=='I')
            {
                ans=ans+1;    // Add 1 for I
            }
            else if(s[i]=='X')
            {
                ans=ans+10;   // Add 10 for X
            }
        }
        return ans;
    }
};
int main() {
    Solution solution;
    string romanNumeral = "MCMXCIV"; // Example input
    int integerValue = solution.romanToInt(romanNumeral);
    cout << "The integer value of the Roman numeral " << romanNumeral << " is " << integerValue << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to compute the integer square root of a non-negative integer x.
    int mySqrt(int x) {
        // Edge cases for 0 and 1
        if(x==0||x==1)return x;
        // Initialize binary search boundaries
        int i=0;
        int j=x;
        // Binary search for the integer square root
        while(i<=j)
        {   // Calculate mid to avoid potential overflow
            long long mid=i+(j-i)/2;
            // Check if mid is the exact square root
            if(mid==i)
            {
                return mid;
            }
            // Check if mid is the exact square root
            if(mid==j)
            {
                return mid;
            }
             // If mid squared is less than or equal to x, move the lower boundary up
            if(mid*mid<=x)
            {
                i=mid;
            }
            // If mid squared is greater than x, move the upper boundary down
            else if(mid*mid>x)
            {
                j=mid;
            }
            
        }
        // When the loop ends, i and j converge to the integer square root
        return x;    
    }
};

int main()
{
    Solution obj;
    int x=8;
    cout<<obj.mySqrt(x);
    return 0;
}
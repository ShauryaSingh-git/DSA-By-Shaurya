#include <iostream>
#include <unordered_set>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        // Initialize answer and iterator
        int ans=n;
        int i=0;
        // Use an unordered set to track seen numbers to detect cycles
        unordered_set<int>m;
        // Continue until we reach 1 or detect a cycle
        while(n!=1 && m.find(n)==m.end())

        {
            // Insert the current number into the set
            m.insert(n);
            ans=0;
            do
            {
                // Calculate the sum of the squares of the digits
                ans=ans+pow(n%10,2);
                i=n;
                n=n/10;
            }while(i/10!=0);
            n=ans;
            
        }
        // If we reached 1, it's a happy number
        if(ans==1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Solution s;
    int n;
    cout<<"Enter a number to check if it is a happy number: ";
    cin>>n;
    if(s.isHappy(n))
    {
        cout<<n<<" is a happy number."<<endl;
    }
    else
    {
        cout<<n<<" is not a happy number."<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
// Function to determine the minimum capacity of the ship to ship all packages within D days
    int shipWithinDays(vector<int>& weights, int days) {
        // Finding the maximum weight in the weights array to set the lower bound of binary search
        auto max1=max_element(weights.begin(),weights.end());
        // Setting the right bound of binary search as the sum of all weights
        int right=0;
        // Setting the left bound of binary search as the maximum weight
        int left=*max1;
        // Calculating the sum of all weights to set the right bound
        for(int i=0;i<weights.size();i++)
        {
            right=right+weights[i];

        }
        // Initializing the answer variable to store the minimum capacity found
        int ans=INT_MAX;
        int mid=0;
        // Performing binary search to find the minimum capacity
        while(left<=right)
        {
            int sum=0;
            int clock=1;
            int mid=left+(right-left)/2;
            // Iterating through the weights to check how many days are needed with the current mid capacity
            for(int i=0;i<weights.size();i++)
            {
                sum=weights[i]+sum;
                if(sum>mid)
                {
                    sum=weights[i];
                    clock++;
                }
            }
            // If the number of days needed is less than or equal to the given days, update the answer and search for a smaller capacity
            if(clock<=days)
            {
                ans=min(ans,mid);
                right=mid-1;
            }
            // If the number of days needed is more than the given days, search for a larger capacity
            else if(clock>days)
            {
                left=mid+1;

            }
            
        }
        // Returning the minimum capacity found
        return ans;
    }
};
int main() {
    Solution obj;
    vector<int> weights={1,2,3,4,5,6,7,8,9,10};
    int days=5;
    cout<<obj.shipWithinDays(weights,days);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        //binary search
        auto max1=max_element(piles.begin(),piles.end());
        
        int low=1;
        int high=*max1;
        //maximum element in the array
        int l=INT_MAX;
        //minimum eating speed
        int mid=0;
        //mid is the eating speed
        while(low<=high)
        {
            mid=low+(high-low)/2;
            int hours=0;
        //hours taken to eat all bananas at speed mid
            for(int i=0;i<piles.size();i++)
        {
            hours=hours+ceil((double)piles[i]/mid);
            //if hours exceed h then break
            if(hours>h)
            {
                break;
            }
        }
        //if hours is less than or equal to h then we can try for a smaller eating speed
        if(hours<=h)
            {
            //update minimum eating speed
            l=min(l,mid);
            high=mid-1;
            }
            //hours exceed h then we need to increase the eating speed
            else if (hours>h)
            {
                low=mid+1;
            }
        
        }
        return l;
    }
};

int main() {
    // Example usage
    Solution solution;
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    int result = solution.minEatingSpeed(piles, h);
    cout << "Minimum eating speed: " << result << endl; // Output: 4
    return 0;
}
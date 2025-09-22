#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int findMin(vector<int>& nums) {
        // Edge case: If the array is empty, return -1 (or handle as needed)
        if(nums.empty()) return -1;
        // If the array has only one element, return that element
        int left=0;
        // If the array is not rotated (the first element is less than the last), return the first element
        int right=nums.size()-1;
        // Binary search to find the minimum element
        while(left<right)
        {
            int mid=left+(right-left)/2;
            // Check if the mid element is greater than the rightmost element
            if(nums[mid]>nums[right])
            {
                left=mid+1;
            }
            // If the mid element is less than or equal to the rightmost element, the minimum is in the left half (including mid)
            else
            {
                right=mid;
            }
        }
        // At the end of the loop, left will point to the minimum element
        return nums[left];
        
    }
};
int main() {
    Solution sol;
    vector<int> nums = {3, 4, 5, 1, 2};
    cout << "The minimum element in the rotated sorted array is: " << sol.findMin(nums) << endl;
    return 0;
}
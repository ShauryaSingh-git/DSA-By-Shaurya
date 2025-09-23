#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Time Complexity: O(log n)
    int search(vector<int>& nums, int target) {
        // Binary Search
        int right=nums.size()-1;
        int left=0;
        int mid=0;
        // 1. Find the mid element
        // 2. Check which part is sorted
        // 3. Check if the target lies in the sorted part
        // 4. If yes, discard the other part

        while(left<=right)
        {
            // To avoid overflow
            mid=left+(right-left)/2;
            // Check if mid is the target
            if(nums[mid]==target)return mid;
            // Check which part is sorted
            if(nums[left]<=nums[mid])
            {
                // Left part is sorted
                // Check if target lies in the left part

                if(nums[left]<=target && nums[mid]>target)
                {
                    right=mid-1;
                }
                else
                {
                    left=mid+1;
                }
            }
            // Right part is sorted
            else
            {
                // Check if target lies in the right part
                if(target>=nums[mid]&& target<=nums[right])
                {
                    left=mid+1;
                }
                // Target lies in the left part
                else
                {
                    right=mid-1;
                }
            }
        }
        /// Target not found
        return -1;
    }
};
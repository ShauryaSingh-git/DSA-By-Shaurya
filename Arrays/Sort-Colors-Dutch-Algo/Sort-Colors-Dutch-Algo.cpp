#include <iostream>
#include <vector>   
using namespace std;


class Solution {
public:
    // Function to sort colors using Dutch National Flag Algorithm
    void sortColors(vector<int>& nums) {
        // We will use the Dutch National Flag algorithm to sort the colors
        int low=0; 
        int mid=0;
        int high=nums.size()-1;
        // We will maintain three pointers: low, mid, and high
        // low will point to the next position for 0, mid will traverse the array,
        // and high will point to the next position for 2
        // We will iterate through the array until mid exceeds high
        while(mid<=high)
        {
            // If the current element is 0, we swap it with the element at low
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            // If the current element is 1, we simply move mid forward
            else if(nums[mid]==2)
            {
                swap(nums[mid],nums[high]);
                high--;
                
            }
            // If the current element is 1, we just move mid forward
            else
            {
                mid++;
            }
        }

    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)
int main() {
    Solution solution;
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    solution.sortColors(nums);
    
    for(int num : nums) {
        cout << num << " ";
    }
    return 0;
}
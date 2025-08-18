#include <iostream>
#include <vector>       
#include <algorithm>
using namespace std;

// The Solution class implements the 4Sum problem using the two-pointer technique.
class Solution {
public:

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    
        // The fourSum method finds all unique quadruplets in the array that sum to the target.
        vector<vector<int>> answer;
        if(nums.size()<4){
            return answer;
        }
        // Sort the input array to use the two-pointer technique effectively.
        sort(nums.begin(),nums.end());
        // Iterate through the sorted array to find quadruplets.
        for (int i = 0; i < nums.size() - 3; i++) {
            // Skip duplicates for i to ensure unique quadruplets.
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            // Iterate through the array starting from the next element after i.
            for (int j = i + 1; j < nums.size() - 2; j++) 
            {

                // Skip duplicates for j to ensure unique quadruplets.
                if (j > i + 1 && nums[j] == nums[j - 1]) 
                {
                    continue;
                }
                // Use two pointers to find pairs that, along with nums[i] and nums[j], sum to the target.
                int k = j + 1;
                int l = nums.size() - 1;
                // Move the pointers towards each other to find valid quadruplets.
                while (k < l) 
                {
                    // Calculate the sum of the current quadruplet.Long long is used to prevent overflow.
                    long long assume =(long long) nums[i] + nums[j] + nums[k] + nums[l];
                    // Adjust the pointers based on the sum of the quadruplet.
                    if (assume < target) 
                    {
                        k++;
                    } else if (assume > target) 
                    {
                        l--;
                    } else 
                    {
                        // If the sum equals the target, we found a valid quadruplet.
                        answer.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;

                        // Skip duplicates for k to ensure unique quadruplets.
                        while (k < l && nums[k] == nums[k - 1]) 
                        {
                            k++;
                        }
                        // Skip duplicates for l to ensure unique quadruplets.
                        while (k < l && nums[l] == nums[l + 1]) 
                        {
                            l--;
                        }
                    }
                }
            }
            
        }
        return answer;
    }
};
// This is the testing main function for the above class
int main() {
    Solution solution;
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> result = solution.fourSum(nums, target);
    
    for (const auto& quadruplet : result) {
        for (int num : quadruplet) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}
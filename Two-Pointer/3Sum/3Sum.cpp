#include <iostream>
#include <vector>   
#include <algorithm>
using namespace std;

// The Solution class implements the 3Sum problem using the two-pointer technique.
class Solution {
public:
    // The threeSum method finds all unique triplets in the array that sum to zero.
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        if (nums.size() < 3) {
            return answer; // If there are less than 3 numbers, no triplet can be formed.
        }
        // Sort the input array to use the two-pointer technique effectively.
        sort(nums.begin(), nums.end());
        // Iterate through the sorted array to find triplets.
        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int j = i + 1;

            int k = nums.size() - 1;
            // Use two pointers to find pairs that, along with nums[i], sum to zero.
            while (j < k) {

                int target = nums[i] + nums[j] + nums[k];
                // Adjust the pointers based on the sum of the triplet.
                if (target < 0) {
                    j++;
                }                   
                // If the sum is greater than zero, we need to decrease the sum.
                 else if (target > 0) {
                    k--;
                }
                // If the sum is zero, we found a valid triplet.
                 else if (target == 0) {
                    // If we find a valid triplet, add it to the answer.
                    answer.push_back({nums[i], nums[j], nums[k]});
                    // Move both pointers inward to find new pairs.
                    j++;
                    k--;
                    // Skip duplicates for j and k to ensure unique triplets.
                    while (j < k && nums[j] == nums[j - 1]) {

                        j++;
                    }

                    while (j < k && nums[k] == nums[k + 1]) {
                        k--;
                    }
                }
            }
        }   
        // Return the list of unique triplets that sum to zero.
        return answer;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = solution.threeSum(nums);
    
    for (const auto& triplet : result) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}
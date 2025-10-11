#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    // Function to calculate the sum of all XOR totals for the subsets of nums
    int subsetXORSum(vector<int>& nums) {
        // Initialize sum to store the final result
        int sum=0;
        // Start backtracking with initial parameters
        backtrack(nums,0,sum,0,0);
        return sum;
    }
    void backtrack(vector<int>&nums,int xor1,int&sum,int level,int j)
    {
        // Base case: if we've considered all elements
        for(int i=j;i<nums.size();i++)
        {
            // Calculate new XOR value including nums[i]
            int newxor=xor1^nums[i];
            sum+=newxor;
            // Recur to the next level, moving to the next index
            backtrack(nums,newxor,sum,level+1,i+1);
        }
        

    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3};
    int result = sol.subsetXORSum(nums);
    cout << "The sum of all XOR totals for the subsets of [1, 3] is: " << result << endl;
    return 0;
}
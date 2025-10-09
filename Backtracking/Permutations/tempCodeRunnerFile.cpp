#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>result; 
        backtrack(nums,0,result);
        return result;
    }
    void backtrack(vector<int>&nums,int index,vector<vector<int>>&result)
    {
        //base case
        if(index==nums.size())
        {
            result.push_back(nums);
        }
        //recursive case
        for(int i=index;i<nums.size();i++)
        {
            //swapping
            swap(nums[i],nums[index]);
            //backtracking to the next index
            backtrack(nums,index+1,result);
            //backtracking to the previous state
            swap(nums[i],nums[index]);
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = sol.permute(nums);
    
    cout << "Permutations of [1, 2, 3] are:" << endl;
    for (const auto& perm : permutations) {
        cout << "[";
        for (size_t i = 0; i < perm.size(); ++i) {
            cout << perm[i];
            if (i < perm.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
    
    return 0;
}
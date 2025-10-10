#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;


class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>result;
        set<vector<int>>ss;
        backtrack(nums,0,result,ss);
        return result;
    }
    void backtrack(vector<int>&nums,int index,vector<vector<int>>&result,set<vector<int>>&ss)
    {
        //base case
        if(index==nums.size())
        {   //finding duplicates
            if(ss.find(nums)!=ss.end())return;
            //pushing into the result
            result.push_back(nums);
            //inserting into the set
            ss.insert(nums);
            return;
        }
        //recursive case
        for(int i=index;i<nums.size();i++)
        {
            //swapping
            swap(nums[i],nums[index]);
            //backtracking to the next index
            backtrack(nums,index+1,result,ss);
            //backtracking to the previous state
            swap(nums[i],nums[index]);
            
        }
        
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 2};
    vector<vector<int>> permutations = sol.permuteUnique(nums);
    
    cout << "Unique Permutations of [1, 1, 2] are:" << endl;
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
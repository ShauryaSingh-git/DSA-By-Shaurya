#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        // sort the array to handle duplicates
        vector<vector<int>> answer;
        // temporary array to store current subset
        vector<int> ans;
        int i=0;
        sort(nums.begin(),nums.end());
        // call the recursive function
        checker(nums,ans,answer,i);
        // return the final answer
        return answer;
    }
        // recursive function to generate subsets
        void checker(vector<int>nums,vector<int>&ans,vector<vector<int>>&answer,int i)
    {   // base case
        if(i==nums.size()){
            answer.push_back(ans);
            return;
        }
        // include the current element
        ans.push_back(nums[i]);
        //
        checker(nums,ans,answer,i+1);
        //
        ans.pop_back();
        
        // exclude the current element and skip duplicates
        int index=i+1;
        // skip all the duplicates
        while(index<nums.size() && nums[index]==nums[index-1])
        {   
            index++;
            
            
        }
        // recursive call after excluding the duplicates
        checker(nums,ans,answer,index); 
        
    }
};
int main() {
    Solution solution;
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> result = solution.subsetsWithDup(nums);

    cout << "Subsets with duplicates removed:" << endl;
    for (const auto& subset : result) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        // to store all the subsets
        vector<vector<int>> answer;
        // to store one subset at a time
        vector<int> ans;
        // index
        int i=0;
        // call the backtracking function
        checker(nums,ans,answer,i);
        return answer;
    }
    // backtracking
    void checker(vector<int>nums,vector<int>&ans,vector<vector<int>>&answer,int i)
    {   
        // base case
        if(i==nums.size()){
            answer.push_back(ans);
            return;
        }
        // include
        ans.push_back(nums[i]);
        checker(nums,ans,answer,i+1);
        // exclude
        ans.pop_back();
        checker(nums,ans,answer,i+1);
        
    }
};
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    Solution obj;
    vector<vector<int>> result = obj.subsets(nums);
    for (const auto& subset : result) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); i++) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ",";
        }
        cout << "] ";
    }
    cout << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>answer;
        vector<int>ans;
        int i=0;
        int adder=0;
        backtrack(candidates,target,answer,ans,i,adder);
        return answer;
    }

    void backtrack(vector<int>&candidiates,int target,vector<vector<int>>&answer,vector<int>&ans,int i,int adder)
    {
        // Base case: if the current sum equals the target, add the current combination to the answer
        if(adder==target)
        {
            answer.push_back(ans);
            return;
        }
        // If the current sum exceeds the target, return
        if(adder>target)
        {
            return;
        }
        // Explore further by including each candidate starting from index i
        for(int j=i;j<candidiates.size();j++)
        {
            // Include candidiates[j] in the current combination
            ans.push_back(candidiates[j]);
            // Recur with updated sum and the same index j (to allow reuse of the same element)
            backtrack(candidiates,target,answer,ans,j,adder+candidiates[j]);
            // Backtrack: remove the last added element to explore other combinations
            ans.pop_back();
        }
    }
};

int main()
{
    Solution sol;
    vector<int>candidates={2,3,6,7};
    int target=7;
    vector<vector<int>>answer=sol.combinationSum(candidates,target);
    for(auto i:answer)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
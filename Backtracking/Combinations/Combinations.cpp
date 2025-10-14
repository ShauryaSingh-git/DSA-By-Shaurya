#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int>give;
        for(int i=1;i<=n;i++)
        {
            give.push_back(i);
        }
         int level=0;
        vector<int>ans;
        vector<vector<int>>answer;
        backtrack(give,k,level,ans,answer,0);
        return answer;

    }
    void backtrack(vector<int>give,int k,int level,vector<int>&ans,vector<vector<int>>&answer,int index)
    {
        // Base case: if the current combination size equals k, add it to the answer
        if(level==k)
        {
            answer.push_back(ans);   
            return;
        }
        // Explore further by including each number starting from index
        for(int j=index;j<give.size();j++)
        {
            // Include give[j] in the current combination
            ans.push_back(give[j]);
            // Recur with the next index j+1 (to avoid reuse of the same element)
            if(j!=give.size()){
            backtrack(give,k,level+1,ans,answer,j+1);
            }
            // Backtrack: remove the last added element to explore other combinations
            ans.pop_back();
        }
    }

};

int main()
{
    Solution sol;
    int n=4;
    int k=2;
    vector<vector<int>>answer=sol.combine(n,k);
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
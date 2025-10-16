#include<bits/stdc++.h>
using namespace std;
class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    //for storing the answer
    vector<int>ans;
    //function for preorder traversal
    vector<int> preorderTraversal(TreeNode* root) {
        buildtree(root);
        vector<int>answer=ans;
        return answer;
    }
    //function to build the tree
    void buildtree(TreeNode * root)
    {
        //base case
        if(root==NULL)
        {
            return;
        }
        //preorder traversal
        ans.push_back(root->val);
        //left subtree
        buildtree(root->left);
        //right subtree
        buildtree(root->right);
        return;

    }
};

int main()
{
    Solution sol;
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int>answer=sol.preorderTraversal(root);
    for(auto i:answer)
    {
        cout<<i<<" ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        // BFS approach
        vector<vector<int>>answer; 
        if(root==NULL)return answer ;
        //queue for BFS
        queue<TreeNode*> bucket;
        //initially push root and null
        bucket.push(root);
        bucket.push(NULL);

       //level vector to store each level nodes
        vector<int>level;
        while(!bucket.empty())
        {
            //check for null
            if(bucket.front()==NULL)
            {
                //single element in bucket means last level
                if(bucket.size()==1)
                {
                    answer.push_back(level);
                   bucket.pop();
                }
                //not last level
                else
                {
                    answer.push_back(level);
                    level.clear(); 
                    bucket.pop();
                    bucket.push(NULL);
                }
            }
            //normal node processing
            else
            {
                level.push_back(bucket.front()->val);
                //push left and right child if not null
                if(bucket.front()->left!=NULL)
                {
                    bucket.push(bucket.front()->left);
                }
                //push right child if not null
                if(bucket.front()->right!=NULL)
                {
                    bucket.push(bucket.front()->right);
                }
                bucket.pop();
            }
        }
        return answer;
    }
};

int main() {
    // Example usage:
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution sol;
    vector<vector<int>> result = sol.levelOrder(root);

    cout << "Level Order Traversal:" << endl;
    for (const auto& level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
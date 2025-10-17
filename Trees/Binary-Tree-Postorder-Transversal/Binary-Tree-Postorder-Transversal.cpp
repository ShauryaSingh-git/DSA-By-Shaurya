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
    vector<int>ans;
    vector<int> postorderTraversal(TreeNode* root) {
        // Postorder Traversal: Left -> Right -> Root
        buildtree(root);
        // Return the result
        vector<int>answer=ans;
        // Clear the ans vector for future calls
        return answer;
    }
    // Helper function to perform postorder traversal
        void buildtree(TreeNode * root)
    {
        
        // Base case
        if(root==NULL)
        {
            return;
        }
        // Traverse the left subtree
        buildtree(root->left);
        // Traverse the right subtree
        buildtree(root->right);
        // Visit the root node
        ans.push_back(root->val);

    }
};

int main() {
    // Example usage:
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    Solution sol;
    vector<int> result = sol.postorderTraversal(root);

    for (int val : result) {
        cout << val << " ";
    }
    // Output should be: 3 2 1

    return 0;
}
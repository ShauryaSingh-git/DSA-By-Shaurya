#include <iostream>
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
    int maxDepth(TreeNode* root) {
        int result=depthfinder(root);
        return result;
    }
    int depthfinder(TreeNode *root)
    {
        // Base case
        if(root==nullptr)
        {
            return 0;
        }
        // Recursive case
        int leftdepth=depthfinder(root->left);
        // Recursive case
        int rightdepth=depthfinder(root->right);
        return 1+max(leftdepth,rightdepth);
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
    int depth = sol.maxDepth(root);

    // Output the maximum depth to verify
    cout << "Maximum Depth: " << depth << endl; // Should print 3

    return 0;
}
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
    TreeNode* invertTree(TreeNode* root) {

        TreeNode* temp=root;
        TreeNode*temp2=temp;
        check(temp);
        return temp2;
    }
    void check(TreeNode*&root )
    {
        // Base case
        if(root==NULL)return;
        // Swap the left and right children        
        TreeNode* temp=root->right;
        // Swapping
        root->right=root->left;
        // Assigning temp to left
        root->left=temp;
        // Recursively invert the left and right subtrees
        check(root->left);
        // Recursively invert the right subtree
        check(root->right);
            
    }

};

int main() {
    // Example usage:
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    Solution sol;
    TreeNode* invertedRoot = sol.invertTree(root);

    // Output the inverted tree's root value to verify
    cout << "Inverted root value: " << invertedRoot->val << endl; // Should print 4

    return 0;
}

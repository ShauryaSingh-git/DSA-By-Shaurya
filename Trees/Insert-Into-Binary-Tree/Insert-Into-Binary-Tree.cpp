#include <iostream>
#include <functional> // added for std::function
using namespace std;
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {} // use nullptr
};
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        // Base case: found a null position to insert the new value
        if (root == nullptr)
            {
                return new TreeNode(val);
            }
        // Recursive case: traverse the tree to find the correct position
        if (root->val > val) {
            root->left=insertIntoBST(root->left, val);
        // If val is greater than or equal to root's value, go right
        } else if (root->val <= val) {
            root->right=insertIntoBST(root->right, val);
        }
        return root;
        }
    
};
int main() {
    // Example usage:
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    Solution sol;
    int valToInsert = 5;
    root = sol.insertIntoBST(root, valToInsert);

    // Simple inorder traversal to verify insertion
    function<void(TreeNode*)> inorder = [&](TreeNode* node) {
        if (node == nullptr) return;
        inorder(node->left);
        cout << node->val << " ";
        inorder(node->right);
    };

    cout << "Inorder traversal after insertion: ";
    inorder(root); // Should print the tree in sorted order

    return 0;
}
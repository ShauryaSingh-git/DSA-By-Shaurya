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
    TreeNode * finder(TreeNode* root)
    {
        while(root && root->right)
        {
            root=root->right;
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr) return nullptr;
        if(root->val<key)
        {
            root->right=deleteNode(root->right,key);
        }
        else if(key<root->val)
        {
            root->left=deleteNode(root->left,key);
        }
        else
        {   //no child
            if(root->left==nullptr && root->right==nullptr)
            {
                delete root;
                return nullptr;
            }
            //case 2 1 child which is right
            else if(root->left==nullptr && root->right!=nullptr)
            {   TreeNode* temp=root->right;
                delete root;
                return temp;
            }
            //case 2 1 child which  is left
            else if(root->left!=nullptr && root->right==nullptr)
            {
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }
            //case 3 which has both child
            else
            {
                TreeNode*temp=finder(root->left);
                root->val=temp->val;
                root->left=deleteNode(root->left,temp->val);
            }
        }
        return root;
    }
};

int main() {
    // Example usage:
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(7);

    Solution sol;
    int keyToDelete = 3;
    root = sol.deleteNode(root, keyToDelete);

    // Simple inorder traversal to verify deletion
    function<void(TreeNode*)> inorder = [&](TreeNode* node) {
        if (node == nullptr) return;
        inorder(node->left);
        cout << node->val << " ";
        inorder(node->right);
    };

    cout << "Inorder traversal after deletion: ";
    inorder(root); // Should print the tree in sorted order without the deleted node

    return 0;
}
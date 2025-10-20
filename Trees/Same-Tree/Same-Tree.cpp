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

    bool isSameTree(TreeNode* p, TreeNode* q) {
       // Base cases
        if((p==nullptr && q!=nullptr)||(p!=nullptr && q==nullptr))
        {
            return false;
        }
        // Both nodes are null
        if(p==nullptr && q==nullptr)return true;
        // Values are different
        if(p->val!=q->val){
            return false;
        }
        // Recursive case
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};
int main() {
    // Example usage:
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);

    TreeNode* q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);

    TreeNode* r = new TreeNode(1);
    r->left = new TreeNode(2);
    r->right = new TreeNode(4);

    Solution sol;
    bool result1 = sol.isSameTree(p, q);
    bool result2 = sol.isSameTree(p, r);

    cout << "isSameTree(p, q): " << (result1 ? "true" : "false") << endl; // Should print true
    cout << "isSameTree(p, r): " << (result2 ? "true" : "false") << endl; // Should print false

    return 0;
}
#include <bits/stdc++.h>
using namespace std;    

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int val) {
        this->val = val;
        this->next = nullptr;
    }
};  
class Solution {
public:
    ListNode* left;
    bool isPalindrome(ListNode* head) {
        left=head;
        return checker(head);
    }
    bool checker(ListNode*right)
    {
        if(right==nullptr)return true;
        bool ans=checker(right->next);
        if(ans==false)return false;
        if(left->val==right->val)
        {   
            left=left->next;
            return true;
        }
        
        return false;

    }
};

int main() {
    int n;
    cin >> n;
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        ListNode* newNode = new ListNode(val);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    Solution obj;
    if (obj.isPalindrome(head)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
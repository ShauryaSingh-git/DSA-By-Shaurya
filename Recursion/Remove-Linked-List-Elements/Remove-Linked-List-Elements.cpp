#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    // Recursively remove all elements with value val from the linked list
    ListNode* removeElements(ListNode* head, int val) {
        // Base case: if the list is empty, return nullptr
        if(head==NULL)return nullptr;
        // Recursively process the next node
        head->next=removeElements(head->next,val);
        // If the current node's value is equal to val, remove it
        if(head->val==val)
        {
            ListNode*temp=head->next;
            head->next=NULL;
            delete head;
            return temp;
        }
        // Otherwise, keep the current node
        return head;
    }
};
int main() {
    Solution sol;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(6);
    int val = 6;
    ListNode* result = sol.removeElements(head, val);
    while (result != nullptr) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl; // Output: 1 2 3 4 5
    return 0;
}
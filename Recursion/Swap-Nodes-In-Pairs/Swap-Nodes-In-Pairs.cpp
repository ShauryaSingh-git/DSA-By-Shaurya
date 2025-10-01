#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    // Recursively swap every two adjacent nodes in the linked list
    ListNode* swapPairs(ListNode* head) {
        // Base case: if the list is empty or has only one node, return head
        if(head==nullptr||head->next==nullptr)return head;
        // Identify the first two nodes to be swapped
        ListNode*second=head->next;
        // Recursively swap the remaining pairs
        head->next=swapPairs(head->next->next);
        // Perform the swap
        second->next=head;
        return second;
        
    }
};

int main() {
    Solution sol;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    ListNode* result = sol.swapPairs(head);
    while (result != nullptr) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl; // Output: 2 1 4 3
    return 0;
}
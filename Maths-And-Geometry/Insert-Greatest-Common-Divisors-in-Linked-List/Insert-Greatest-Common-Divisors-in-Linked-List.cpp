#include <iostream>
using namespace std;



int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==nullptr)return head;
        
        head->next=insertGreatestCommonDivisors(head->next);
        ListNode* node=new ListNode(gcd(head->val,head->next->val));
        node->next=head->next;
        head->next=node;
        return head;
    }
};

int main()
{
    // Example usage:
    Solution sol;
    ListNode* head = new ListNode(12);
    head->next = new ListNode(15);
    head->next->next = new ListNode(9);

    ListNode* modifiedHead = sol.insertGreatestCommonDivisors(head);

    // Print the modified linked list
    ListNode* current = modifiedHead;
    while (current != nullptr) {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;

    return 0;
}
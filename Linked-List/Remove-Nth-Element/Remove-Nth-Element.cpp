#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
  
class Solution {
public:
    // Function to remove the N-th node from the end of the list
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Initialize two pointers
        ListNode* pointer1=head;
        ListNode* pointer2=head;
        // To keep track of the previous node of pointer2
        ListNode* prev=NULL;
        //to count the nodes
        int count=1;
        // Edge case: If the list has only one node
        if(head->next==NULL)
        {
            head=NULL;
            return head;
        }
        // Move pointer1 to the end, and pointer2 will point to the N-th node from the end
        while(pointer1!=NULL)
        {
            pointer1=pointer1->next;
            // Start moving pointer2 only after count exceeds n
            if(count>n)
            {
                prev=pointer2;
                pointer2=pointer2->next;

            }
            count++;
        }
        // If the node to be deleted is the head node
        if(pointer2==head)
        {
            head=head->next;
            return head;
        }
            prev->next=pointer2->next;
            pointer2->next=NULL;
            delete pointer2;
            return head;

    }
};

int main() {
    Solution sol;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int n = 2; // Remove the 2nd node from the end

    head = sol.removeNthFromEnd(head, n);

    // Print the modified list
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
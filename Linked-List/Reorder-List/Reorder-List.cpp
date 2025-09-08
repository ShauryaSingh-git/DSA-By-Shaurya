#include <bits/stdc++.h>
using namespace std;
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int value) {
        val = value;
        next = NULL;
    }
};

class Solution {
public:
    
    void reorderList(ListNode* head) {
        //1. Reorder the list as per the problem statement.
        ListNode * temp=head;
        int count=0;
        // Count the number of nodes in the linked list
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        // If the list has 2 or fewer nodes, no reordering is needed
        if(count<=2)
        {
            return;
        }
        // Find the middle of the linked list
        int mid=count/2;
        // Split the list into two halves
        ListNode *point1=head;

        ListNode *point2=head;
        // Move point1 to the start of the second half
        for(int i=0;i<mid;i++)
        {
            point1=point1->next;
        }
        // Use a stack to reverse the second half of the list
        stack<ListNode*>st; 
        // Push all nodes from the second half onto the stack 
        while(point1!=NULL)

        {
            st.push(point1);
            point1=point1->next;
        }
        // Reorder the list by alternating nodes from the first half and the reversed second half
         
        while(!st.empty())
        {
            st.top()->next=point2->next;
            point2->next=st.top();
            point2=st.top()->next;
            st.pop();

        }
        // Set the next of the last node to NULL to terminate the list
        point2->next=nullptr;



    }
};
int main() {
    // Example usage:
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution sol;
    sol.reorderList(head);

    // Print the reordered list
    ListNode* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    // Free allocated memory
    while (head != NULL) {
        ListNode* next = head->next;
        delete head;
        head = next;
    }

    return 0;
}
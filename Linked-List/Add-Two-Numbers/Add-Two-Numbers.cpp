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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //initially carry is 0
        int carry=0;
        
        int value=0;
        //sum of first digits
        int sum=l1->val+l2->val+carry;
        //value to be stored in the node
        value=(l1->val+l2->val+carry)%10;
        //updating the carry
        carry=sum/10;
        ListNode* answer=new ListNode(value);
        ListNode *answer1=answer;
        l1=l1->next;
        l2=l2->next;
        //1.Adding the two numbers represented by the linked lists
        while(l1!=NULL && l2!=NULL)
        {
            sum=l1->val+l2->val+carry;
            value=(l1->val+l2->val+carry)%10;
            carry=sum/10;
            answer1->next=new ListNode(value);
            l1=l1->next;
            l2=l2->next;
            answer1=answer1->next;
            

        }
        //2.If one linked list is longer than the other, we continue adding the remaining digits along with the carry.
        while(l1!=NULL)
        {
            sum=l1->val+carry;
            value=(l1->val+carry)%10;
            carry=sum/10;
            answer1->next=new ListNode(value);
            l1=l1->next;
            answer1=answer1->next;
        }
        //3.If there is still a carry left after processing both linked lists, we create a new node with the carry value.
        while(l2!=NULL)
        {
            sum=l2->val+carry;
            value=(l2->val+carry)%10;
            carry=sum/10;
            answer1->next=new ListNode(value);
            l2=l2->next;
            answer1=answer1->next;
        }
        //3.1 If there is still a carry left after processing both linked lists, we create a new node with the carry value.
        if(carry!=0)
        {
            answer1->next=new ListNode(carry);
        }
        //4.Returning the head of the resultant linked list.
        return answer;
        
    }
};

int main() {
    // Example usage:
    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

    Solution sol;
    ListNode* result = sol.addTwoNumbers(l1, l2);

    // Print the result
    while (result != nullptr) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;

    // Clean up memory (not shown here for brevity)

    return 0;
}
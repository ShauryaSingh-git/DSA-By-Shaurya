#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
//          1->2->4     
class Solution {
public:

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        int value;
        // edge cases
        if(temp1==NULL){
            return temp2;
        }
        // edge cases
        if(temp2==NULL)
        {
            return temp1;
        }
        // initial step
        if(temp1->val<=temp2->val)
        {
            value=temp1->val;
            temp1=temp1->next;
            
            
        }
        // initial step
        else{
            value=temp2->val;
            temp2=temp2->next;
        }

        ListNode* attach=new ListNode(value);
        ListNode* tail=attach;
        // main logic
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->val<=temp2->val){
                tail->next=temp1;
                temp1=temp1->next;
                tail=tail->next;
            }
        
            else if(temp1->val>temp2->val){
                tail->next=temp2;
                temp2=temp2->next;
                tail=tail->next;
            }
        }
        // if any one of the list is not empty
        while(temp1!=NULL)
        {
                tail->next=temp1;
                temp1=temp1->next;
                tail=tail->next;
        }
        // if any one of the list is not empty
        while(temp2!=NULL)
        {
                tail->next=temp2;
                temp2=temp2->next;
                tail=tail->next;
        } 
        
        return attach;  
        }
};

      int main()
      { 
            ListNode* node1=new ListNode(1);
            ListNode* node2=new ListNode(2);
            ListNode* node3=new ListNode(4);
            node1->next=node2;
            node2->next=node3;
            ListNode* head1=node1;
            
            ListNode* node4=new ListNode(1);
            ListNode* node5=new ListNode(3);
            ListNode* node6=new ListNode(4);
            node4->next=node5;
            node5->next=node6;
            ListNode* head2=node4;
    
            Solution obj;
            ListNode* ans=obj.mergeTwoLists(head1,head2);
            while(ans!=NULL)
            {
                cout<<ans->val<<" ";
                ans=ans->next;
            }
            return 0;
        }
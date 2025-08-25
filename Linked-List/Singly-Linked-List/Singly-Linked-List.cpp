#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Node {
public:
int data;
Node* next;

Node(int val)
{
    data= val;
    next= NULL;

}};

void InsertionAtHead(Node*&head,int val)
{
    Node* temp=new Node(val);
    temp->next= head;
    head = temp;
    
}

void InsertionAtTail(Node* &tail,int val)
{
    Node *temp=new Node(val);
    tail->next=temp;
    tail=temp;
    
}
void InsertionAtMiddle(Node* &head,int position,int val)
{
    if(position==1){
        InsertionAtHead(head,val);
        return;
    }
    Node* &temp=head;
    int count=1;
    while(count<position-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        InsertionAtTail(temp,val);
        return;
    }
    Node* nodetoinsert=new Node(val);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
   
}

void Deletion(Node*&head,int position)
{
    if(position==1)
    {
        head=head->next;
        return;
    }
    else{
        Node* temp=head;
        Node* prev=NULL;
        int count=1;
        while(count<position) //10 12 14 15 lets say i have to delete 14 so i will stop at 12
        {
           prev=temp;
           temp=temp->next;
           count++; 
        }
        prev->next=temp->next;
        temp->next=NULL;
        delete temp;
    }
}

int TransverseAsingleElement(Node* head,int position)
{
    Node* temp=head;
    int count=1;
    while(count<position)
    {
        temp=temp->next;
        count++;
    }
    return temp->data;

}

void Print(Node*&head)
{
    if(head == NULL)
    {
        cout<<"List is empty";
        return;
    }
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int Counter(Node* head)
{
    int count=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

int main() 
{
    Node* node1= new Node(11);
    Node* head=node1;
    Node* tail=node1;
    InsertionAtHead(head,12);
    InsertionAtMiddle(head,2,14);
    InsertionAtTail(tail,15);
    Deletion(head,3);
    Print(head);
    cout<<"Size is "<<Counter(head);
    cout<<endl<<"Element at position 2 is "<<TransverseAsingleElement(head,2);
    cout<<endl;
   
    return 0;
}
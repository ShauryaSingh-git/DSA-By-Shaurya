#include <iostream>
using namespace std;


class Node {
public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};

class MyCircularQueue {
public:
    //head and tail pointer
    Node* head;
    Node* tail = head;
    //capacity and size
    int capacity=0;
    int size=0;

    MyCircularQueue(int k) {
        //1. Initialize your data structure here. Set the size of the queue to be k. 
        capacity=k;
        head=nullptr;
        tail=nullptr;
     }

    bool enQueue(int value) {
     if(head==NULL)
     {
        // Queue is empty, initialize head and tail
        this->head=new Node(value);
        this->tail=head;
        tail->next=head;
        size++;
        return true;
         }
     if(size>=capacity)
     {
        // Queue is full
        return false;
     }
     if(tail!=nullptr)
     {
        // Queue is not full, add new node at the end and update tail
     Node* temp = new Node(value);
        tail->next=temp;
        temp->next=head;
        tail=temp; 
        size++;
        return true;
     }
     // Default return false
     return false;
       
    }

    bool deQueue() {
        //1. Checks whether the circular queue is empty or not.
        if (head == NULL) {
            return false;
        }
        //2. Removes an element from the circular queue. Return true if the operation is successful.
        if(head->next==head)
        {
            head=NULL;
            
            tail=NULL;
            size--;
            return true;
        }
        // More than one element in the queue
        Node* temp = head;
        head = head->next;
        tail->next = head;
        delete temp;
        
         size--;
         // Successful deletion
        return true;
       
    }

    int Front() {
        //1. Get the front item from the queue. If the queue is empty, return -1.
        if (head == NULL) {
            return -1;
        }
        // Return the value of the front node
        return head->val;
    }

    int Rear() {
        //1. Get the last item from the queue. If the queue is empty, return -1.
        if (tail == NULL) {
            return -1;
        }
        // Return the value of the last node
        return tail->val;
    }

    bool isEmpty() {
        //1. Checks whether the circular queue is empty or not.
      if (size==0)
      {
        return true;
      }
      // Queue is not empty
        return false;
    }

    bool isFull() {
        //1. Checks whether the circular queue is full or not.
        if(size==capacity)
        {
            return true;
        }
        // Queue is not full
        return false;
    }
};

int main() {
    MyCircularQueue* obj = new MyCircularQueue(3);
    bool param_1 = obj->enQueue(1);
    bool param_2 = obj->enQueue(2);
    bool param_3 = obj->enQueue(3);
    bool param_4 = obj->enQueue(4); // Should return false as the queue is full
    int param_5 = obj->Rear(); // Should return 3
    bool param_6 = obj->isFull(); // Should return true
    bool param_7 = obj->deQueue(); // Should return true
    bool param_8 = obj->enQueue(4); // Should return true
    int param_9 = obj->Rear(); // Should return 4

    return 0;
}
#include <iostream>
#include <queue>
using namespace std;

// The MyStack class implements a stack using a single queue.
class MyStack {

    queue<int> que1;
public:
    // Constructor initializes the stack.
    MyStack() {
        
    }
    // The push method adds an element to the top of the stack.
    void push(int x) {
        // Push the new element to the queue.
        que1.push(x);
        // Rotate the queue to make the new element the front.
        int n=que1.size();
        // This loop rotates the queue by moving all elements behind the new element.
        for (int i=1;i<que1.size();i++){
            que1.push(que1.front());
            que1.pop();
        }

    }
    // The pop method removes the top element from the stack and returns it.
    int pop() {
        // If the stack is empty, we cannot pop an element.
        int k=que1.front();
        que1.pop();
        // Return the popped element.
        return k;
    }
    // The top method returns the top element of the stack without removing it.
    int top() {
        // If the stack is empty, we cannot return the top element.
        return que1.front();

    }
    // The empty method checks if the stack is empty.
    bool empty() {
        if(que1.empty()){
            return true;
        }
        // If the queue is not empty, the stack is not empty.
        else{
            return false;
        }
    }
};
//this is the testing mainfunction for the above class
int main() {
    MyStack myStack;
    myStack.push(1);
    myStack.push(2);
    cout << "Top element: " << myStack.top() << endl;    // returns 2
    cout << "Popped element: " << myStack.pop() << endl; // returns 2
    cout << "Is stack empty? " << (myStack.empty() ? "Yes" : "No") << endl; // returns false
    return 0;
}
#include <iostream>
#include <stack>
using namespace std;
// The MinStack class implements a stack that supports push, pop, top, and retrieving the minimum element in constant time.
// It uses two stacks: one for the main elements and another for tracking the minimum elements.
class MinStack {

    stack<int> s1;
    // s1 is the main stack that stores all elements.
    // s2 is the auxiliary stack that keeps track of the minimum elements.
    stack<int>s2;
public:
    // Constructor initializes the MinStack.
    MinStack() {
        
    }
    // The push method adds an element to the top of the stack and updates the minimum stack if necessary.
    void push(int val) {
        s1.push(val);
        // If the minimum stack is empty or the new value is less than or equal to the current minimum, push it onto the minimum stack.
        // This ensures that the minimum stack always has the smallest element at the top.
        if(s2.empty()||s2.top()>=s1.top()){
            s2.push(s1.top());
        }
        
    }
    // The pop method removes the top element from the stack and updates the minimum stack if necessary.
    // If the popped element is the same as the current minimum, it is also removed from
    void pop() {
        if(s2.top()==s1.top()){
            s2.pop();
        }
        // Pop the top element from the main stack.
        s1.pop();
        
    }
    // The top method returns the top element of the stack without removing it.
    // It retrieves the top element from the main stack.
    int top() {
        return s1.top();
    }
    // The getMin method returns the minimum element in the stack without removing it.
    // It retrieves the top element from the minimum stack, which is always the smallest element in
    int getMin() {
        return s2.top();
    }
};

int main() {
    MinStack* obj = new MinStack();
    obj->push(1);
    obj->push(2);
    cout << "Top element: " << obj->top() << endl; // returns 2
    cout << "Minimum element: " << obj->getMin() << endl; // returns 1
    obj->pop();
    cout << "Top element after pop: " << obj->top() << endl; // returns 1
    cout << "Minimum element after pop: " << obj->getMin() << endl; // returns 1
    return 0;
}
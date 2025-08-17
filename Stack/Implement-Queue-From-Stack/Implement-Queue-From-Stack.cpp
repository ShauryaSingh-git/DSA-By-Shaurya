#include <iostream>
#include <stack>
#include <vector>
using namespace std;
// The MyQueue class implements a queue using two stacks.
class MyQueue
{

    stack<int> st;
    stack<int> st2;

public:
    // Constructor initializes the queue.
    MyQueue()
    {
    }

    // The push method adds an element to the back of the queue.
    void push(int x)
    {
        st.push(x);
    }
    // The pop method removes the front element from the queue and returns it.
    int pop()
    {
        // If the queue is empty, we cannot pop an element.
        int n = st.size();
        int ans;

        while (!st.empty())
        {
            // Move elements from the first stack to the second stack.
            st2.push(st.top());
            st.pop();
        }
        // Now, the top of the second stack is the front of the queue.
        ans = st2.top();
        st2.pop();

        // Move all elements back to the first stack to maintain the original order.
        while (!st2.empty())
        {
            // Push elements back to the first stack.
            st.push(st2.top());
            st2.pop();
        }
        return ans;
    }
    // The peek method returns the front element of the queue without removing it.
    int peek()
    {
        // If the queue is empty, we cannot return the front element.
        while (!st.empty())
        {
            st2.push(st.top());
            st.pop();
        }
        // Now, the top of the second stack is the front of the queue.
        int k = st2.top();
        // We do not pop it, just return it.
        while (!st2.empty())
        {
            st.push(st2.top());
            st2.pop();
        }
        // Return the front element of the queue.
        return k;
    }
    // The empty method checks if the queue is empty.
    bool empty()
    {
        // If the first stack is empty, the queue is empty.
        if (st.empty())
        {
            return true;
        }
        // If the first stack is not empty, the queue is not empty.
        else
        {
            return false;
        }
    }
};
// This is the testing main function for the above class
int main()
{
    MyQueue myQueue;
    myQueue.push(1);
    myQueue.push(2);
    cout << "Front element: " << myQueue.peek() << endl;                    // returns 1
    cout << "Popped element: " << myQueue.pop() << endl;                    // returns 1
    cout << "Is queue empty? " << (myQueue.empty() ? "Yes" : "No") << endl; // returns false
    return 0;
}
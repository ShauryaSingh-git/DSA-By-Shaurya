#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};
class Solution {
public:
    Node* copyRandomList(Node* head) {
         if (!head) return nullptr;

        // Step 1: Create a map to store original → copy mapping
        unordered_map<Node*, Node*> mp;

        Node* temp = head;

        // Step 2: First pass → copy nodes (only value) and store mapping
        while (temp) {
            mp[temp] = new Node(temp->val);
            temp = temp->next;
        }

        // Step 3: Second pass → assign next and random using the map
        temp = head;
        while (temp) {
            mp[temp]->next   = mp[temp->next];   // connect copy next
            mp[temp]->random = mp[temp->random]; // connect copy random
            temp = temp->next;
        }

        // Step 4: Return head of copied list
        return mp[head];
    }
};

int main() {
    // Example usage:
    Node* head = new Node(7);
    head->next = new Node(13);
    head->next->next = new Node(11);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(1);

    head->random = nullptr;
    head->next->random = head;
    head->next->next->random = head->next->next->next->next;
    head->next->next->next->random = head->next->next;
    head->next->next->next->next->random = head;

    Solution sol;
    Node* copiedListHead = sol.copyRandomList(head);

    // Print the copied list to verify
    Node* temp = copiedListHead;
    while (temp) {
        cout << "Node Value: " << temp->val << ", ";
        if (temp->random)
            cout << "Random points to: " << temp->random->val << endl;
        else
            cout << "Random points to: nullptr" << endl;
        temp = temp->next;
    }

    return 0;
}
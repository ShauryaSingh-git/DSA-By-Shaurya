#include <iostream>
using namespace std;

// Definition of ListNode
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Solution class
class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* temp = head;
        ListNode* temp2 = head;
        int count;
        if (head == nullptr || head->next == nullptr) {
            return false;
        }
        while (temp != nullptr) {
            count = 1;
            while (count <= 2 && temp != nullptr) {
                temp = temp->next;
                count++;
            }
            temp2 = temp2->next;
            if (temp == temp2) {
                return true;
            }
        }
        return false;
    }
};

// Main function to test
int main() {
    // Creating nodes
    ListNode* head = new ListNode(3);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(0);
    ListNode* node4 = new ListNode(-4);

    // Linking nodes
    head->next = node2;
    node2->next = node3;
    node3->next = node4;

    // Uncomment the line below to create a cycle
    node4->next = node2;  // Creates a cycle (tail connects back to node2)

    Solution sol;
    if (sol.hasCycle(head)) {
        cout << "Cycle detected!" << endl;
    } else {
        cout << "No cycle detected." << endl;
    }

    // Note: If a cycle exists, we cannot safely delete nodes, as it would loop forever
    return 0;
}

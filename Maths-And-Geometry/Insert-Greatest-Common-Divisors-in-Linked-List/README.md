# Insert Greatest Common Divisors in Linked List

- [Problem No- 2807](https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/)
- **Difficulty:** Medium

## Problem Statement

Given the head of a linked list `head`, in which each node contains an integer value, insert a new node between every pair of consecutive nodes. The value of the new node should be the greatest common divisor (GCD) of the values of the two consecutive nodes it will be inserted between.

For example:
- Input: 12 -> 15 -> 9
- Output: 12 -> gcd(12,15)=3 -> 15 -> gcd(15,9)=3 -> 9
- Result: 12 -> 3 -> 15 -> 3 -> 9

---

## Approach

**Recursive Solution:**
1. Base case: If the current node has no next node, return it as is
2. Recursively process the rest of the list first
3. Create a new node with GCD of current and next node values
4. Insert it between the current and next node
5. Return the current node

**Why recursion works here:**
- Processes from the end of the list backwards
- Ensures all GCD nodes are inserted correctly without losing references
- Natural way to handle node insertion in linked lists

---

## Implementation

```cpp

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==nullptr)return head;
        
        head->next=insertGreatestCommonDivisors(head->next);
        ListNode* node=new ListNode(gcd(head->val,head->next->val));
        node->next=head->next;
        head->next=node;
        return head;
    }
};

int main()
{
    // Example usage:
    Solution sol;
    ListNode* head = new ListNode(12);
    head->next = new ListNode(15);
    head->next->next = new ListNode(9);

    ListNode* modifiedHead = sol.insertGreatestCommonDivisors(head);

    // Print the modified linked list
    ListNode* current = modifiedHead;
    while (current != nullptr) {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;

    return 0;
}
```

---

## Examples

| Input | Output |
|-------|--------|
| 12 -> 15 -> 9 | 12 -> 3 -> 15 -> 3 -> 9 |
| 18 -> 6 -> 9 -> 15 | 18 -> 6 -> 6 -> 1 -> 6 -> 3 -> 9 -> 3 -> 15 |
| 5 | 5 |
| 1 -> 1 | 1 -> 1 -> 1 |

---

## Complexity

- **Time:** O(n * log(max_val)), where n is the number of nodes and log(max_val) is the time for GCD calculation
- **Space:** O(n) for recursion stack (worst case)

---

## Notes

- Uses Euclidean algorithm for efficient GCD computation
- Recursive approach naturally handles node insertion
- GCD of consecutive nodes creates new intermediate nodes
- GCD(a, b) = GCD(b, a % b) is the core of the algorithm
- New nodes are inserted between existing consecutive nodes without modifying original values

---
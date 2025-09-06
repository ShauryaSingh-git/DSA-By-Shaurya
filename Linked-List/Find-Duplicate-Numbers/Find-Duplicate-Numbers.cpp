#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Floyd's Tortoise and Hare (Cycle Detection) algorithm
        int slow = 0;
        int fast = 0;
        // Finding the intersection point in the cycle
        do {
            // Move slow pointer by one step
            slow = nums[slow];
            // Move fast pointer by two steps
            fast = nums[nums[fast]];
            // Continue until they meet
        } while (slow != fast);
        slow = 0;
        // Finding the entrance to the cycle
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        // The duplicate number is the entrance to the cycle
        return slow;
    }
};
int main() {
    Solution solution;
    vector<int> nums = {1, 3, 4, 2, 2};
    int duplicate = solution.findDuplicate(nums);
    cout << "The duplicate number is: " << duplicate << endl; // Output: The duplicate number is: 2
    return 0;
}

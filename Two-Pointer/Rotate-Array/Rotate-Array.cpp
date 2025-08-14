#include <iostream>
#include <vector>
using namespace std;
// The Solution class contains the method to rotate an array to the right by k positions.

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> arr1;
        // If k is greater than the size of the array, we take the modulo to avoid unnecessary rotations.
        k = k % nums.size();
        // If k is 0, no rotation is needed.
        for (int i = nums.size() - k; i < nums.size(); i++) {
            arr1.push_back(nums[i]);
        }
        // We then append the remaining elements from the start of the array.
        for (int i = 0; i < nums.size() - k; i++) {
            arr1.push_back(nums[i]);
        }
        // Finally, we copy the rotated elements back to the original array.
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = arr1[i];
        }
    }
};
// This code rotates the elements of an array to the right by k positions.
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    sol.rotate(nums, k);

    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
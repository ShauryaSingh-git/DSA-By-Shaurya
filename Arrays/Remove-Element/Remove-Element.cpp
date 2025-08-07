#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;//this is our override pointer which is set as 0 for now
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];   //if value is not equals to val then it overrides the element at the kth index with the current value removing the val 
                k++;
            }
        }
        return k;  // returning the size or the last index of the operation
    }
};


int main() {
    Solution sol;

    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int newLength = sol.removeElement(nums, val);

    cout << "New length: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:  
int searchInsert(vector<int>& nums, int target) {
        // binary search
        int mid;
        //zero based indexing
        int st = 0;
        int end = nums.size() - 1;
        //loop runs until start is less than or equal to end
        while (end >= st) {
            //finding mid
            mid = st + (end - st) / 2;
            //comparing mid with target
            if (target > nums[mid]) {
                st = mid + 1;

            }
             
            else if (target < nums[mid]) {
                end = mid - 1;
            }
             else if (target == nums[mid]) {
                return mid;
            }
        }
        //if target is not found, then st will be the position where target can be inserted
        return st;
    }
    };
    int main() {
        Solution obj;
        vector<int> nums = {1, 3, 5, 6};
        int target = 5;
        cout << obj.searchInsert(nums, target) << endl;
        return 0;
    }
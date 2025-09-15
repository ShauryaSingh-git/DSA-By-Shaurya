#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
// Binary Search Algorithm
    int search(vector<int>& nums, int target) {
        // int n=nums.size();
        int mid;
        int st=0;
        //end index
        int end=nums.size()-1;
        //condition for binary search
        while(end>=st){
            //finding mid
            mid = st +(end-st)/2;
            //comparing mid with target
            if(target>nums[mid]){
                st=mid+1;

            }
            //if target is less than mid
            else if(target<nums[mid]){
                end=mid-1; 
            }
            //if target is equal to mid
            else{
                return mid;
            }

        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    int result = sol.search(nums, target);
    cout << "Index of target " << target << " is: " << result << endl; // Output: 4
    return 0;
}
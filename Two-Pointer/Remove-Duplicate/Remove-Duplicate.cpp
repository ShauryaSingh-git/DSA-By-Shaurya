#include<iostream>
#include<vector>
#include<string>
#include<cassert>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique=1;// first is always as it is as if duplicate then it will still be there example= index(0) will always be there
        for(int i =1;i<nums.size();i++){
            if (nums[i]!=nums[i-1])//if nums[i] is not equal to nums[i+1] then we will override it on the nums itself which will increase only when there is a unique element and will only override
            {
                nums[unique]=nums[i];
                unique++;    //incrementing unique
                       }
           
        }
        return unique;
    }
};

int main() {
    // Test input
    vector<int> nums = {0, 0, 1, 1, 2, 2, 3, 3, 4};

    Solution sol;
    int k = sol.removeDuplicates(nums);

    cout << "Number of unique elements: " << k << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
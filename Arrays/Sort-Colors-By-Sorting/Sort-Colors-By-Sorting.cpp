#include <iostream>
#include <vector>   
using namespace std;

class Solution {
public:
    // Function to sort colors using insertion sort
    void sortColors(vector<int>& nums) {
        //we will do insertion sort as the constraints are good with it
        for(int i=1;i<nums.size();i++)
        {   
            //current element to be placed in the sorted part of the array
            int current=nums[i];
            int j=i-1;;
            //shifting elements to the right to find the correct position for current
            while(j>=0){
                //if current is less than the element at j, we shift the element at j to the right
                if(current<nums[j]){
                    nums[j+1]=nums[j];
                    j--;
                }
                //if current is greater than or equal to the element at j, we break the loop
                else
                {
                    break;
                }
               
            } 
            //placing the current element at its correct position
            nums[j+1]=current;
        }
     
    }
};
// Time Complexity: O(n^2)
// Space Complexity: O(1)
int main() {
    Solution solution;
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    solution.sortColors(nums);
    
    for(int num : nums) {
        cout << num << " ";
    }
    return 0;
}
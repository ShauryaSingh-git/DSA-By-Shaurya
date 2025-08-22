#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

    vector<int> majorityElement(vector<int>& nums) {
        // This function finds all elements in the array that appear more than n/3 times.
        // It first sorts the array and then counts occurrences of each element.
        vector<int> answer;
        // Sort the input array to group identical elements together.
        sort(nums.begin(),nums.end());
        // Initialize a counter to track the occurrences of the current element.
        int count=0;
        // Iterate through the sorted array to count occurrences of each element.
        for(int i =0 ; i<nums.size(); i++)
        {
            // If it's the first element, increment the count.
            if(i==0)
            {
                count++;
            }   // For subsequent elements, check if it's different from the previous one.
            else
            {   // If it's different, reset the count to 1 for the new element.
                if(nums[i]!=nums[i-1])
                {
                    count=0;
                    count++;

                }
                // If it's the same as the previous element, increment the count.
                else
                {
                    count++;
                }
            }
            // If the count exceeds n/3 and the element is not already in the answer, add it.
            if(count>(float)nums.size()/3 && answer.empty() ||count>(float)nums.size()/3 && nums[i]!=answer.back())
            {
                answer.push_back(nums[i]);
            }
        }
        // Return the list of majority elements found.
        return answer;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3,2,3};
    vector<int> result = sol.majorityElement(nums);
    cout << "Majority elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
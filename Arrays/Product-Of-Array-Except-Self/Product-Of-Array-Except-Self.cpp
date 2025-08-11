#include <iostream>
#include <vector>
#include <numeric> 
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);
        vector<int> answer(n, 1);
        
        // Pass 1: Fill the prefix array.
        // prefix[i] will store the product of all elements to the left of nums[i].
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }
        
        // Pass 2: Fill the suffix array.
        // suffix[i] will store the product of all elements to the right of nums[i].
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }
        
        // Pass 3: Construct the final answer by multiplying prefix and suffix products.
        for (int i = 0; i < n; i++) {
            answer[i] = prefix[i] * suffix[i];
        }
        
        return answer;
    }
};
// The main function to test the Solution class
int main() {
    // 1. Create an instance of the Solution class
    Solution sol;

    // 2. Define an example input vector
    vector<int> nums = {1, 2, 3, 4};

    // 3. Call the function to get the result
    vector<int> result = sol.productExceptSelf(nums);

    // 4. Print the original input and the final result
    cout << "Input Array:  [";
    for (size_t i = 0; i < nums.size(); ++i) {
        cout << nums[i] << (i == nums.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;

    cout << "Output Array: [";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i] << (i == result.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl; // Expected Output: [24, 12, 8, 6]

    return 0;
}
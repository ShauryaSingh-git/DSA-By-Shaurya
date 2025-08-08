


#include <iostream>
#include <vector>
using namespace std;


//This is the solution block of the problem
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> answer(2 * nums.size());         //we have created a vector of double the size of nums because the size is doubled while concatinating
        
        //this loop is to copy orignal elements inside the nums vector for example nums=[1,2,3] so answer is [1,2,3]
        for (int i = 0; i < nums.size(); i++) {
            answer[i] = nums[i];
        }
        //this loop is to copy the elements again of the nums vector behind the previous elements of answer vectors , previous answer=[1,2,3], after this loop answer=[1,2,3,1,2,3]
        for (int i = 0; i < nums.size(); i++) {
            answer[nums.size() + i] = nums[i];
        }
        //now we have returned the answer vector/array
        return answer;
    }
};

//This is the main function of the program , if you want to check it on your code editor.

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 1};

    vector<int> result = sol.getConcatenation(nums);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
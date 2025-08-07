/*
Problem number-1929 Leetcode
This problem is very basic , that is why it is our first array problem
let the array/vector be [1,2,1] and its size n = 3 which is generally the number of elements inside the array

This problems just wants us to produce its concatination which is it wants the same elememts copied or concatinated behind the original elements few examples-
arr=[1,2,1] size n=3     concatination = arr=[1,2,1,1,2,1] and size N=2n=6
arr=[3,6,7,4,11] size n=5     concatination = arr=[3,6,7,4,11,3,6,7,4,11] and size N=2n=6

PREREQUISITES-
1. Concepts of vector
2. Loops

TIME COMPLEXITY- 0(n)
1. first for loop - 0(n)
2. second for loop - 0(n)
total= n+n= 2n {we dont count constants} , so time complexity =O(n)

*/


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
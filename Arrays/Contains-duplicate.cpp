/*
Problem number-217 Contains duplicate  OUR SCORE- easy
This problem is very easy , we have been given an array we just have to return true or false 
if duplicate - true
if distinct -false

EXAMPLE-
1. Arr={1,2,2,1,3} answer= true (1 & 2 are repeating values)
2. Arr2={4,5,2} answer = false (no repeating values)

PREREQUISITES-
1. Vector concept
2. Loop concept

TIME COMPLEXITY-
1. Sort function (algoritm header)- sorts the array ---- O(nlog n)
2. for loop ---- O(n)
total = O(n)+ O(nlogn)= n(logn + 1)------------ forget the constants
total= O(nlogn)

LOGIC-
1. lets say arr=[1,2,3,4,2]
2. first we'll sort, now, sorted(arr)=[1,2,2,3,4]
3. we will check arr[0] to arr[1] , arr[1] to arr[2] and so on 
   example-
   arr[0]=1 and arr[1]=2 -- not equal
   arr[1]=2 and arr[2]=2 -- equal --- exit loop by returning true

   4. if no equal value found then just return false
*/


//headers
#include<iostream>
#include<vector>
#include<algorithm>
// for better cout and cin usage
using namespace std;



// this is the code block provided in the leetcode
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //inbuild sorting function that we can use if our sort is cleared , if it is not I WILL BE PROVIDING CODES ON EACH TYPE OF SORTS SOON....
        sort(nums.begin(),nums.end());

        //FOR LOOP TO CHECK i AND i+1
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                //returning true as soon as nums[i]=nums[i+1]
                return true;
            }
        }
        //returning false if loop fails , that means that there is no duplicates
        return false;
    }
};




int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1};

    bool result = sol.containsDuplicate(nums);

    if (result)
        cout << "Contains duplicate" << endl;
    else
        cout << "Does not contain duplicate" << endl;

    return 0;
}
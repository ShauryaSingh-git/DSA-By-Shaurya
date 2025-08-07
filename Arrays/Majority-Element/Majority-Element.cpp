

/*
Problem number-169 Majority element  OUR SCORE- easy to medium
This problem is very easy , we have been given an array we just have to find the element which has been in the clear majority in the numbers, clear majority is when a number of element > size of array/2
CONDITION-
1. It is mentioned that there is a element in array which will be in majority always.

EXAMPLE-
1. arr={1,2,2,2,4} here 2 is clear majority
2. arr={4,4,4,2,1,2,4} 4 is in clear majority as no of 4s > size of array /2

PREREQUISITES-
1. Control statements
2. Loop concept
3. Vectors concept

TIME COMPLEXITY-
O(n)--- because of the for loop

LOGIC-
1. we will take a variable called freaquency where it will count the number of repetations occured
2. another variable major which will have the major element which occurs in the array

WORKING-
1.LETS SAY- Arr={1,2,2,4,4,4,4}, we will initialize freaquency and major element from zero

arr=     { 1,  2,  2,  4,  4,  4,  4}
freaq=     1   0   1   0   1    2   3
major =    1   2   2    4   4   4   4

lets say freaq of 4 =4 and freaq of 2 = 2 so which is greater , that is 4 so it will be the greater in number between all of the elemts as the freaquency will either be >0 or =0 as it is half the array
we will change our majority element once a freaquency =0 occurs
*/

#include <iostream>
#include <vector>
using namespace std;


class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int freaq = 0; //freaquency 
        int major = 0; // majority element 
        for (int i = 0; i < nums.size(); i++)
        {    //changing majority element once freaquency is 0
            if (freaq == 0)
            {
                major = nums[i];
            }
            //increasing freaquency once the elemets are same , majority= current number
            if (major == nums[i])
            {
                freaq++;  // inc freaq
            }
            else if (major != nums[i])
            {// decreasing freaquency if the majority element is not equals to the current number
                freaq--;
            }
        }
        return major;  //returning majority element 
    }
};



int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    Solution sol;
    int result = sol.majorityElement(nums);

    cout << "Majority Element: " << result << endl;

    return 0;
}

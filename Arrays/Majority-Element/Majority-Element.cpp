

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

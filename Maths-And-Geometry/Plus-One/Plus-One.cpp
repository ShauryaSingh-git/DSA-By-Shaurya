#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //carry will be 1 as we need to add 1
        int carry=1;
        //addition variable
        int adder=0;
        //traverse from last digit to first
        for(int i=digits.size()-1;i>=1;i--)
        {
            //calculate adder and carry
            adder=(digits[i]+carry)%10;
            carry=(digits[i]+carry)/10;
            digits[i]=adder;
            
        }
        //after loop check if there is still carry left for the most significant digit
        if(carry!=0 && digits[0]+carry>=10)
        {
            //if yes then we need to add an extra digit at the start
            digits.insert(digits.begin(),1);
            digits[1]=adder;
        }
        //if no carry just add to the most significant digit
        else {
        digits[0]=digits[0]+carry;
        }
        return digits;
    }
};

int main() {
    Solution sol;
    vector<int> digits = {9, 9, 9};
    vector<int> result = sol.plusOne(digits);
    
    cout << "Result after plus one: ";
    for (int digit : result) {
        cout << digit << " ";
    }
    cout << endl;

    return 0;
}
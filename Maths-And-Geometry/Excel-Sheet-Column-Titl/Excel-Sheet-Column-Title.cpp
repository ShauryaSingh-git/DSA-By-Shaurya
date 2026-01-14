#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string answer;
        int ans;
        while(columnNumber!=0)
        {   
            ans=(columnNumber-1)%26;
            columnNumber=(columnNumber-1)/26;
            answer.push_back(ans+65);
        }
        int left=0;
        int right=answer.size()-1;
        while(left<right)
        {
            swap(answer[left],answer[right]);
            left++;
            right--;
        }
        return answer;
    }
};

int main()
{
    Solution sol;
    int columnNumber;
    cout<<"Enter the column number: ";
    cin>>columnNumber;
    string result=sol.convertToTitle(columnNumber);
    cout<<"The corresponding Excel sheet column title is: "<<result<<endl;
    return 0;
}
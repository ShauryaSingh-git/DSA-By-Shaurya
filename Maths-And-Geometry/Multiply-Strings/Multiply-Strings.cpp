#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int m = num1.size(); // length of num1
        int n = num2.size(); // length of num2

        // reverse to put least-significant digit at index 0
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        // m + n is enough space for the result digits
        vector<int> arr(m + n, 0);

        // Multiply digits: iterate according to each string's length
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                arr[i + j] += (num1[i] - '0') * (num2[j] - '0');
            }
        }

        // Propagate carry through the array
        for (int i = 0; i < (int)arr.size() - 1; ++i) {
            arr[i + 1] += arr[i] / 10;
            arr[i] %= 10;
        }

        // Remove leading zeros (highest indices)
        while (!arr.empty() && arr.back() == 0) arr.pop_back();

        // Build result string in correct order
        string ans;
        ans.reserve(arr.size());
        for (int i = (int)arr.size() - 1; i >= 0; --i) {
            ans.push_back(char('0' + arr[i]));
        }

        return ans;
    }
};

int main()
{
    Solution s;
    string num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    string result=s.multiply(num1,num2);
    cout<<"The product of "<<num1<<" and "<<num2<<" is: "<<result<<endl;
    return 0;
}
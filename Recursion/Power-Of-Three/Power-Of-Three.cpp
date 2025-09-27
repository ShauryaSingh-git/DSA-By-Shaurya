#include <iostream>
using namespace std;


class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)return false;
        if(n==1)return true;
        if(n%3!=0)return false;
        return isPowerOfThree(n/3);
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;
    if(sol.isPowerOfThree(n)) {
        cout << n << " is a power of three." << endl;
    } else {
        cout << n << " is not a power of three." << endl;
    }
    return 0;
}
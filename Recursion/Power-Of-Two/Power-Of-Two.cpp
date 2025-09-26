#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    // Recursive function to check if n is a power of two
    bool isPowerOfTwo(int n) {
        //n base cases
        if(n<=0)return false;
        //because 2^0=1
        if(n==1)return true;
        //if n is odd then it cannot be power of 2
        if(n%2!=0)return false;
        //recursive call
        return isPowerOfTwo(n/2);
    }
};

// Example usage
int main() {
    Solution sol;
    int n = 16; // Example input
    if (sol.isPowerOfTwo(n)) {
        cout << n << " is a power of two." << endl;
    } else {
        cout << n << " is not a power of two." << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        //base case
        if(n==0 ||n==1)return n;
        //recursive case
        return fib(n-1)+fib(n-2);
    }
};

int main() {
    int n;
    cin >> n;
    Solution obj;
    cout << obj.fib(n) << endl;
    return 0;
}

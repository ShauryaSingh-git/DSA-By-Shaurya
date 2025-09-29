#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)return false;
        if(n==1)return true;
        if(n%4!=0)return false;
        return isPowerOfFour(n/4);
    }
};

int main() {
    Solution obj;
    int n;
    cin>>n;
    if(obj.isPowerOfFour(n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
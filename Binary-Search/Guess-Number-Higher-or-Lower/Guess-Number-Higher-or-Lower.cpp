#include <bits/stdc++.h>
using namespace std;

int guess(int num); // Forward declaration of guess API.
class Solution {
public:
    int guessNumber(int n) {
        int st=1;
        int end=n;
        int mid;
        while(end>=st){
            mid=st+(end-st)/2;
            int p=guess(mid);
            if(guess(mid)==-1){
                end=mid-1;
            }
            else if(guess(mid)==0){
                return mid;
            }
            else{
                st=mid+1;
            }
        }
        return mid;
    }
};
int guess(int num){
    int pick=6;
    if(num==pick){
        return 0;
    }
    else if(num>pick){
        return -1;
    }
    else{
        return 1;
    }
}
int main(){
    Solution obj;
    int n=10;
    cout<<obj.guessNumber(n);
    return 0;
}


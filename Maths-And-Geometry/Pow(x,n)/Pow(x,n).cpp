#include<iostream>
using namespace std;


class Solution {
public:
    double myPow(double x, long int n) {
        double answer=1;
        if(n==0)return 1.0;
        if(x==1)return 1.0;
        if(n<0){
            x=(1.0)/x;
            n=-n;
        }
        while(n>0){
            if(n%2==1){
            answer*=x;
            }
            x*=x;
            n/=2;
        }
        return answer;
    }
};
int main()
{
    Solution s;
    double x;
    long int n;
    cout<<"Enter the base (x): ";
    cin>>x;
    cout<<"Enter the exponent (n): ";
    cin>>n;
    double result=s.myPow(x,n);
    cout<<x<<" raised to the power "<<n<<" is: "<<result<<endl;
    return 0;
}
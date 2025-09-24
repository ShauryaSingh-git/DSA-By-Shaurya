#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int n)
{
    if(n==0 || n==1)
    {
        return true;

    }
    if(!sorted(arr,n-1))
        return false;
    sorted(arr,n-1);

    if(arr[n-1]>=arr[n-2])
    {
        return true;

    }
    else{
        return false;
    }
    return true;
}

int main()
{
    int arr[]={1,2,3,4,5,11,7,8,9};
    int n=9;
    if(sorted(arr,n))
    {
        cout<<"Array is sorted"<<endl;

    }
    else{
        cout<<"Array is not sorted"<<endl;

    }
}
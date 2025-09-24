#include<bits/stdc++.h>
using namespace std;

// Recursive binary search function
int binarySearch(int arr[], int left, int right, int target) {
    // TODO: Implement recursive binary search logic
    if(left>right)
    {
        return -1;
    }
    int mid=left+(right-left)/2;
    if(arr[mid]==target)
    {
        return mid;
    }
    else if(arr[mid]>target)
    {
        return binarySearch(arr,left,mid-1,target);
    }
    else{
        return binarySearch(arr,mid+1,right,target);
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    int result = binarySearch(arr, 0, n - 1, target);
    cout << "Index of target: " << result << endl;
    return 0;
}

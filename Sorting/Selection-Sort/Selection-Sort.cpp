#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&arr) {

    // The selectionSort function sorts an array using the selection sort algorithm.
        for ( int i=0; i<arr.size()-1; i++){
            // For each element, find the smallest element in the unsorted part of the array.
            for(int j = i+1; j<arr.size();j++){
                // If the current element is smaller than the smallest found so far, swap them.
                if(arr[j]<arr[i]){
                    // Swap the elements to place the smallest element at the current position.
                    swap(arr[j],arr[i]);
                }
            }
        }
    
    }
// This is the testing main function for the above function
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    selectionSort(arr);
    
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}

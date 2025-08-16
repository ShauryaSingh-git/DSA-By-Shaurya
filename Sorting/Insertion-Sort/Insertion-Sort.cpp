#include <bits/stdc++.h>
using namespace std;
// The insertionSort function sorts an array using the insertion sort algorithm.
void insertionSort(int n, vector<int> &arr){
    // Loop through each element in the array starting from the second element.
          for(int i =1 ; i<arr.size(); i++){
            // The key is the current element to be inserted into the sorted part of the array.
            int key= arr[i];
            // Find the position where the key should be inserted.
            int j=i-1;
            // Shift elements of arr[0..i-1], that are greater than key, to one position ahead of their current position.
            while(j>=0 && arr[j]>key){
                // Move the element one position to the right.
                arr[j+1]=arr[j];
                j--;
            }
        // Insert the key at the correct position.
            arr[j+1]=key;

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
    
    insertionSort(n, arr);
    
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
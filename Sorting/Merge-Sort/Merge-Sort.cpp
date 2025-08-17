#include <iostream>
#include <vector>       
using namespace std;

class Solution {
public:
// The merge function merges two sorted halves of the array.
void merge(vector<int>&nums,int low,int mid,int high){
    // Create a temporary vector to hold the merged result.
    int i=low;
    // Start from the beginning of the first half.
    int j=mid+1;
    // Start from the beginning of the second half.
    vector<int>answer;
    // Merge the two halves until one of them is exhausted.
    while(i<=mid && j<=high){
        // Compare the current elements of both halves.
        if(nums[i]<=nums[j]){
            answer.push_back(nums[i]);
            i++;
        }
        // If the current element of the second half is smaller, add it to the result.
        else{
            answer.push_back(nums[j]);
            j++;
        }
        }
        // If there are remaining elements in the first half, add them to the result.
        while(i<=mid){
            answer.push_back(nums[i]);
            i++;
        }
        // If there are remaining elements in the second half, add them to the result.
        while(j<=high){
            answer.push_back(nums[j]);
            j++;
        }
        // Copy the merged result back to the original array.
        for(int start=low;start<=high;start++)
        {
            nums[start]=answer[start-low];
        }
    
}
                            
// The ms function recursively divides the array into halves and merges them.
void ms(vector<int>&nums,int low, int high){
    // Base case: if the subarray has one or zero elements, it's already sorted.
    if(low==high) return;
    // Calculate the midpoint of the current subarray.
    int mid =(low+high)/2;
    // Recursively sort the left half and the right half, then merge them.
    ms(nums,low,mid);
    // Sort the left half.
    ms(nums,mid+1,high);
    // Sort the right half.
    merge(nums,low,mid,high);
}
// The sortArray function is the entry point for sorting the array using merge sort.
    vector<int> sortArray(vector<int>& nums) {
              // Call the ms function to sort the entire array.
           ms(nums,0,nums.size()-1);
              // Return the sorted array.
           return nums;
    }
};      
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
    
    Solution sol;
    sol.sortArray(arr);
    
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
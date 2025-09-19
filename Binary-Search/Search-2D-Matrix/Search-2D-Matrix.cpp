#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Edge case: if the matrix is empty, return false
        int high=matrix.size()*matrix[0].size()-1;
        // Initialize binary search boundaries
        int low=0;
        int mid=0;
        // Get the number of columns in the matrix
        int colno=matrix[0].size();
        // Perform binary search on the virtual 1D array representation of the 2D matrix
        while(low<=high)
        {
            // Calculate mid to avoid potential overflow
            mid=low+(high-low)/2;
            // Map the 1D mid index back to 2D row and column indices
            int row=mid/colno;
            int col=mid%colno;
            // Check if the target is found at the current mid position
            if(target==matrix[row][col])
            {
                return true;
            }
            // If the target is greater than the current mid value, search in the right half
            else if(matrix[row][col]<=target)
            {
                low=mid+1;
            }
            // If the target is less than the current mid value, search in the left half
            else{
                high=mid-1;
            }

        }
        // If the target is not found,
        return false;
    }
};

int main()
{
    Solution obj;
    vector<vector<int>> matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=3;
    cout<<obj.searchMatrix(matrix,target);
    return 0;
}
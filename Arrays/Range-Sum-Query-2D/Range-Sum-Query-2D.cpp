#include <iostream>
#include <vector>   
using namespace std;

// The NumMatrix class implements a 2D matrix that supports efficient sum region queries.
class NumMatrix {
public:
 // dp is a 2D vector that stores the cumulative sums of the matrix.       
vector<vector<int>> dp;
    NumMatrix(vector<vector<int>>& matrix) {
        // Initialize the dp array with an extra row and column to handle boundary conditions.
        if(matrix.empty()||matrix[0].empty()){
            return;
        }
        // Get the number of rows and columns in the input matrix.
        int row=matrix.size()-1;
        int col=matrix[0].size()-1;
        // Resize the dp array to have (row+2) x (col+2) dimensions, initialized to 0.
        dp.resize(row+2,vector<int>(col+2,0));
        // Fill the dp array with cumulative sums using the inclusion-exclusion principle.
        for(int i=0;i<=matrix.size()-1;i++)
        {
            for(int j=0;j<=matrix[i].size()-1;j++)
            {
                // Calculate the cumulative sum for dp[i+1][j+1].
                dp[i+1][j+1]=matrix[i][j]-dp[i][j]+dp[i+1][j]+dp[i][j+1];

            }
        }
    }
    //  The sumRegion method returns the sum of elements within the specified rectangular region.
    int sumRegion(int row1, int col1, int row2, int col2) {
        // Use the precomputed dp array to calculate the sum of the specified region in constant time.
        return dp[row2+1][col2+1]-dp[row2+1][col1]-dp[row1][col2+1]+dp[row1][col1];
    }
};

int main() {
    vector<vector<int>> matrix = {
        {3, 0, 1, 4, 2},
        {5, 6, 3, 2, 1},
        {1, 2, 0, 1, 5},
        {4, 1, 0, 1, 7},
        {1, 0, 3, 0, 5}
    };
    NumMatrix* obj = new NumMatrix(matrix);
    cout << "Sum of region (2, 1) to (4, 3): " << obj->sumRegion(2, 1, 4, 3) << endl; // Output: 8
    cout << "Sum of region (1, 1) to (2, 2): " << obj->sumRegion(1, 1, 2, 2) << endl; // Output: 11
    cout << "Sum of region (1, 2) to (2, 4): " << obj->sumRegion(1, 2, 2, 4) << endl; // Output: 12
    return 0;
}
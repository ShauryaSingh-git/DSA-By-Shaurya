#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        // Create a new matrix with swapped dimensions
        vector<vector<int>> arr(matrix[0].size(),vector<int>(matrix.size()));
        // Fill the new matrix with transposed values
        for(int i=0;i<matrix[0].size();i++)
        {
            // Iterate through each row of the original matrix
            for(int j=0;j<matrix.size();j++)
            {
                arr[i][j]=matrix[j][i];
            }
        }
        // Return the transposed matrix
        return arr;
    }
};

int main()
{
    Solution s;
    int row,col;
    cout<<"Enter number of rows: ";
    cin>>row;
    cout<<"Enter number of columns: ";
    cin>>col;
    vector<vector<int>> matrix(row,vector<int>(col));
    cout<<"Enter the elements of the matrix:"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>matrix[i][j];
        }
    }
    vector<vector<int>> transposedMatrix=s.transpose(matrix);
    cout<<"Transposed Matrix:"<<endl;
    for(int i=0;i<transposedMatrix.size();i++)
    {
        for(int j=0;j<transposedMatrix[0].size();j++)
        {
            cout<<transposedMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
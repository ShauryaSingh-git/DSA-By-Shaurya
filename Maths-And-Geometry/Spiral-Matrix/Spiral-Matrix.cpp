#include <iostream>
#include <vector>
using namespace std;



class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int right=matrix[0].size()-1;
            int left=0;
            int top=0;
            int bottom=matrix.size()-1;
            vector<int>arr;
        while(top<=bottom && left<=right)
        {
            
            
            for(int i=left;i<=right;i++)
            {
                arr.push_back(matrix[top][i]);
                
            }
            
            top++;

            for(int i=top;i<=bottom;i++)
            {
                arr.push_back(matrix[i][right]);
            }

            right--;
            if(top>bottom)break;

            for(int i=right;i>=left;i--){
                arr.push_back(matrix[bottom][i]);
            }

            bottom--;
            if(left>right)break;

            for(int i=bottom;i>=top;i--)
            {
                arr.push_back(matrix[i][left]);
            }
            left++;
               
        }
        
        return arr;
    }
};


int main()
{
    Solution sol;
    int m,n;
    cout<<"Enter number of rows: ";
    cin>>m;
    cout<<"Enter number of columns: ";
    cin>>n;
    vector<vector<int>>matrix(m,vector<int>(n));
    cout<<"Enter the elements of the matrix:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    vector<int>result=sol.spiralOrder(matrix);
    cout<<"The spiral order of the given matrix is: ";
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}
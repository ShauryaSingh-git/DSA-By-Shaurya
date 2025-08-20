#include <iostream>
#include <vector>
#include <algorithm> // for min and max functions
using namespace std;
// Class to implement the solution for the Container With Most Water problem
class Solution {
public:
    // Function to calculate the maximum area of water that can be contained
    int maxArea(vector<int>& height) {
        // Two-pointer approach to find the maximum area
        int i=0;
        int j=height.size()-1;
        int heightt=0;
        int maxarea=0;
        // Iterate until the two pointers meet
        // The left pointer starts at the beginning and the right pointer at the end of the array
        // We calculate the area formed by the lines at these two pointers and update the maximum area found
        // We then move the pointer pointing to the shorter line inward, hoping to find a taller line that could potentially increase the area
        // The process continues until the two pointers cross each other
        while(i<j)
        {

            heightt=min(height[i],height[j]);
            int width=j-i;

            int area=heightt*width;
            // Update the maximum area found so far
            maxarea=max(maxarea,area);
            // Move the pointer pointing to the shorter line inward
            if(height[i]<height[j])
            {
                i++;
            }
            // If the left line is taller or equal, move the right pointer inward
            else
            {
                j--;
            }
        }
        // Return the maximum area found
        return maxarea;
    }
};

int main() {
    Solution solution;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int maxArea = solution.maxArea(height);
    
    cout << "Maximum area of water container: " << maxArea << endl;
    return 0;
}
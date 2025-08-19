#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;
// Class to implement the solution for the Boats to Save People problem
class Solution {
public:
    // Function to calculate the minimum number of boats needed to save people
    // people: vector of weights of people
    // limit: weight limit of each boat
    // The function uses a two-pointer approach after sorting the people by weight
    int numRescueBoats(vector<int>& people, int limit) {
        
        int low=0;
        int high=people.size()-1;
        int outcome=0;
        // Sort the people by their weights
        sort(people.begin(),people.end());
        // Use two pointers to find pairs of people that can share a boat
        // low pointer starts from the lightest person, high pointer starts from the heaviest
        // We will iterate until low pointer exceeds high pointer
        while(low<=high)
        {
            // If both pointers meet, we have one person left who needs a boat
            if(low==high)
            {
                outcome++;
                break;
            }
            // If the lightest and heaviest person can share a boat, we move both pointers
            else if(people[low]+people[high]<=limit)
            {
                high--;
                low++;
                outcome++;

            }
            // If they cannot share a boat, we only move the high pointer
            else if(people[low]+people[high]>limit)
            {
                high--;
                outcome++;
            }

        }
        // Return the total number of boats needed
        return outcome;
    }
};
// Time Complexity: O(n log n) due to sorting
// Space Complexity: O(1) as we are using constant space

int main() {
    Solution solution;
    vector<int> people = {1, 2, 3, 4, 5};
    int limit = 5;
    int boatsNeeded = solution.numRescueBoats(people, limit);
    
    cout << "Number of boats needed: " << boatsNeeded << endl;
    return 0;
}
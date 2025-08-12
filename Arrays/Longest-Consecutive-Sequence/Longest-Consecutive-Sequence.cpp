#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
// The Solution class contains the method to find the longest consecutive sequence in an array.
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> sets(nums.begin(), nums.end());
        int streak = 0;
        // Initialize longeststreak to 0 and prev to the first element minus 1.
        int longeststreak = 0;
        // If the set is empty, return 0.
        int prev = *sets.begin() - 1;
        // Iterate through the set of numbers.
        if (sets.empty())
            return 0;
        for (int num : sets) {
            if (num == prev + 1) {
                streak++;

            } else if (num != prev + 1) {
                streak = 1;
            } else {
                return longeststreak;
            }
            // Update the previous number to the current number and check if the streak is the longest.
            prev = num;
            // Update the longest streak if the current streak is longer.
            longeststreak = max(longeststreak, streak);
        }
        return longeststreak;
    }
};
// The main function to test the Solution class
int main() {
    Solution sol;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << "Longest consecutive sequence length: " << sol.longestConsecutive(nums) << endl;
    return 0;
}
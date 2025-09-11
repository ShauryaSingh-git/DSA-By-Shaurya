#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Hashing solution
        unordered_map<int, int> maps; // value -> index
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int first = nums[i];
            int second = target - nums[i];
            if (maps.find(second) != maps.end()) {
                ans.push_back(i);
                ans.push_back(maps[second]);
                return ans;
            }
            maps[first] = i;
        }
        return ans;
    }
};

int main() {
    // Example input
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution obj;
    vector<int> result = obj.twoSum(nums, target);

    // Print result
    if (!result.empty()) {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}

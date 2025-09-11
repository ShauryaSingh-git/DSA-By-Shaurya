#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        vector<int> answer;
        while (i < j) {
            if (numbers[i] + numbers[j] == target) {
                answer.push_back(i + 1); // +1 because problem requires 1-based index
                answer.push_back(j + 1);
                break;
            } 
            else if (numbers[i] + numbers[j] > target) {
                j--;
            } 
            else {
                i++;
            }
        }
        return answer;
    }
};

int main() {
    // Example input
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    Solution obj;
    vector<int> result = obj.twoSum(numbers, target);

    // Print result
    if (!result.empty()) {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}

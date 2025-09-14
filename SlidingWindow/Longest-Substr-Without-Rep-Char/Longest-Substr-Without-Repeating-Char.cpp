#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    
    int lengthOfLongestSubstring(string s) {
        // Hash map to store the last positions of each character
        unordered_map<char, int> char_map;
        // Initialize the maximum length and the left pointer of the window
        int max_length = 0;
        int left = 0;
        // Iterate through the string with the right pointer
        for (int right = 0; right < s.length(); ++right) {
            char current_char = s[right];
            // If the character is found in the map and is within the current window
            if (char_map.count(current_char) && char_map[current_char] >= left) 
            {
                left = char_map[current_char] + 1;
            }
            // Update the last position of the character
            char_map[current_char] = right;
            max_length = max(max_length, right - left + 1);
        }
    
        return max_length;
    } 
    
};

int main() {
    Solution sol;
    string s = "abcabcbb";
    cout << sol.lengthOfLongestSubstring(s) << endl; // Output: 3
    return 0;
}
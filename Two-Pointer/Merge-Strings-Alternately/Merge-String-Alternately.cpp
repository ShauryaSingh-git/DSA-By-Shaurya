#include <iostream>
#include <string>   
using namespace std;
// Class to implement the solution for the Merge String Alternately problem
class Solution {
public:
    // Function to merge two strings alternately
    string mergeAlternately(string word1, string word2) {
        // Two-pointer approach to merge the strings
        // We use two indices a and b to track the current position in word1 and word
        int a = 0;
        int b = 0;
        int i = 0;
        // We will build the merged string by alternating characters from word1 and word2
        string answer="";
        // We continue until we have processed all characters from both strings
        // If one string is longer, we will append the remaining characters from that string after the
        while (a < word1.size() || b < word2.size()) {
            if (a < word1.size()) {

                answer.push_back(word1[a]);
                
            }
            // If we have characters left in word2, we append them as well
            a++;
            // If we have characters left in word1, we append them
            if (b < word2.size()) {
                answer.push_back(word2[b]);
                
            }
            // Increment the index for word2
            b++;
        }
        // Return the merged string
        return answer;
    }
};


int main() {
    Solution solution;
    string word1 = "abc";
    string word2 = "defgh";
    string result = solution.mergeAlternately(word1, word2);
    
    cout << "Merged string: " << result << endl; // Output: "adbcefg"
    return 0;
}
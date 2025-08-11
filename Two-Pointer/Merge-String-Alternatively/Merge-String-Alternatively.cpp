#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        int a = 0; // word1 pointer
        int b = 0; // word2 pointer
        int i = 0;
        string answer = ""; // string we are returning
        while (a < word1.size() || b < word2.size())//continue until one array has elements remaining
        {
            if (a < word1.size())//if a has elements 
            {
                answer.push_back(word1[a]);//inserting word1 element
            }
            a++;//increasing word1 pointer
            if (b < word2.size())//if word2 exist
            {
                answer.push_back(word2[b]);//insert element of word2
            }
            b++;//increase word2 pointer
        }
        return answer;//returning the string
    }
};
int main()
{
    // 1. Create an instance of the Solution class
    Solution sol;

    // 2. Define some test cases
    string word1_test1 = "abc";
    string word2_test1 = "pqr";

    string word1_test2 = "ab";
    string word2_test2 = "pqrs";

    // 3. Call the function with the test cases and print the results
    string result1 = sol.mergeAlternately(word1_test1, word2_test1);
    cout << "Test Case 1:" << endl;
    cout << "Input: word1 = \"" << word1_test1 << "\", word2 = \"" << word2_test1 << "\"" << endl;
    cout << "Output: \"" << result1 << "\"" << endl; // Expected: "apbqcr"

    cout << "\n--------------------------\n"
         << endl;

    string result2 = sol.mergeAlternately(word1_test2, word2_test2);
    cout << "Test Case 2:" << endl;
    cout << "Input: word1 = \"" << word1_test2 << "\", word2 = \"" << word2_test2 << "\"" << endl;
    cout << "Output: \"" << result2 << "\"" << endl; // Expected: "apbqrs"

    // 4. Signal that the program ran successfully
    return 0;
}
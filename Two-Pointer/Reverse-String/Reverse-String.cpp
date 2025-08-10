#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;
        while (i < j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    std::string input;
    std::getline(std::cin, input);               // read whole line (handles spaces)
    std::vector<char> s(input.begin(), input.end());

    Solution sol;
    sol.reverseString(s);

    for (char c : s) std::cout << c;
    std::cout << '\n';
    return 0;
}
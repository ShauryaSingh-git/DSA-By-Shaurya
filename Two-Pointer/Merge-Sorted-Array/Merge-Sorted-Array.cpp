
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Start merging from the end of both arrays.
        // nums1 has enough space to hold all elements from nums2.
        int i = m - 1;
        int j = n - 1;
        // Write index starts from the end of nums1.
        // m + n is the total number of elements in nums1 after merging.
        int write = m + n - 1;
        while (j >= 0) {
            // If nums1 is exhausted or nums2's current element is larger,
            if (i >= 0 && nums1[i] >= nums2[j]) {
                nums1[write] = nums1[i];
                // Move the pointer in nums1 backwards.
                i--;
            }
            // If nums2's current element is larger or nums1 is exhausted, 
            else {
                nums1[write] = nums2[j];

                j--;
            }
            // Move the write pointer backwards.
            write--;
        }
    }
};


int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    Solution sol;
    sol.merge(nums1, m, nums2, n);

    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
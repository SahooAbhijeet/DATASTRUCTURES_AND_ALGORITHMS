#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void findFirstPositiveNegativePair(vector<int>& nums) {
        int positive = 0, negative = 0;

        // Traverse the array to find the first positive and negative number
        for(int num : nums) {
            if(num > 0 && positive == 0) {
                positive = num;  // Found the first positive number
            }
            else if(num < 0 && negative == 0) {
                negative = num;  // Found the first negative number
            }

            // If both positive and negative numbers are found, print the pair
            if(positive != 0 && negative != 0) {
                cout << "First positive-negative pair: (" << positive << ", " << negative << ")" << endl;
                return;  // Stop further traversal
            }
        }

        // If no valid pair found
        if(positive == 0 || negative == 0) {
            cout << "No valid positive-negative pair found." << endl;
        }
    }
};

int main() {
    Solution obj;
    vector<int> nums = {3, -1, -4, 2, -6, 7};  // Example array

    obj.findFirstPositiveNegativePair(nums);  // Expected output: (3, -1)

    return 0;
}

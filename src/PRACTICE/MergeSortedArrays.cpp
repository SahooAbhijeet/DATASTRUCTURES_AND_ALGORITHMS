#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> merge(vector<int> &arr1, vector<int> &arr2) {
        int i = 0, j = 0;
        vector<int> ans;

        // Merging the two arrays
        while (i < arr1.size() && j < arr2.size()) {
            if (arr1[i] <= arr2[j]) {
                ans.push_back(arr1[i]);
                i++;
            } else {
                ans.push_back(arr2[j]);
                j++;
            }
        }

        // If elements are left in arr1
        while (i < arr1.size()) {
            ans.push_back(arr1[i]);
            i++;
        }

        // If elements are left in arr2
        while (j < arr2.size()) {
            ans.push_back(arr2[j]);
            j++;
        }

        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> arr1 = {1, 2, 3, 5, 6};
    vector<int> arr2 = {4, 7, 8};

    vector<int> ans = obj.merge(arr1, arr2);

    // Printing the merged array
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

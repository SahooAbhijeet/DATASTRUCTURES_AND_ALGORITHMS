#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void findPermutation(vector<int> &nums, vector<vector<int>> &ans, int freq[], vector<int> &ds) {
        if (ds.size() == nums.size()) {
            ans.push_back(ds);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (freq[i] != 1) { // element i is not present in frequency array
                ds.push_back(nums[i]);
                freq[i] = 1;
                findPermutation(nums, ans, freq, ds);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }

    vector<vector<int>> Permutation(vector<int> &nums) {
        vector<vector<int>> ans;
        int freq[nums.size()];
        vector<int> ds;
        for (int i = 0; i < nums.size(); i++)
            freq[i] = 0;
        findPermutation(nums, ans, freq, ds);
        return ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 3};
    Solution obj;
    vector<vector<int>> ans = obj.Permutation(nums);

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }

    return 0;
}

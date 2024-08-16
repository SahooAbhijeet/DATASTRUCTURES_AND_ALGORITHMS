#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<vector<int>> res;
        vector<int> subsets;
        createSubsets(nums, 0, res, subsets);
        return res;
    }
    public:
    void createSubsets(vector<int> &nums, int ind, vector<vector<int>> &res, vector<int> &subsets) {
        if(ind == nums.size()){
            res.push_back(subsets);
            return;
        } 
        subsets.push_back(nums[ind]);
        createSubsets(nums,ind+1,res,subsets);
        subsets.pop_back();
        createSubsets(nums,ind+1,res,subsets);
    }
};

int main() {
    vector<int> nums = {3,1,2};
    Solution obj;
    vector<vector<int>> res = obj.subsets(nums);
    for(auto subset : res) {
        for(int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }
     return 0;
}
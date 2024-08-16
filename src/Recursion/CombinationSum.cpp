#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    void findCombination(int ind, vector<int> &arr, int target, vector<vector<int>> &ans, vector<int> &ds) {
        if(ind == arr.size()){
            if(target == 0) {
                ans.push_back(ds);
            }
            return;

        }
        if(arr[ind] <= target) {
        ds.push_back(arr[ind]);
        findCombination(ind,arr,target-arr[ind],ans,ds);
        ds.pop_back();
        }
        findCombination(ind+1,arr,target,ans,ds);
    }
    public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        findCombination(0,candidates,target,ans,ds);
        return ans;
    }

};
int main() {
    vector<int> nums = {2,3,6,7};
    int target = 7;
    Solution obj;
    vector<vector<int>> ans = obj.combinationSum(nums,target);

    for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++)
      cout << ans[i][j] << " ";
        cout << endl;
    }


    return 0;
}
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    int n = nums.size();
   unordered_map<int, int> mpp;
   for(int i = 0; i < nums.size(); i++) {
    int num = nums[i];
    int numLeft = target - num;
    if(mpp.find(numLeft) != mpp.end()) {
        return {mpp[numLeft], i};
        
    }
    mpp[num] = i;
   }
   return {-1,-1};
}

int main() {

    vector<int> nums = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = twoSum(nums,target);
    cout << "This is the answer: [" << ans[0] << ", " << ans[1] << "]" << endl;
    return 0;    
}
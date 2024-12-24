#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> MoveZeroesEnd(vector<int> nums) {
        int n = nums.size();
        int j = -1;
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) {
                j = i;
                break;
            }
        }
        if(j == -1) return nums;

        for(int i = j+1; i < n; i++) {
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
        return nums;
    }
};

int main()
{
    Solution obj;
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    
    vector<int> ans = obj.MoveZeroesEnd(arr);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}
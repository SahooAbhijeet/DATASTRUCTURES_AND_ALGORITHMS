#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:

    void solve(int ind, vector<int> &arr, int n, vector<int> &ans, int sum) {
        if(ind == n) {
        ans.push_back(sum);
        return;
        }

        solve(ind+1, arr, n, ans, sum + arr[ind]);// if element is picked
        solve(ind+1, arr, n, ans, sum);// if element is not picked
    }
    
    vector<int> subsetSums(vector < int > arr, int n) {
        vector<int> ans;
        solve(0, arr, n, ans, 0);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
int main() {
    Solution obj;
    vector<int> arr = {3,1,2};
    int n = arr.size();
    vector<int> ans = obj.subsetSums(arr, n);
    sort(ans.begin(),ans.end());
    cout << "The sum of each subset is " <<  endl;
    for(auto sum: ans) {
        cout << sum << " ";
    }
    cout << endl;
    return 0;
}
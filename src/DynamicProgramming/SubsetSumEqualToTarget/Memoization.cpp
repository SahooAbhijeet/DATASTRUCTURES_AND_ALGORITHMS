#include <bits/stdc++.h>
using namespace std;

// ** RECURSIVE APPROACH ** //
// bool subsetSumToK(int ind, int target, vector<int>& arr) {
//     if(target == 0) return true;
//     if(ind == 0) return arr[0] == target;

//     bool notTake = subsetSumToK(ind-1, target, arr);
//     bool take = false;

//     if(target >= arr[ind]){
//         take = subsetSumToK(ind-1, target-arr[ind], arr);
//     }
//     return take || notTake;
// }

// int main() {
//    vector<int> arr = {1,2,3,4};
//    int target = 4;
//    int ind = arr.size();

//    if(subsetSumToK(ind, target, arr)) 
//     cout << "Subset Sum found" << endl;
//     else 
//    cout << "Not Found target" << endl;
   
//     return 0;
// }



// ** MEMOIZATION APPROACH ** //


#include <bits/stdc++.h>
using namespace std;

bool subsetSum(int ind, int target, vector<int> &arr, vector<vector<int>> &dp) {
    if(target == 0) return true;
    if(ind == 0) return arr[0] == target;

    if(dp[ind][target] != -1) return dp[ind][target];

    bool nottake = subsetSum(ind-1, target, arr, dp);

    bool take = false;

    if(target >= arr[ind]) 
    take = subsetSum(ind-1, target - arr[ind], arr, dp);
    return dp[ind][target] = take || nottake;
}
bool subsetSumToK(int n, int k, vector<int>& arr) {
    vector<vector<int>> dp(n,vector<int>(k+1,-1));

    return subsetSum(n-1, k, arr, dp);
}


int main() {
    vector<int> arr = {1,2,3,4};
    int target = 40;
    int n = arr.size();

    if(subsetSumToK(n,target,arr)) 
    cout << "Found" << endl;
    else 
    cout << "Not found" << endl;
    return 0;
}
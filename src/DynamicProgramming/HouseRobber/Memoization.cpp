#include <bits/stdc++.h>
using namespace std;

int solveHouseRobber(int ind, vector<int> &arr, vector<int> &dp) {
    if(ind == 0) return arr[ind];
    if(ind < 0) return 0;

    if(dp[ind] != -1) return dp[ind];

    int pick = arr[ind] + solveHouseRobber(ind-2,arr,dp);
    int notPick = 0 + solveHouseRobber(ind-1,arr,dp);

    return dp[ind] = max(pick,notPick);
}
int houseRobber(int n, vector<int> &arr){
    vector<int> dp(n,-1);
    return solveHouseRobber(n-1,arr,dp);
}
int main(){
    vector<int> arr{2, 1, 4, 9};
    int n = arr.size();
    cout << houseRobber(n,arr);
    return 0;
}
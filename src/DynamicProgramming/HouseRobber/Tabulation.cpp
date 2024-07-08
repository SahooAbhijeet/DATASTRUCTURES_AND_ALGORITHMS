#include <bits/stdc++.h>
using namespace std;

int solveHouseRobber(int n,vector<int> &arr, vector<int> &dp) {
    dp[0] = arr[0];
    for(int i = 1; i < n; i++) {

        int pick = arr[i];
        if(i > 1) 
            pick = pick + dp[i-2];
            int notPick = 0 + dp[i-1];
            dp[i] = max(pick,notPick);
    }
    return dp[n-1];
}
int houseRobber(int n,vector<int> &arr) {
    vector<int> dp(n,-1);
    return solveHouseRobber(n,arr,dp);
}
int main() {
    vector<int> arr{2, 1, 4, 9};
    int n = arr.size();
    cout << houseRobber(n,arr);
    return 0;
}
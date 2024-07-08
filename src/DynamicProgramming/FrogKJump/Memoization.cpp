#include<bits/stdc++.h>
using namespace std;

int solveKSteps(int ind, vector<int> &height, int k, vector<int> &dp) {
    if(ind == 0) return 0;
    if(dp[ind] != -1) {
        return dp[ind];
    }
    int minSteps = INT_MAX;
    for(int j =1; j <= k;j++) {
        if(ind-j >= 0) {
            int jump = solveKSteps(ind-j,height,k,dp) + abs(height[ind] - height[ind-j]);
            minSteps = min(jump,minSteps);
        }
    }
    return dp[ind] = minSteps;
}

int solve(int n, vector<int> &height, int k) {
    vector<int> dp(n,-1);
    return solveKSteps(n-1,height,k,dp);
}
int main() {
    vector<int> height{30, 10, 60, 10, 60, 50};
    int n = height.size();
    int  k = 2;
    vector<int> dp(n,-1);
    cout << solve(n,height,k);
    return 0;
}
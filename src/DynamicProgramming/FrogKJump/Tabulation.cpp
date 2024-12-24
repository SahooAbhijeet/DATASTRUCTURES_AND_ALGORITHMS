#include<bits/stdc++.h>
using namespace std;

int solveKJumps(int n, int k, vector<int> &height, vector<int> &dp) {
    dp[0] = 0;

    for(int i = 1; i < n; i++) {
        int minSteps = INT_MAX;
        for(int j =1; j<= k; j++) {
            if(i-j >= 0) {
                int jump = dp[i-j] + abs(height[i] - height[i-j]);
                minSteps = min(jump,minSteps);
            }
        }
        dp[i] = minSteps;
    }
    return dp[n-1];
}

int solve(int n, int k, vector<int>& height) {
    vector<int> dp(n,-1);
    return solveKJumps(n,k,height,dp);
}
int main() {
      vector<int> height{30, 10, 60, 10, 60, 50};
      int n = height.size();
      int k = 3;
      vector<int> dp(n,-1);
      cout << solve(n,k,height);
}

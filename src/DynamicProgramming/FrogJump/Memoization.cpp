#include<bits/stdc++.h>
using namespace std;

int solve(int ind, vector<int>& height, vector<int>& dp){
    if(ind == 0) return 0;

    while(dp[ind] != -1) return dp[ind];

    int oneJump = solve(ind-1,height,dp) + abs(height[ind] - height[ind-1]);
    int twoJump = INT_MAX;

    if(ind > 1) {
        twoJump = solve(ind-2,height,dp) + abs(height[ind] - height[ind-2]);
    }
    return min(oneJump,twoJump);
}

int main() {

  vector<int> height{30,10,60 , 10 , 60 , 50};
  int n=height.size();
  vector<int> dp(n,-1);
  cout<<solve(n-1,height,dp);
}

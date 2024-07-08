#include<bits/stdc++.h>
using namespace std;

int main() {
   vector<int> height{30,10,60,10,60,50};
    int n = height.size();
    vector<int> dp(n,-1);
     dp[0] = 0;
    for(int i = 1; i < n; i++) {
        int twoJump = INT_MAX;
        int oneJump = dp[i-1] + abs(height[i] - height[i-1]);
        if(n > 1) {
             twoJump = dp[i-2] + abs(height[i] - height[i-2]);
            dp[i] = min(oneJump,twoJump);
        }
       
    }
     cout << dp[n-1];
}
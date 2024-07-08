#include<bits/stdc++.h>
using namespace std;

int climbingStairs(int n) {
    vector<int> dp(n+1, -1);

   if(n == 0 || n == 1) return 1;

   while(dp[n] != -1) return dp[n];

   return dp[n] = climbingStairs(n-1) + climbingStairs(n-2);

}

int main() {
    int n = 6;
    cout << climbingStairs(n) << "";
    return 0;
}
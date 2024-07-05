#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fibonacci(int n, vector<int>& dp){

     if(n <= 1) return n;

     while(dp[n] != -1) return dp[n]; // created the dp array with n+1 size and intialised with -1. If the array is not initialised with -1 then we had solved that subproblem so we could simply return that ans or else we can compute the problem and return that ans.
     return dp[n] = fibonacci(n-1,dp) + fibonacci(n-2,dp);

    }
};

int main() {
    int n = 5;
    vector<int> dp(n+1,-1); // created the dp with n+1 size and initialised with -1
    Solution obj;
    cout << obj.fibonacci(n,dp);
    return 0;
}

 
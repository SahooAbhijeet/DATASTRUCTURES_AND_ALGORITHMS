#include <bits/stdc++.h>
using namespace std;

int uniquePathOne(int i, int j, vector<vector<int>> &dp) {
    if (i == 0 && j == 0)
        return 1;
    if (i < 0 || j < 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];

    int up = uniquePathOne(i - 1, j, dp);
    int left = uniquePathOne(i, j - 1, dp);
    return dp[i][j] = up + left;
}

int countUnique(int m, int n) {
    vector<vector<int>> dp(m, vector<int>(n, -1));
    return uniquePathOne(m - 1, n - 1, dp);
}

int main() {
    int m = 3;
    int n = 2;

    cout << "Number of ways to reach (" << m - 1 << ", " << n - 1 << "): " << countUnique(m, n) << endl;
    return 0;
}
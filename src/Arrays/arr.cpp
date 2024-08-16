#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

int minCost(vector<int>& A, vector<int>& B, int N) {
    vector<int> dp(N + 1, INT_MAX);
    dp[N] = 0;
    for (int i = N; i >= 1; i--) {
        for (int j = i - 1; j >= 1; j--) {
            dp[j] = min(dp[j], dp[i] + A[j] + (i - j) * B[j]);
        }
    }
    return dp[1] % MOD;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N + 1), B(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    for (int i = 1; i <= N; i++) {
        cin >> B[i];
    }
    cout << minCost(A, B, N) << endl;
    return 0;
}
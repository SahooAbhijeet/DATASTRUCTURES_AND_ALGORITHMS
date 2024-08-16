#include <bits/stdc++.h>
using namespace std;

int uniquePathOne(int i, int j, vector<vector<int>> &dp) {

    
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
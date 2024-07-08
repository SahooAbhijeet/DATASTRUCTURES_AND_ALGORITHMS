#include<bits/stdc++.h>
using namespace std;

int climbingStairs(int n) {

    int prev = 1;
    int prev2 = 1;

    for(int i = 2; i <= n;i++) {
        int curr = prev + prev2;
        prev2 = prev;
        prev = curr;
    }
    return prev;
}

int main() {
    int n = 6;
    cout << climbingStairs(n);
    return 0;
}
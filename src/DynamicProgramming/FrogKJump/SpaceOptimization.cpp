#include <bits/stdc++.h>
using namespace std;


int solveKJumps(int n, int k, vector<int> &height) {
    int prev = 0;
    int prev2 = 0;
    for(int i = 1;i <= n; i++) {
        int minSteps = INT_MAX;
        for(int j = 1;j<=k;j++) {
            if(i-j >= 0){
                int curr = prev+prev2;
                prev2 = prev;
                prev = curr;
            }
        }
       prev = min(minSteps,curr);
    }
    return prev;
}

int main() {
      vector<int> height{30, 10, 60, 10, 60, 50};
      int n = height.size();
      int k = 3;
      cout << solveKJumps(n,k,height);
      return 0;
}

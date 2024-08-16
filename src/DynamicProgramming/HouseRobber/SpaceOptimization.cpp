#include <bits/stdc++.h>
using namespace std;

int houseRobber(vector<int> &arr, int n) {
    int prev = arr[0];
    int prev2 = 0;

    for(int  i = 1; i< n; i++) {
        int pick = arr[i];
        if(i > 1) 
        pick = pick + prev2;
        int notPick = 0 + prev;
        int curr = max(pick,notPick);
        prev2 = prev;
        prev = curr;
    }
    return prev;
}
int main() {
    vector<int> arr{2, 1, 4, 9};
    int n = arr.size();
    cout << houseRobber(arr,n);
    return 0;
}
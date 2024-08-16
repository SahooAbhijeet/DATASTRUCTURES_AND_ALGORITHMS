#include <bits/stdc++.h>
using namespace std;

long long int houseRobber2(vector<int> &arr, int n) {
    n = arr.size();
   long long int prev = arr[0];
    long long int prev2 = 0;

    for(int  i = 1; i< n; i++) {
        long long int pick = arr[i];
        if(i > 1) 
        pick = pick + prev2;
         long long int notPick = 0 + prev;
         long long int curr = max(pick,notPick);
        prev2 = prev;
        prev = curr;
    }
    return prev;
}

long long int houseRobber(int n, vector<int> &arr){
    vector<int> arr1;
    vector<int> arr2;

    if (n == 1) return arr[0];

    for(int i = 0; i < n; i++) {
        if(i != 0) arr1.push_back(arr[i]);
        if(i != n-1) arr2.push_back(arr[i]);
    }
        long long int ans1 = houseRobber2(arr1,n);
        long long int ans2 = houseRobber2(arr2,n);

        return max(ans1, ans2);
    }

int main() {
    vector<int> arr{2, 1, 4, 9};
    int n = arr.size();
    cout << houseRobber(n,arr);
    return 0;
}
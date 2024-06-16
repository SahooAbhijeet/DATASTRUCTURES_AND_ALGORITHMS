#include <bits/stdc++.h>

using namespace std;

long long maximumSumSubarray(vector<int> &arr) {
   
    long long sum = 0;
    long long maxi = LONG_MIN;
    for(int i = 0; i<n; i++) {
        sum+=arr[i];
        if(sum > maxi) {
            maxi = sum;
        }
        if(sum < 0) {
            sum = 0;
        }
    }
    return maxi;
}

int main() {
    vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    long long maxSum = maximumSumSubarray(arr);
    cout <<  "The maximum sum subarray is: " << maxSum << " ";
}
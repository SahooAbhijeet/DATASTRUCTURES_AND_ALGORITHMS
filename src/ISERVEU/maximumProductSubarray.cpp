#include <bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int> &arr) {
    int n = arr.size();
    int prefix = 1;
    int suffix = 1;
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(prefix == 0) prefix = 1;
        if(suffix == 0) suffix = 1;
        prefix = prefix * arr[i];
        suffix = suffix * arr[n-i-1];
        maxi = max(maxi, max(prefix, suffix));
    }
    return maxi;
}

int main()
{
    vector<int> arr = {1,-2,3,4};
    cout << "Maximum product: " << maxProductSubArray(arr) << endl;
    return 0;
}
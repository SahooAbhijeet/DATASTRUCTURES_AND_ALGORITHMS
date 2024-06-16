#include <bits/stdc++.h>

using namespace std;

int maximumConsequetiveOnes(vector<int> &arr) {
    int n = arr.size();
    int cnt = 0;
    int maxi = 0;
    for(int i=0;i<n;i++) {
        if(arr[i] == 1) {
            cnt++;
        } else {
          cnt = 0;
        }
        maxi = max(maxi,cnt);
    }
    return maxi;
}

int main() {
    vector<int> arr = {1,2,3,1,1,4,5,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = maximumConsequetiveOnes(arr);
    cout << "The max consequetive ones are: " << ans;
    return 0;
}
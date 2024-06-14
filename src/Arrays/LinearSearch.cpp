#include <bits/stdc++.h>

using namespace std;

int linearSearch(int arr[], int n, int k) {
    for(int i=0;i<n;i++) {
        if(arr[i] == k) 
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 55;
    int ans = linearSearch(arr,n,k);
    cout << ans << " ";
}
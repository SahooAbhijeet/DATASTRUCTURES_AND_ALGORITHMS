#include<bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> &arr, int i) {
    int n = arr.size();
    if(i >= n/2) return arr;
    swap(arr[i], arr[n-i-1]);
    reverse(arr, i+1);
    return arr;
}

int main() {
    vector<int> arr = {1,2,4,5,3};
    vector<int> res = reverse(arr, 0);
    for(auto it: res) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
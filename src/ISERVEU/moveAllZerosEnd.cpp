#include<bits/stdc++.h>
using namespace std;

vector<int> movesZerosEnd(vector<int> &arr) {
    int n = arr.size();
    vector<int> temp;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }

    int nz = temp.size();
    for(int i =0; i < nz; i++) {
        arr[i] = temp[i];
    }

    for(int i = nz; i < n; i++) {
        arr[i] = 0;
    }
    return arr;
}

int main() {
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = arr.size();
    vector<int> result = movesZerosEnd(arr);
    for(auto &it: result) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
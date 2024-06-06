#include <bits/stdc++.h>

using namespace std;

int implementLowerbound(vector<int> &arr, int x) {
    int n = arr.size();
    for(int i = 0; i<n; i++) {
        if(arr[i] >= x) 
        return i;
    }
    return n;
}

int implementUpperbound(vector<int> &arr, int x) {
    int n = arr.size();
    for(int i =0;i<n;i++) {
        if(arr[i] > x) {
            return i;
        }
    }
    return n;
}

int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = arr.size();
    int x = 9;
    int ind = implementLowerbound(arr, x);
    int index = implementUpperbound(arr, x);
    cout << "The lower bound is the index: " << ind << endl;
    cout << "The upper bound is the index: " << index << endl;
    return 0;
}
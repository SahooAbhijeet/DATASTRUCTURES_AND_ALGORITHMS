#include <bits/stdc++.h>

using namespace std;

vector<int> MoveAllZerosEndOfTheArrayBruteForce(vector<int> arr, int n) {
   vector<int> temp;
    for(int i=0;i<n;i++) {
        if(arr[i] != 0)
        temp.push_back(arr[i]);
    }

    int nonzero = temp.size();
    for(int i=0;i<nonzero;i++) {
        arr[i] = temp[i];
    }

    for (int i = nonzero; i < n; i++) {
        arr[i] = 0;
    }
    return arr;
}

vector<int> MoveAllZerosEndOfTheArrayOptimal(vector<int> arr, int n) {
    int j = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }

    if (j == -1)
        return arr;

    for (int i = j + 1; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;
}

int main() {
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans = MoveAllZerosEndOfTheArrayOptimal(arr, n);
    vector<int> sol = MoveAllZerosEndOfTheArrayBruteForce(arr, n);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    for (auto &it : sol) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int NumberAppearsOnceAndOthersTwiceBruteForce(vector<int> &arr) {
    int n = arr.size();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        for (int j = 0; j < n; i++) {
            if (arr[j] == num) {
                cnt++;
            }
            if (cnt == 1)
                return num;
        }
        return -1;
    }
}

int NumberAppearsOnceAndOthersTwiceBetter(vector<int> &arr)
{
}
int NumberAppearsOnceAndOthersTwiceOptimal(vector<int> &arr) {
    int n = arr.size();
    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main() {
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = NumberAppearsOnceAndOthersTwiceOptimal(arr);
    int sol = NumberAppearsOnceAndOthersTwiceBruteForce(arr);
    cout << "The single element is: " << ans << endl;
    cout << "The single element is: " << sol << endl;
    return 0;
}
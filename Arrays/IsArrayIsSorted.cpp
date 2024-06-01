#include <bits/stdc++.h>

using namespace std;

int optimal(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}
int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    bool ans = optimal(arr1, n);
    if (ans)
        cout << "True" << arr1 << endl;
    else
        cout << "False" << arr1 << endl;
}
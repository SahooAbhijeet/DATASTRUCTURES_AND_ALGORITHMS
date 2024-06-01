#include <bits/stdc++.h>
using namespace std;

int bruteForce(int arr[], int n) {
    set<int> set;
    for (int i = 0; i < n; i++) {
        set.insert(arr[i]);
    }
    int index = 0;
    int k = set.size();
    for (auto it : set) {
        arr[index] = it;
        index++;
    }
    return k;
}

int optimal(int arr[], int n) {
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    // int k = bruteForce(arr, n);
    int m = optimal(arr, n);
    cout << "The array size is: " << m << " " << endl;
    cout << "The array after removing duplicate elements is: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
}
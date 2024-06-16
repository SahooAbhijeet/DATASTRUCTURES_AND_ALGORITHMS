#include <bits/stdc++.h>

using namespace std;

// BRUTE-FORCE APPROACH
int largestElementInAnArray(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
} 

// OPTIMAL APPROACH
int largestElement(int arr[], int n) {
    int largest = arr[0];
    for(int i = 0; i<n; i++) {
        if(arr[i] > largest)
        largest = arr[i];
    }
    return largest;
}

int main() {
    vector<int> arr1 = {5,8,6,9,7,5};
    cout << "The largest element in an array:" << largestElementInAnArray(arr1) << endl;

    int arr2[] = {5,8,6,9,7,5};
    int n =6;
    int max = largestElement(arr2, n);
    cout << "The largest element in the array is: " << max << endl;
    return 0; 
}
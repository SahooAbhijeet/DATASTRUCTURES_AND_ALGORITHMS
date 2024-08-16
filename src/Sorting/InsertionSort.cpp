#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {

    for(int i = 0; i<=n-1; i++) {
        int j =i;
        while(j > 0 && arr[j-1] > arr[j]) {
            swap(arr[j-1], arr[j]);
                j--;
        }
    }


    cout << " After sorting: " << " ";
    for(int i = 0; i< n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {13,46,24,52,20,9};
    int n = 6;
    cout << "Array to be sort: ";
    for(int i =0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertionSort(arr,n);
    return 0;
}

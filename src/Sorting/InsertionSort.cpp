#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {

    for(int i = 0; i<=n-1; i++) { // take the elemnt and place it in correct order
        int j =i;
        while(j > 0 && arr[j-1] > arr[j]) { // looking at the left and checking if it is greater and swapping it till it is greater
            swap(arr[j-1], arr[j]);
            // int temp = arr[j-1];
            // arr[j-1] = arr[j];
            // arr[j] = temp;
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

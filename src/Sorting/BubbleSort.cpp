#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i=0;i<n-1;i++) { //push the maxium to last by adjacent swaps
           
        for(int j=0;j<n-i;j++ ) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

cout << "After sorting: " << " ";
    for(int i =0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
  int arr[] = {13,46,24,52,20,9};
  int n = 6;
  cout << "Array to be sort:" << " ";
  for(int i = 0; i<n;i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
bubbleSort(arr, n);
  return 0;
}
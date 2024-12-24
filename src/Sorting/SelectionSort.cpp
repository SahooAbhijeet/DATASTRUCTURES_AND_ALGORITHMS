#include<bits/stdc++.h>
using namespace std;

    void selectionSort(int arr[], int n) {
        for(int i = 0;i < n-1; i++) {  //here first of all traverse the array and think arr[i] as minimum then traverse the array again with j = i+1 and if arr[j] < arr[mini] then now j = mini and then swap it 
            int minIndex = i;
            for(int j = i+1; j < n;j++) {
                if(arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            swap(arr[minIndex],arr[i]);
        }
        cout << "Selection sort:" << endl;
        for(int i = 0;i<n;i++) {
            cout << arr[i] << " ";
        }
    }


int main() {
  int arr[] = {13,46,24,52,20,9};
  int n = 6;
  cout << "Array to be sort:" << endl;
  for(int i = 0; i<n;i++) {
    cout << arr[i] << " ";
  }
selectionSort(arr, n);
  return 0;
}
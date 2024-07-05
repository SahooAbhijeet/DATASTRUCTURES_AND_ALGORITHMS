#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low; // initialise the left pointer with the low
    int right = mid+1; //in itialise the right pointer with mid+1

    while(left <= mid && right <= high) { // checks if the left arr and right arr both have elements
        if(arr[left] <= arr[right]) { // compares which element is smaller left or right and that element to be pushed in temp arr
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(right <= high) { // checks if the right arr have elements but left arr donot
        temp.push_back(arr[right]);
        right++;
    }


    while(left <= mid) { // checks if the left arr both have elements but right donot
        temp.push_back(arr[left]);
        left++;
    }

    for(int i = low; i <= high; i++) { // transfer the elements from temp arr to original arr 
        arr[i] = temp[i-low];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    while(low >= high) return;
    int mid = (low+high)/2;
    mergeSort(arr, low, mid);// this function divides the array and as well as sort them (left portion)
    mergeSort(arr, mid+1, high); // this function divides the array and as well as sort them (right portion)
    merge(arr, low, mid, high);// this function merge the sorted array
}

int main() {
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5} ;
    int n = 7;

    cout << "Before sorting: " << endl;
    for(int i = 0; i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    mergeSort(arr, 0, n-1);
    cout << "After sorting: " << " ";
    for(int i =0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
// Sort an array with 0's 1's 2's

#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& arr, int n) {
    int low = 0;
    int mid = 0;
    int high = n-1;

   while(mid <= high) {
        if(arr[mid] == 2) {
            swap(arr[mid], arr[high]);
                high--;
            
        } else if(arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[low]);
                low++;
                mid++;
        }
    }
}

int main()
{
    int n = 6;
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    sortArray(arr, n);
    for(auto &it: arr) {
        cout << it << " ";
    }
    cout << endl;
}
/*
* To calculate the missing number from array we have to find first the sum of first n numbers that can be done bu n*(n+1)/2 and then calculate the sum of n elements and then substract them to find the missing number and then return that.
 */

#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr) {
    int n = arr.size();

    int sum = n*(n+1)/2;

    int sumEl = 0;
    for(int i = 0; i < n; i++) {
        sumEl+=arr[i];
    }
    int missingNumber = sum - sumEl;
    return missingNumber;
}

int main() {
    vector<int> arr = {9,6,4,2,3,5,7,0,1};
    int n = arr.size();

    int result = missingNumber(arr);
    cout << "Missing Number: " << result << endl;
    return 0;
}
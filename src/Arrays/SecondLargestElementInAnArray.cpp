#include <bits/stdc++.h>

using namespace std;

int bruteForce(int arr[], int n) {
    int secondLargest = arr[0];
    sort(arr, arr + n);
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != secondLargest) {
            secondLargest = arr[i];
            break;
        }
    }
    return secondLargest;
}

int better(int arr[], int n) {
    int largest = arr[0], secondlargest = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        for (i = 0; i < n; i++)
            if (arr[i] > secondlargest && arr[i] != largest) {
                secondlargest = arr[i];
                break;
            }
    }
    return secondlargest;
}

int optimal(int arr[], int n) {
    int largest = arr[0], slargest = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        }
    }
    return slargest;
}
int main() {
    int arr1[] = {5, 8, 9, 4, 4, 5};
    int n = 6;
    int secondLargest = bruteForce(arr1, n);
    int sLargest = better(arr1, n);
    int second_largest = optimal(arr1, n);

    cout << "The second largest element in an array is: " << secondLargest << endl;
    cout << "The second largest element in an array is: " << sLargest << endl;
    cout << "The second largest element in an array is: " << second_largest << endl;
}
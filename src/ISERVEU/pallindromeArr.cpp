#include <bits/stdc++.h>
using namespace std;

void pallindromeArr(int arr[], int n, int i, bool &isPalindrome) {
    if (i >= n / 2) return; // Base case: all elements checked
    if (arr[i] != arr[n - i - 1]) { // If a mismatch is found
        isPalindrome = false;
        return;
    }
    pallindromeArr(arr, n, i + 1, isPalindrome); // Recursive call
}

int main() {
    int arr[] = {1, 2, 1, 2, 1};
    int n = 5;

    bool isPalindrome = true; // Initialize result as true
    pallindromeArr(arr, n, 0, isPalindrome); // Pass the result by reference

    if (isPalindrome) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to return the sum of all primes less than n
int sumOfPrimes(int n) {
    int sum = 0;

    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            sum += i; // Add prime number to the sum
        }
    }

    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = sumOfPrimes(n);

    cout << "The sum of all prime numbers less than " << n << " is: " << result << endl;

    return 0;
}

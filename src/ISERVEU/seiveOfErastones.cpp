#include <bits/stdc++.h>
using namespace std;

void sieveOfEratosthenes(int n) {
    // Initialize a boolean array to mark all numbers at first to primes
    vector<bool> prime(n + 1, true); 
    prime[0] = prime[1] = false; // as 0 and 1 are not prime

    // Mark non-prime numbers and strting from 2 because from 2 prime nos start
    for (int i = 2; i * i <= n; i++) { // i*i done because if we take only i then in j loop i*i exceeds n and breaks the j loop so done i*i in ith loop.
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) { // because normally prime nos start from i*i only as previous elements are marked prime by the previous number. and then marked them as false
                prime[j] = false;
            }
        }
    }

    // Print all primes
    for (int i = 2; i <= n; i++) {
        if (prime[i]) { // here now print all prime nos
            cout << i << " ";
        }
    }
}

int main() {
    int n = 30;
    cout << "Prime numbers up to " << n << " are:\n";
    sieveOfEratosthenes(n);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int SOD(int n) {
        int sum = 0;
        while(n > 0) {
            
            int r = n % 10;
            sum+=r;
            n = n / 10;
        }
    }
    
        public:
        bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
    };
  
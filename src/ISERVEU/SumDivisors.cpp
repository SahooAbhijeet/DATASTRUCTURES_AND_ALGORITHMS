#include<bits/stdc++.h>
using namespace std;


class Solution {
    public:
    int sumOfDivisors(int n) {
        while(n > 0) {
            int sum = 0;
            for(int i = 1; i <= n; i++) {
                if(n % i == 0) {
                    sum = sum + (n/i);
                }
            }
            return sum;
        }
    }
};

int main() {
    Solution obj;
    cout << obj.sumOfDivisors(8);
    return 0;
}
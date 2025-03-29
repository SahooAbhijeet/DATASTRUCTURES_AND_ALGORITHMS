#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool magicalNumber(int n) {
        string res = ""; 
        string finalRes = "";

        // Step 1: Convert n to binary and store it in res
        while(n > 0) {
            if(n % 2 == 1) {
                res += '1';
            } else {
                res += '0';
            }
            n /= 2;
        }
        reverse(res.begin(), res.end());

        // Step 2: Replace '0' with '1' and '1' with '2'
        for(int i = 0; i < res.length(); i++) {
            if(res[i] == '0') {
                finalRes += '1';
            } else {
                finalRes += '2';
            }
        }

        // Step 3: Calculate the sum of digits in finalRes
        int sumOfDigits = 0;
        for(char c : finalRes) {
            sumOfDigits += c - '0'; // Convert char to int and add
        }

        // Step 4: Check if the sum is odd
        return sumOfDigits % 2 == 1;
    }
};

int main() {
    Solution obj;
    int n = 5;
    if (obj.magicalNumber(n)) {
        cout << n << " is a magical number!" << endl;
    } else {
        cout << n << " is not a magical number." << endl;
    }
    return 0;
}

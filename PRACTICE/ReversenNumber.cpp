#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int reverse(int n) {
        int rev = 0;
        while(n > 0) {
            int r = n %10;
            rev = (rev*10) + r;
            n = n/10;
        }
        return rev;
    }
};

int main() {
    Solution obj;
    int n = 123456;
    cout << obj.reverse(n);
    return 0;
}
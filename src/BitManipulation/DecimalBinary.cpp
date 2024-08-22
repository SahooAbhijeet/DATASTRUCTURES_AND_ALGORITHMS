// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
//     public:
//     string convertBinary(int n) {
//         string res = "";
//         while(n != 1) {
//             if(n % 2 == 1) res+= '1';
//         else 
//             res+= '0';
//         }
//         n=n/2;
//         reverse(res.begin(), res.end());
//         return res;
//     }
// };

// int main() {
//     Solution obj;
//     int n = 12;
//     cout << obj.convertBinary(n);
// }


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertBinary(int n) {
        string res = "";
        
        while (n > 0) {
            if (n % 2 == 1) 
                res += '1';
            else 
                res += '0';
            
            n = n / 2;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};

int main() {
    Solution obj;
    int n = 12;
    cout << obj.convertBinary(n) << endl;  // Output: 1100
}

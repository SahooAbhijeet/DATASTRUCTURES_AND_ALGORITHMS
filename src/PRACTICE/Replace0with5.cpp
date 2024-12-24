#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    string replaceZerosWithFive(string input) {
        for(char &ch: input) {
            if(ch == '0'){
                ch = '5';
            }
        }
        return input;
    }
};

int main() {
    Solution obj;
    string s = "1005005";
    cout << obj.replaceZerosWithFive(s);
    return 0;
}
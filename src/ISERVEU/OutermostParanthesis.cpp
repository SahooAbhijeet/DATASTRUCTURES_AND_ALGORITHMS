//  Input: s = "(()())(())(()(()))"
// Output: "()()()()(())"
// Explanation: 
// The input string is "(()())(())(()(()))", with primitive decomposition "(()())" + "(())" + "(()(()))".
// After removing outer parentheses of each part, this is "()()" + "()" + "()(())" = "()()()()(())".

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    string removeOutermostParanthesis(string s) {
        string ans = "";
        int count = 0;
        for(int i = 0; i< s.length(); i++) {
            if(s[i] == '(') {
                count++;
                if(count != 1) 
                ans.push_back(s[i]);
            } else {
                count--;
                if(count != 0) {
                    ans.push_back(s[i]);
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution obj;
    string s = "(()())(())(()(()))";
    cout << obj.removeOutermostParanthesis(s);
}

// when ever want to convert a string to a integer then write like this
// nums[i] - '0'
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool isValid(string s) {
        stack<char> st;
        for(char it: s) {
            if(it == '(' || it == '{' || it == '[') {
                st.push(it);
            } else if(it == ')' && !st.empty() && st.top() == '(') {
                st.pop();
            } else if(it == '}' && !st.empty() && st.top() == '{') {
                st.pop();
            } else if(it == ']' && !st.empty() && st.top() == '[') {
                st.pop();
            } else {
                return false;
            }
        }
        return st.empty();
    }
};

int main() {
    string s;
    cin >> s;
    Solution obj;
    cout << obj.isValid(s);
    return 0;
}
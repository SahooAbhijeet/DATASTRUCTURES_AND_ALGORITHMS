#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool isOperator(char ch) {
        return (ch == '+'|| ch == '-' || ch == '*' || ch == '/' || ch == '^' || ch == '%');
    }

    string convert(string s) {
        stack<string> st;
        for(int i = s.size()-1; i >= 0; i--) {
            char ch = s[i];

            if(isOperator(ch)) {
                string operand1 = st.top();
                st.pop();
                string operand2 = st.top();
                st.pop();

                string concat = "(" + operand1 + ch + operand2 + ")";
                st.push(concat);

            } else {
                st.push(string(1,ch));
            }
        }
        return st.top();
    }
};

int main() {
    string s = "*-A/BC-/AKL";
    Solution obj;
    cout << obj.convert(s);
    return 0;
}
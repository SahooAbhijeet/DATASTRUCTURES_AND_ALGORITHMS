#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    string reverse(string s) {
        stack<char> st;
        for(int i = 0; i < s.length(); i++) {
            st.push(s[i]);
            if(s[i] == ' ') i++;
        }
        
        string reversed = "";
        while(!st.empty()) {
            
            reversed += st.top();
            st.pop();
        }
        
        return reversed;
    }
};

int main() {
    string s;
    cin >> s;
    Solution obj;
    cout << obj.reverse(s);
    return 0;
}

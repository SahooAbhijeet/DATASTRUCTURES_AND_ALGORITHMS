#include<bits/stdc++.h>

using namespace std;

bool isValid(string s) {
    stack<char> st;
    for (auto it: s) {
        if(it == '(' || it == '{' || it == '[') {
            st.push(it);
        } else {
        if(st.empty()) // if string is "]{}" now there is closing bracket first so it checks if opening is present for it in stack and if stack is empty return false
        return false;
        char ch = st.top();
        st.pop();
        if((it == ')' && ch == '(')  || (it == '}' && ch == '{') || (it == ']' && ch == '[')) continue;
        else return false;   
        }
    }
    return st.empty();
}

int main()
{
    // string s="{()[[{}()]]}";
      string s="]{}[";
    if(isValid(s))
    cout << "True" << endl;
    else
    cout << "False" << endl;
}
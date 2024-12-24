#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            if (ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch);
            }
            else
            {
                if (!st.empty())
                {
                    char top = st.top();
                    if (ch == ')' && top == '(' || ch == '}' && top == '{' || ch == ']' && top == '[')
                    {
                        st.pop();
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        return (st.empty()) ? true : false;
    }
};

int main() {
    string s;
    cin >> s;
    Solution obj;
    cout << obj.isValid(s);
    return 0;
}
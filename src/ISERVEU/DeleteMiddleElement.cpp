#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void deleteMid(stack<int>& s) {
        if (s.empty()) return;

        int mid = s.size() / 2;  
        stack<int> temp;        

        for (int i = 0; i < mid; i++) {
            temp.push(s.top());
            s.pop();
        }

        s.pop();

        while (!temp.empty()) {
            s.push(temp.top());
            temp.pop();
        }
    }
};

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5); 
    Solution obj;
    obj.deleteMid(s);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}

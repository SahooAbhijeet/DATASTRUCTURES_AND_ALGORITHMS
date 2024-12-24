#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void reverseFirstKElements(queue<int> &q, int k) {
        if(k <= 0 || q.empty() || q.size() < k) return;

        stack<int> st;
        for(int i = 0; i < k; i++) {
            st.push(q.front());
            q.pop();
        }

        while(!st.empty()) {
            q.push(st.top());
            st.pop();
        }
        int n = q.size() - k;
        for(int i = 0; i < n; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    void printQueue(queue<int> q) {
        while(!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
        cout << endl;
    }
};

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    
    int k = 3;
    Solution obj;
    cout << "Queue initially: ";
    obj.printQueue(q);  
    
    obj.reverseFirstKElements(q, k);
    
    cout << "After reversing first " << k << " elements: ";
    obj.printQueue(q);  
    return 0; 
}
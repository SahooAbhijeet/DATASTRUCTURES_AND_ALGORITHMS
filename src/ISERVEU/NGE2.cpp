#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> nextGreaterElement2(vector<int> &arr) {
        stack<int> st;
        int n = arr.size();
        vector<int> nge(n);

        for(int i = 2*n-1; i >= 0; i--) {
            while(!st.empty() && st.top() <= arr[i % n]){
                st.pop();
            }
            if(i < n) {
            nge[i] = (st.empty()) ? -1 : st.top();
            }
            st.push(arr[i % n]);
        }
        
        return nge;
    }
};

int main() {
    vector<int> arr = {2,10,12,1,11};
    Solution obj;
    
    vector<int> result = obj.nextGreaterElement2(arr);

    for(int num : result) {
        cout << num << " ";
    }
    return 0;
}
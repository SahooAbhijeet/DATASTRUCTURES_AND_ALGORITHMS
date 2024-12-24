#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> nextGreaterElement(vector<int> &arr) {
        stack<int> st;
        vector<int> nge(arr.size());
        for(int i = arr.size()-1; i >= 0; i--) {
            while(!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }
            nge[i] = (st.empty()) ? -1 : st.top();

            st.push(arr[i]); 
        }
        return nge;
    }
};

int main() {
    vector<int> arr = {2,5,8,4,6};
    Solution obj;
    vector<int> result = obj.nextGreaterElement(arr);
    for(int num : result) {
        cout << num << " ";
    }
    return 0;
}
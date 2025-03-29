#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> intersectionArrays(vector<int> &A1, vector<int> &A2) {
        int n1 = A1.size();
        int n2 = A2.size();
        vector<int> ans;
        int i = 0;
        int j = 0;
        while(i < n1 && j < n2) {
            if(A1[i] < A2[j]) {
                i++;
            } else if(A1[i] > A2[j]) {
                j++;
            } else {
                ans.push_back(A1[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> arr1 = {1,2,2,3,4};
    vector<int> arr2 = {2,2};

    vector<int> ans = obj.intersectionArrays(arr1,arr2);
    for(auto it: ans) {
        cout << it << " ";
    }
    return 0;
}
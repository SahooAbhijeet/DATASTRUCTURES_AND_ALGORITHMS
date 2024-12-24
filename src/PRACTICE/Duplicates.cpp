#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int duplicates(vector<int> &arr) {
        set<int> res;
        for(int i =0; i < arr.size(); i++) {
            res.insert(arr[i]);
        }
        int index = 0;
        int k = res.size();
        for(auto it: res) {
            arr[index] = it;
            index++;
        }
        return k;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {1,2,2,2,3,3,4,5,5};
    cout << obj.duplicates(arr);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int largest(vector<int> arr) {
        int max = arr[0];
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {1,2,3,4,50,6};
    cout << obj.largest(arr);
    return 0;
}
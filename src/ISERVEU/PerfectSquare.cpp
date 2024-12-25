#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int countPerfectSquare(vector<int> arr, int n) {
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(ceil((double)sqrt(arr[i])) == floor((double)sqrt(arr[i])))
            count++;
        }
        return count;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {64,16,100,81,45};
    int n = arr.size();
    cout << obj.countPerfectSquare(arr,n);
    return 0;
}
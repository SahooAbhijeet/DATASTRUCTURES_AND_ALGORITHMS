#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int kClosestNumber(vector<int> arr, int k, int X) {
        priority_queue<pair<int,int>> maxHeap;
        for(int i = 0;i< arr.size();i++) {
            maxHeap.push({abs(arr[i] - X), arr[i]});
            if(maxHeap.size() >k) 
            maxHeap.pop();
        }

        while(maxHeap.size() > 0) {
            return maxHeap.top().second;
            maxHeap.pop();
        }
    }
};

int main() {
    vector<int> arr = {5,6,7,8,9,10};
    int k =3;
    int X = 7;
    Solution obj;
    int res = obj.kClosestNumber(arr,k,X);
    cout << res << " ";
    return 0;
}
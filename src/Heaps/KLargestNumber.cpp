#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int kthLargestNumber(vector<int>& v, int N, int K) {
        priority_queue<int, vector<int>, greater<int>> 
        minHeap;
         for(int i = 0;i < N; i++) {
            minHeap.push(v[i]);

            if(minHeap.size() > K) {
                minHeap.pop();
            }
         }
         return minHeap.top();
    }
};

int main() {
    vector<int> vec = { 5, 20, 10, 7, 8, 1 };
    int N = 6;
    int K = 5;
    Solution obj;

    int res = obj.kthLargestNumber(vec,N,K);
    cout << res << endl;
 
}
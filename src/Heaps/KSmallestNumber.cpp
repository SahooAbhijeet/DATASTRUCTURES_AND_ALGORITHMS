#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int kthSmallest(vector<int>& v, int N, int K) {
        priority_queue<int> maxHeap;
        for(int i = 0; i<N; i++) {
            maxHeap.push(v[i]);

            if(maxHeap.size() > K) {
                maxHeap.pop();
            }
        }
        return maxHeap.top();
    }
};

int main() {
    vector<int> vec = { 5, 20, 10, 7, 1 };
    int N = 5;
    int K = 3;
    Solution obj;

    int res = obj.kthSmallest(vec,N,K);
    cout << res << endl;
 
}
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int frogJump(int ind, vector<int> &heights) {
        if(ind == 0) return 0;
        int prev = 0;
        int prev2 = 0;
        for(int i = 1; i < ind; i++) {
            int right = INT_MAX;
            int left = frogJump(ind-1, heights) + abs(heights[ind] - heights[ind-1]);
            if(right > 1) 
            right = frogJump(ind-2, heights) + abs(heights[ind] - heights[ind-2]);
            int curr_i = min(left,right);
            prev2 = prev;
            prev = curr_i;
        }
return prev;
    }
};

int main() {
    Solution obj;
    int n = 5;
    vector<int> heights = {30,10,60,10,60,50};
    cout << obj.frogJump(n, heights);
    return 0; 
}
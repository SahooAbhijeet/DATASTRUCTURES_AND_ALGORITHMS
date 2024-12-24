#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int minimumHouses(vector<int> arr, int n, int r, int unit) {
        if(arr == NULL) return -1;

        int totalFoods = r*unit;
        int consumeFoods = 0;
       
        for(int i = consumeFoods; i <= totalFoods; i++){
            consumeFoods+=arr[i];
            if(consumeFoods >= totalFoods)
            return consumeFoods+1;
        }
            return 0;
    }

};

int main() {
    Solution obj;
    
    return 0;
}
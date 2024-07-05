#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    vector<int> printLeaders(int arr[], int n){
        vector<int> ans;
        int leader = INT_MIN;
        leader = arr[n - 1];
        ans.push_back(arr[n - 1]);

        for (int i = n - 2; i > 0; i--){
            if (leader < arr[i]){
                leader = arr[i];
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};

int main(){

    int n = 6;
    int arr[n] = {10, 22, 12, 3, 0, 6};

    Solution obj;
    vector<int> ans = obj.printLeaders(arr, n);

    for (int i = ans.size() - 1; i >= 0; i--){

        cout << ans[i] << " ";
    }

    cout << endl;
    return 0;
}
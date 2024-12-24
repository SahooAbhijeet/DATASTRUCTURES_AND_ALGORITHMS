#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    string OddEven(vector<int> arr) {
        string res = "";
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] % 2 == 0) {
              res+="Even";
            }
            else {
                res+="Odd";
            }
        }
        return res;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {1,2,3,4,5,6};
    cout << obj.OddEven(arr);
    return 0;
}
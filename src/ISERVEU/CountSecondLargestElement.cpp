#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int countSecondLarElem(vector<int> &arr) {
        int maxElem = INT_MIN;
        int secLar = INT_MIN;
        int count = 0;

        // Find the largest element
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > maxElem) {
                secLar = maxElem;
                maxElem = arr[i];
            }
        }

        // Count the occurrences of the second-largest element
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == secLar) {
                count++;
            }
        }

        return count;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {1, 2, 3, 4, 4, 4, 5, 5, 6, 6};
    cout << obj.countSecondLarElem(arr);
    return 0;
}

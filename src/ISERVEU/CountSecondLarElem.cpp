#include<bits/stdc++.h>
using namespace std;

int count(vector<int> &arr) {
    int largest = arr[0];
    int sLargest = -1;

    for(auto num: arr) {
        if(num > largest) {
            sLargest = largest;
            largest = num;
        } else if(num > sLargest && num != largest) {
            sLargest = num;
        }
    int count = 0;
        for(auto num: arr) {
            if(num == sLargest) count++;
        }
            return count;

    }
}

int main() {
    vector<int> num = {1,2,3,4,4,4,5};
    cout << count(num);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int ncr(int n, int r) { // this function calculates the combination
    long long res = 1;
    for(int i = 0; i < r; i++) {
        res = res*(n-i);
        res = res/(i+1);
    }
    return res;
}
int pascalTriangle(int r, int c) {
    int element = ncr(r-1,c-1);
    return element;
}

int main() {
    int r = 5; // row number
    int c = 3; // col number
    int element = pascalTriangle(r, c);
    cout << element << endl;
    return 0;
}
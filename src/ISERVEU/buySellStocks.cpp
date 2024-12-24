#include<bits/stdc++.h>
using namespace std;

 int maxProfit(vector<int>& prices) {
    int minPrice = LONG_MAX;
    int maxiprofit = 0;
    for(int i = 0; i < prices.size(); i++) {
        minPrice = min(minPrice, prices[i]);
        maxiprofit = max(maxiprofit,  prices[i] - minPrice);
    }
    return maxiprofit;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    cout << maxProfit(prices);
    cout << endl;
    return 0;
}

// Buy and sell stocks, optimized

#include <iostream>
using namespace std;

int main(){

    //int prices[] = {7, 1, 5, 3, 6, 4};
    int prices[] = {7, 6, 4, 3, 1};
    int n = sizeof(prices)/sizeof(prices[0]);

    int minBuyingPrice, currProfit, maxProfit = 0;

    minBuyingPrice = prices[0];

    for (int i=1; i<n; i++){
        currProfit = prices[i] - minBuyingPrice;
        maxProfit = max(maxProfit, currProfit);
        minBuyingPrice = min(minBuyingPrice, prices[i]);
    }

    cout << "Min Buying Price: " << minBuyingPrice << endl;
    cout << "maxProfit: " << maxProfit << endl;

    return 0;
}
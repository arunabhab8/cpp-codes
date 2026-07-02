// Buy and sell stocks, optimized

#include <iostream>
using namespace std;

int main(){

    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices)/sizeof(prices[0]);

    int minbuyingPrice, currProfit, maxProfit=0;

    minbuyingPrice = prices[0];
    for (int st=1; st<n; st++){
        currProfit = prices[st] - minbuyingPrice;
        maxProfit = max(maxProfit, currProfit);
        minbuyingPrice = min(minbuyingPrice, prices[st]);
    }

    cout << "MaxProfit: " << maxProfit << endl;

    return 0;
}
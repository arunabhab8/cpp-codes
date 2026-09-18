// Stocks buy and sell 

#include <iostream>
using namespace std;

int main(){

    int prices[] = {7, 1, 5, 3, 6, 4};

    int minbuyPrice, maxProfit = 0, currProfit;

    int n = sizeof(prices)/sizeof(prices[0]);

    minbuyPrice = prices[0];

    for (int i=1; i<n; i++){
        currProfit = prices[i] - minbuyPrice;
        maxProfit = max(maxProfit, currProfit);

        minbuyPrice = min(minbuyPrice, prices[i]);
    }

    cout << "MaxProfit: " << maxProfit << endl;

    return 0;
}
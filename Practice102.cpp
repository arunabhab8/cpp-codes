// Buy and sell stocks, brute force

#include <iostream>
using namespace std;

int main(){

    int prices[] = {7, 1, 5, 3, 6, 4};
    //int prices[] =  {7, 6, 4, 3, 1};
    int n = sizeof(prices)/sizeof(prices[0]);

    int currProfit, maxProfit = 0;

    for(int st=0; st<n; st++){
        for(int end=st+1; end<n; end++){
            currProfit = prices[end] - prices[st];
            maxProfit = max(maxProfit, currProfit);
        }
    }

    cout << "MaxProfit: " << maxProfit << endl;


    return 0;
}
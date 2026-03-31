// Buy and Sell stocks with TC: O(n)

#include <iostream>
using namespace std;

int main(){

    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxProfit = 0;
    int minPrice = arr[0];

    for(int i=1; i<n; i++){
        int profit = arr[i] - minPrice;
        maxProfit = max(maxProfit, profit);
        minPrice = min(minPrice, arr[i]);
    }
    cout << "MaxProfit: " << maxProfit << endl;

    return 0;
}
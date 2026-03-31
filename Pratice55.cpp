//Buy and sell stocks

#include <iostream>
#include <climits>
using namespace std;

int main(){

    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxProfit = 0;

    for(int i=0; i<n ; i++){
        for (int j=i+1; j<n; j++){
            int profit = arr[j] - arr[i];
            maxProfit = max(maxProfit, profit);
        }
    }
    cout << "MaxProfit: " << maxProfit << endl;
    
    return 0;
}
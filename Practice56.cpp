// Kadane's algorithm for max subarray problem

#include<iostream>
using namespace std;

int main(){

    int maxSum = INT_MIN;
    int currSum = 0;
    int arr[] = {1, -8, 7, 9, -20};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i<n; i++){
        currSum = currSum + arr[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0){
            currSum = 0;
        }
    }
    cout << "MaxSum: " << maxSum << endl;
    return 0;
}
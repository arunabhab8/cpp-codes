// Kadane's Algorithm

#include <iostream>
#include <climits>
using namespace std;

int main(){

    int currSum=0, maxSum=INT_MIN;

    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        currSum = currSum + arr[i];
        maxSum = max (maxSum, currSum);

        if (currSum < 0){
            currSum = 0;
        }
    }

    cout << "MaxSum: " << maxSum << endl;

    return 0;
}
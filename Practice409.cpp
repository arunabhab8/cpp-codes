// Kadane's Algorithm for Maximum sub-array sum

#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int *arr, int n){

    int currSum=0, maxSum = INT_MIN;

    for (int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);

        if (currSum < 0){
            currSum = 0;
        }
    }

    return maxSum;
}

int main(){

    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Max-Sub array sum: " << maxSubArraySum(arr, n) << endl;

    return 0;
}
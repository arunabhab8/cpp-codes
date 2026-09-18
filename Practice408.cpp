// Maximum SubArray Sum (Brute Force)

#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int arr[], int n){

    int sum, maxSum = INT_MIN;

    for (int i=0; i<n; i++){
        sum = 0;
        for(int j=i; j<n; j++){
            sum = sum + arr[j];
            maxSum = max(sum, maxSum);
        }
    }

    return maxSum;
}

int main(){

    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Max Sub-array Sum: " << maxSubArraySum(arr, n) << endl;

    return 0;
}
// Maximum sub-array sum, optimized (ON(n^2))

#include <iostream>
#include <climits>

using namespace std;

int main(){

    int arr[] ={2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int currSum=0, maxSum = INT_MIN;

    for (int st=0; st<n; st++){
        currSum = 0;
        for (int end=st; end<n; end++){
            currSum = currSum + arr[end];
            maxSum = max(maxSum, currSum);
        }
    }

    cout << "MaxSum: " << maxSum << endl;

    return 0;
}
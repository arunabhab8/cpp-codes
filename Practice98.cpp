// Max sub-array sum TC: O(n*n)

#include <iostream>
using namespace std;

int main(){

    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int st, end, maxSum = INT_MIN, currSum;

    for(st=0; st<n; st++){
        currSum=0;
        for(end=st; end<n; end++){
            currSum = currSum + arr[end];
            maxSum = max(maxSum, currSum);
        }
    }

    cout << "MaxSum: " << maxSum << endl;

    return 0;

}
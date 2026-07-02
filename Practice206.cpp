// Maximum sub-array sum using brute force


#include <iostream>
using namespace std;

int main(){

    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int st, end, k, currSum=0, maxSum=INT_MIN;

    for (int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            currSum=0;
            for (int k=st; k<=end; k++){
                currSum = currSum + arr[k];
            }
            maxSum = max(maxSum, currSum);
        }
    }

    cout << "MaxSum: " << maxSum << endl;
    return 0;
}
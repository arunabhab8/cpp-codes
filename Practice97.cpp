// Maximum sub-array sum: TC: O(n*n*n) = O(n3)

#include <iostream>
using namespace std;

int main(){

    int arr[] = {2, -3, 6, -5, 4, 2};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    int st, end, i, maxSum = INT_MIN, currSum;

    for(st=0; st<n; st++){
        for(end=st; end<n; end++){
            currSum=0;
            for(int i=st; i<=end; i++){
                currSum = currSum + arr[i];
            }
            maxSum = max(maxSum, currSum);

        }
    }

    cout << "MaxSum: " << maxSum << endl;


    return 0;
}
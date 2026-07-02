// Check if array is sorted or not using recursion

#include <iostream>

using namespace std;

bool isSorted(int arr[], int n, int index){

    if (index == n-1){
        return true;
    }

    if (arr[index] > arr[index+1]){
        return false;
    }

    return isSorted(arr, n, index+1);
}

int main(){

    int n, arr[5] = {1, 2, 3, 4, 5}, i=0;

    n = sizeof(arr)/sizeof(arr[0]);

    cout << isSorted(arr, n, i) << endl;

    return 0;
}
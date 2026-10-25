// Check if array is sorted in ascending order using recursion

#include <iostream>
using namespace std;

bool isSorted(int arr[], int n, int idx){

    if (idx == n-1){
        return true;
    }

    if (arr[idx] > arr[idx + 1]){
        return false;
    }

    return isSorted(arr, n, idx + 1);
}


int main(){

    int arr[] = {1, 2, 3, 4, 9, 7};

    int n = sizeof(arr)/sizeof(arr[0]);

    if (isSorted(arr, n, 0)){
        cout << "Array is sorted in ascending order" << endl;
    }
    else{
        cout << "Array is not sorted in ascending order" << endl;
    }

    return 0;
}
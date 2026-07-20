// Check if array is sorted using recursion

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

    int arr[] = {1, 2, 4, 5, 7, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << isSorted(arr, n, 0) << endl;

    return 0;
}
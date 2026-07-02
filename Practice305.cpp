//Check if array is sorted or not using recursion

#include <iostream>
using namespace std;

bool isSorted(int arr[], int n, int index){

    if (index == n-1){
        return true;
    }

    if (arr[index] > arr[index + 1]){
        return false;
    }

    return isSorted(arr, n, index + 1);

}


int main(){

    int arr[] = {1, 4, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << isSorted(arr, n, 0) << endl;


    return 0;
}
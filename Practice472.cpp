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

    int n, idx = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << isSorted(arr, n, idx) << endl;

    return 0;
}
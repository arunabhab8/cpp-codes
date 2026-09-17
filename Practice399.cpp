// Reverse an array with extra space

#include <iostream>
using namespace std;

int main(){

    int arr[5], revArray[5];

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Enter the elements of array: ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    for (int i=0; i<n; i++){
        revArray[i] = arr[n-i-1];
    }

    for (int i=0; i<n; i++){
        cout << revArray[i] << " ";
    }
    cout << endl;

    return 0;
}
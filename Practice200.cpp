// Reverse an array using extra space


#include <iostream>
using namespace std;


int main(){

    int arr[5] = {1, 7, 10, 90, 6};
    int copyArray[5];
    int n = sizeof(arr)/sizeof(arr[0]);

    int j=n-1;
    for (int i=0; i<n; i++){
        copyArray[i] = arr[n-i-1];
        j--;
    }

    for (int i=0; i<n; i++){
        cout << copyArray[i] << " ";
    }

    cout << endl;
    return  0;
}
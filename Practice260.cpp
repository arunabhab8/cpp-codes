// Given a non-empty array of int nums, every element appears twice except one.

#include <iostream>
using namespace std;

int main(){

    int arr[] = {2, 3, 6, 2, 6, 3, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int xor1=0;

    for (int i=0; i<n; i++){
        xor1 = xor1 ^ arr[i];
    }

    cout << "Single one: " << xor1 << endl;

    return 0;

}
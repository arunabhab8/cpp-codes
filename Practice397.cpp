// Find the largest element in an array

#include <iostream>
using namespace std;

int main(){

    int arr[5], max = 0;

    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    max = arr[0];

    for (int i=1; i<n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }

    cout << "Largest element in the array: " << max << endl;

    return 0;
}
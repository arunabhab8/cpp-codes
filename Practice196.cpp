// Find largest element in the array


#include <iostream>
using namespace std;

int main(){

    int arr[5], largest;

    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    largest = arr[0];

    for (int i = 1; i<n; i++){
        if (arr[i] >= largest){
            largest = arr[i];
        }
    }

    
    cout << "Largest element of the array: " << largest << endl;

    return 0;
}
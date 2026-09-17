// Reverse array using 2 pointer approach


#include <iostream>
using namespace std;

int main(){

    int arr[5];

    int n = sizeof(arr)/sizeof(arr[0]);
    int st = 0, end = n-1;

    cout << "Enter the elements of array: ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    while (st < end){
        int temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st++;
        end--;
    }

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
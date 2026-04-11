// Linear Search

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){

    for(int i=0; i<n; i++){
        if (arr[i] == key){
            return i;
        }
    }

    return -1;
}



int main(){

    int arr[] = {10, 80, -6, 8, 90};
    int key, idx, n;

    n = sizeof(arr)/sizeof(arr[0]);

    cout << "Enter the value of key: ";
    cin >> key;

    idx = linearSearch(arr, n, key);

    if (idx != -1){
        cout << "Key is found at index: " << idx << endl;
    } else {
        cout << "Key is not found" << endl;
    }
    return 0;
}
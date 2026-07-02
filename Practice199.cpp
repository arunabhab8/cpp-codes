// Linear Search


#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){

    for (int i=0; i<n; i++){
        if (arr[i] == key)
        return i;
    }

    return -1;
}

int main(){

    int arr[5], key;

    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Enter the elements of the array: ";
    
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter the value of key: ";
    cin >> key;

    int idx = linearSearch(arr, n, key);

    if (idx == -1){
        cout << "Element not found in the array" << endl;
    } else{
        cout << "Element found at idx: " << idx << endl;
    }


    return 0;
}
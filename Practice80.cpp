// Binary Search Practice

#include <iostream>
using namespace std;

int binSearch(int arr[], int arrSize, int key){

    int start = 0, end = arrSize - 1;

    while (start <= end){

        int mid = start + (end - start)/2; // Can also be written as mid = (start + end) /2

        if (key == arr[mid]){
            return mid;
        } else if (key > arr[mid]){
            start = mid + 1;
        } else if (key < arr[mid]){
            end = mid - 1;
        }
    }
    return -1;
}

int main(){

    int arr[] = {2, 5, 10, 50, 80};
    int key, idx;
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    cout << "Enter the key: ";
    cin >> key;

    idx = binSearch(arr, arrSize, key);

    if (idx == -1){
        cout << "Key not found in the array " << endl;
    } else {
        cout << "Key found at array index: " << idx << endl;
    }
    
    return 0;
}
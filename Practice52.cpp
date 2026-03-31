// Binary Search

#include<iostream>
using namespace std;

int binSearch (int *arr, int n, int key){

    int mid, start=0, end=n-1;
    while (start <= end){
       // mid = (start + end)/2;
        mid = start + (end-start)/2;

        if (key == arr[mid]){
            return mid;
        } else if (key > arr[mid]){
            start = mid + 1; // search in second half of the array
        } else {
            end = mid - 1; // search in first half of the array
        }
    }
    return -1;
}

int main(){

    int arr[5]={1, 10, 18, 89, 190};
    int key, idx, n;

    cout << "Enter the value of key: ";
    cin >> key;

    n = sizeof(arr)/sizeof(arr[0]);

    idx = binSearch(arr, n, key);
    
    if (idx != -1){
        cout << "Key is found at index: " << idx << endl;
    } else{
        cout << "Key is not found" << endl;
    }

    return 0;
}
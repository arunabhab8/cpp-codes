// Binary Search

#include <iostream>
using namespace std;


int binSearch(int arr[], int n, int key){

    int st = 0, end = n-1, mid;

    while (st < end){
        mid = st + (end - st)/2;

        if (arr[mid] == key){
            return mid;
        } else if (arr[mid] < key){
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
}

int main(){

    int arr[] = {-1, 9, 90, 921, 1007, 2180, 2900, 9800};
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx, key;

    cout << "Enter the value of key: ";
    cin >> key;

    idx = binSearch(arr, n, key);

    if (idx == -1){
        cout << "Key not found in array" << endl;
    } else {
        cout << "Key found at index: " << idx << endl;
    }

    return 0;
}
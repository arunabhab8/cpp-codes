// Binary Search


#include <iostream>
using namespace std;

int binSearch(int *arr, int n, int key){

    int mid, st=0, end=n-1;

    while (st <= end){
        mid = st + (end-st)/2;
        if (arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            end = mid-1;
        }else{
            st = mid + 1;
        }
    }

    return -1;
}

int main(){

    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;

    cout << "Enter the key: ";
    cin >> key;

    cout << binSearch(arr, n, key) << endl;

    return 0;
}
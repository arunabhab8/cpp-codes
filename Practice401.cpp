// Binary Search


#include <iostream>
using namespace std;

int binSearch(int arr[], int n, int key){

    int st=0, end=n-1;

    while (st <= end){
        int mid = (st + end)/2;
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

    int arr[8] = {2, 4, 6 ,8, 10, 12, 14, 16};

    int key;

    cout << "Enter the value of key: ";
    cin >> key;

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << binSearch(arr, n, key) << endl;
    return 0;
}
// Array passed as reference

#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }

}

void printArr2(int *ptr, int n){

    for(int i=0;i<n;i++){
        cout << *(ptr+i);
    }
}


int main(){

    int n;
    int arr[5] = {1, 5, 6, 7, 8};

    n = sizeof(arr)/sizeof(arr[0]);
    cout << arr << endl;
    cout << *arr << endl;
    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;

    printArr(arr, n);
    printArr2(arr, n);

    return 0;
}
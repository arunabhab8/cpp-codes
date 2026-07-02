// Arrays in functions

#include <iostream>
using namespace std;

void printArr(int arr[], int n){

    int x = 100;

    for (int i=0; i<n; i++){
        arr[i] = x++;
    }

}
int main(){

    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr)/sizeof(arr[0]);

    printArr(arr, n);

    for (int i=0; i<n; i++){
        cout << *(arr+i) << " ";
    }
    cout << endl;

    return 0;
}
// Bubble Sort, practice, optmized


#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){

    int flag;

    for(int i=0; i<n-1; i++){
        flag=0;
        for (int j=0; j<n-1-i; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag=1;
            }
        }
        if (flag == 0){
            break;
        }
    }
}

int main(){

    int arr[] = {8, 5, 7, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
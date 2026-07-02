// Count sort

#include <iostream>
using namespace std;

void countSort(int *arr, int n){

    int i, j, *ptr, maxValue=INT_MIN;

    for (i=0; i<n; i++){
        maxValue = max(maxValue, arr[i]);
    }

    ptr = new int[maxValue+1];

    for (i=0; i<maxValue+1; i++){
        ptr[i] = 0;
    }

    for (i=0; i<n; i++){
        ptr[arr[i]]++;
    }

    j=0;
    for (i=0; i<maxValue+1; i++){
        while (ptr[i] > 0){
            arr[j++] = i;
            ptr[i]--;
        }
    }

    for (i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    delete []ptr;
}

int main(){

    int arr[] = {6, 3, 9, 10, 15, 6, 8, 12, 3, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    countSort(arr, n);

    cout << endl;
    
    return 0;
}
// Insertion Sort, practice

#include <iostream>
using namespace std;

int main(){

    int arr[] = {8, 5, 7, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i, j;
    
    for (i=1; i<n; i++){
        int curr = arr[i];
        for (j=i-1; j>=0 && arr[j]>curr; j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = curr;
    }

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
// Selection Sort


#include <iostream>
using namespace std;

int main(){

    int arr[] = {5, 8, 3, 1, 9, 2};

    int n = sizeof(arr)/sizeof(arr[0]);

    int i,j, minIdx;

    for (i=0; i<n-1; i++){
        minIdx = i;

        for (j=i+1; j<n; j++){
            if (arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }

        swap(arr[i], arr[minIdx]);
    }

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;


    return 0;
}
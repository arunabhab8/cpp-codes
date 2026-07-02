// Insertion sort on an array of chars

#include <iostream>
using namespace std;

int main(){

    char arr[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i,j, curr;

    for (i=1; i<n; i++){
        curr = arr[i];
        for (j=i-1; j>=0 && arr[j]>curr; j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = curr;
    }

    for (i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
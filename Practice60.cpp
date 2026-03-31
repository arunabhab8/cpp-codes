// Insertion Sort

#include <iostream>
using namespace std;

int main(){

    int arr[] = {5, 4, 1, 3, 2};
    int curr;
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i=1; i<n; i++){
        curr = arr[i];

        for(int j=i-1; j>=0; j--){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;


    return 0;
}
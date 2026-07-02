// Reverse an array without using extra spaces

#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 5, 90, 8, 19};
    int n = sizeof(arr)/sizeof(arr[0]);

    int st=0, end=n-1;

    while (st < end){
        int temp;
        temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;

        st++;
        end--;
    }

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
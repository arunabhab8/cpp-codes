//Reverse an array without a copy array (i.e. extra spaces)

#include<iostream>
using namespace std;

int main(){

    int arr[5]={7, 9, 1, 16, 60};
    int first=0, last, n;
    n = sizeof(arr)/sizeof(arr[0]);
    last = n-1;

    while (first < last){
        int temp;
        temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last--;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
// Reverse an array using an extra array

#include<iostream>
using namespace std;

int main(){

    int temp[5], j;
    int arr[5]={1,8,9,7,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        temp[i] = arr [n-i-1];
       // j++;
    }
    
    for(int i=0;i<n;i++){
        arr[i] = temp [i];
    }
        
    for(int i=0;i<n;i++){
        cout << arr[i] << " "; 
    }
    cout << endl;

    return 0;
}
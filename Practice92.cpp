// Reverse an array without extra spaces

#include<iostream>
using namespace std;

int main(){

    int arr[] = {1, 92, 2, 71};
    int n = sizeof(arr)/sizeof(arr[0]);

    int st = 0, end = n - 1;

    while (st < end){
        int temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;

        st++;
        end--;
    }

   for(int i=0; i<n; i++){
    cout << arr[i] << " ";
   }
   cout << endl;

    return 0;
}
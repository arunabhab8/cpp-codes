// Reverse array with extra spaces

#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 92, 2, 71};
    int n = sizeof(arr)/sizeof(arr[0]);

    int copyArray[n], j=n-1;

    for(int i=0; i<n; i++){
        copyArray[i] = arr[j];
        copyArray[i] = arr[n-i-1];
        j--;
    }


   for(int i=0; i<n; i++){
    cout << copyArray[i] << " ";
   }

   cout << endl;

    return 0;
}
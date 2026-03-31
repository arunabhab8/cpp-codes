// Input and Output of Array elements

#include <iostream>
using namespace std;

int main(){
    int n;
     cout << "Enter the length of an array: ";
     cin >> n;
     int arr[n];
   
    //size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        cout << "Enter the element for arr[" << i << "]: "; 
        cin >> arr[i];
    }

    for (int i=0; i< n; i++){
        cout << "Elements of array are: arr[" << i << "]: "<< arr[i] << endl;

    }
    cout << endl;

    return 0;
}
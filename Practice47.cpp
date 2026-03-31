// Largest and smallest elements of an array

#include <iostream>
using namespace std;

int main(){

    int n, max, min;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout << "Enter the elements of the array: ";
        cin >> arr[i];
    }
    max = arr[0];
    min = arr[0];
    for (int i=0; i<n;i++){
        if (arr[i] > max){
            max = arr[i];        
        }
        if (arr[i] < min){
            min = arr[i];
        }
}
    cout << "Largest element of the array is: " << max << endl;
    cout << "Smallest element of the array is: " << min << endl;
    return 0;
}
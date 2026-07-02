// Arrays practice


#include <iostream>
using namespace std;


int main(){

    int arr[] = {1, 2, 3, 4, 5};
    //int arr[50];

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << arr[0] << endl;
    cout << *arr << endl;



    return 0;
}
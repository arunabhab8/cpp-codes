// Pointer Arithmetic

#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 90, 78, 46, 889, 900};

    int *ptr = arr;
    int *ptr1 = arr+3;

    cout << *ptr << endl;
    cout << *ptr1 << endl;

    cout << ptr1 - ptr << endl;

    cout << (ptr1 > ptr) << endl;

    return 0;
}
// Null Pointers

#include <iostream>
using namespace std;

int main(){

    int a = 500;

    int * ptr = NULL; // Can also be assigned 0

    cout << "Value of ptr: " << ptr << endl;
    cout << "Value at address stored by ptr: " << *ptr << endl;

    ptr = &a;

    cout << "Value of ptr: " << ptr << endl;

    return 0;
}
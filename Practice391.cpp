// Deferencing pointers and modifying value

#include <iostream>
using namespace std;

int main(){

    int a = 250;

    int *ptr;

    ptr = &a;

    cout << "Value of ptr: " << ptr << endl;
    cout << "Value of a: " << *ptr << endl;

    *ptr = 400;

    cout << "Modified value of a: " << *ptr << endl;

    return 0;
}
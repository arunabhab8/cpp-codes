// AdressOf (&) operator

#include <iostream>
using namespace std;

int main(){

    int a=10;
    int *ptr=&a;
    int **pptr = &ptr;

    cout << "Address of a: " << &a << endl;
    cout << "Address of a: " << ptr << endl;
    cout << "Value of a: " << *ptr << endl;
    cout << "Size of ptr: " << sizeof(ptr) << endl;
    cout << "Size of pptr: " << sizeof(pptr) << endl;
    cout << "Size of a: " << sizeof(a) << endl;
    cout << "Address of ptr: " << &ptr << endl;
    cout << "Address of ptr: " << pptr << endl;
    cout << "Value at pptr: " << *pptr << endl;
    cout << "Value at pptr: " << **pptr << endl;

    return 0;
}
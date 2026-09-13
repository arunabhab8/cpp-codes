// Deferencing pointers (more examples)

#include <iostream>
using namespace std;

int main(){

    int a = 200;

    int *ptr = &a;

    int **pptr = &ptr;

    cout << "Address of a: " << &a << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value of 'a' by derefencing ptr: " << *ptr << endl;

    cout << "Address of ptr: " << &ptr << endl;
    cout << "Value of pptr: " << pptr << endl;

    cout << "Address of 'a' by derefering pptr: " << *pptr << endl;
    cout << "Value of 'a' by deferencing pptr: " << **pptr << endl;

    return 0;
}
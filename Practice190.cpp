// Playing with pointers


#include <iostream>
using namespace std;


int main(){

    int a = 5;

    int *iptr = &a;

    int **ipptr = &iptr;

    float b = 20.57;
    float *fptr = &b;

    cout << *iptr << endl;
    cout << a << endl;
    cout << iptr << endl;
    cout << &a << endl;

    cout << *fptr << endl;
    cout << b << endl;
    cout << fptr << endl;
    cout << &b << endl;

    cout << &a << endl; // Address of a
    cout << iptr << endl; // Address of a
    cout << &iptr << endl; // Address of iptr
    cout << ipptr << endl; // Address of iptr
    cout << *ipptr << endl; // Value of iptr = Address of a
    cout << **ipptr << endl;  // Value of a


    return 0;
}
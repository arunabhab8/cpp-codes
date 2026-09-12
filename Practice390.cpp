// WAP for pointers

#include <iostream>
using namespace std;


int main(){

    int a = 200;
    float b = 4.76;
    char ch = 'a';

    int *ptr1 = &a;
    float *ptr2 = &b;
    char *ptr3 = &ch;

    int **pptr = &ptr1;

    cout << &a << " = " << ptr1 << endl;
    cout << &b << " = " << ptr2 << endl;
    //cout << &ch << " = " << ptr3 << endl;

    //cout << &ch << endl;

    cout << static_cast<void*>(ptr3) << " = " << static_cast<void*> (&ch) << endl;
     cout << (void*)(ptr3) << " = " << (void*) (&ch) << endl;

    cout << &ptr1 << " = " << pptr << endl;

    return 0;
}
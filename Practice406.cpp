// Pointer Arithmetic (Addition/Substraction fo 2 pointers)

#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int *aptr = &a;

    cout << aptr << endl;

    int *bptr = aptr + 3;

    cout << bptr << endl;

    cout << bptr - aptr << endl;


    return 0;
}
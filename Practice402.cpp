// Array Pointers act as constant pointers


#include <iostream>
using namespace std;

int main(){

    int arr[5] = {0};

    int a = 10;
    int *aptr = &a;

    int b = 20;
    int *bptr = &b;

    cout << bptr << endl;
    cout << *bptr << endl;

    bptr = &a;

    //arr = &a; // This is not possible

    cout << aptr << endl;
    cout << bptr << endl;
    cout << *aptr << endl;
    cout << *bptr << endl;
}
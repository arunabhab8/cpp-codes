// Pointer arithmetic

#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = &a;

    cout << ptr << endl;
    ptr = ptr + 3;
    cout << ptr << endl;
    ptr = ptr - 3;
    cout << ptr << endl;

    cout << arr << endl;
    cout << arr+3 << endl;

    cout << *arr << endl;
    cout << *(arr+3) << endl;

    for (int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i=0; i<5; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;

    int *pptr =arr;
    int *pptr1 = arr+3;
    cout << pptr1 - pptr << endl; 

    cout << (arr == pptr) << endl;
    cout << (pptr1 < pptr) << endl;
    return 0;
}
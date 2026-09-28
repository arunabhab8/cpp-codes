// Memory Leak

#include <iostream>
using namespace std;

int* func(int size){

    int * ptr = new int[size];

    int x = 1;

    for (int i=0; i<size; i++){
        *(ptr + i) = x++;
    }

    for (int i=0; i<size; i++){
        cout << ptr[i] << " ";
    }
    cout << endl;

    return ptr;
}


int main(){

    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    int *ptr = func(size);

    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}

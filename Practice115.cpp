// Memory Leak

#include <iostream>
using namespace std;

int* funcArray(){

    int size;
    
    cout << "Enter size of array: ";
    cin  >> size;

    int *ptr = new int[size];


    delete[] ptr;

    return ptr;
}


int main(){

    int *ptr;

    ptr = funcArray();
    
    cout << ptr << endl;

    return 0;
}
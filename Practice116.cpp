// Dynamic Memory allocation

#include <iostream>
using namespace std;

int* func(){
    int *ptr = new int;

    *ptr = 10;
    cout << "Value of ptr: in func(): " << *ptr << endl;

    cout << "ptr points to: " << ptr << endl;
    return ptr;
}


int main(){

    int *ptr = func();

    cout << "ptr points to in main(): " << ptr << endl;
    
    *ptr = 40;

    cout << "value of ptr in main func: " << *ptr << endl;

    delete ptr;
    return 0;
}
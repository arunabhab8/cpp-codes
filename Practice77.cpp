// Memory Leak using C++

#include <iostream>
using namespace std;

int *func(){

    int *ptr = new int;
    *ptr = 1000;
    cout << "Address pointed by ptr: " << ptr << endl; 
    cout << "Value pointed by ptr: " << *ptr << endl;
    delete ptr;
    return ptr;
}


int main(){

    int *ptr = func();
    cout << "Address pointed by ptr (main function): " << ptr << endl;
    cout << "Value pointed by ptr (main function): " << *ptr << endl;
    return 0;
}
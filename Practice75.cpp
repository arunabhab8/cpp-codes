// Dynamic Memory Allocation

#include <iostream>
using namespace std;

int *func(){

    int *ptr= new int;
    *ptr = 20;
    return ptr;
}


int main(){
    int *ptr = func();
    cout << ptr << " " << *ptr << endl;
    return 0;
}
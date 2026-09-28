// Dynamic Memory Allocation, using normal variable

#include <iostream>
using namespace std;

void func(){

    int * ptr = new int;

    *ptr = 100;

    cout << *ptr << endl;

    delete ptr;
}

int main(){

    func();

    return 0;
}


// Pass by Value

#include <iostream>
using namespace std;

void changeValue(int a){

    a=20;
    cout << "Value of a in changeValue function: " << a << endl;
}

int main(){

    int a=10;
    cout << "Value of a in main function before call to changeValue function: " << a << endl;
    changeValue(a);
    cout << "Value of a in main function after call to changeValue function: " << a << endl;
    return 0;
}
// Pass by Value vs Pass by Reference

#include <iostream>
using namespace std;

void changeAbyValue(int num){

    num = 200;
    cout << "Pass by Value, in changeA fnc. inside fnc. call: changeA, a: " << num << endl;
}

void changeAbyRef(int *ptr){

    *ptr = 200;
    cout << "Pass by Ref, in changeA fnc. inside fnc. call: changeA, a: " << *ptr << endl;

}

int main(){

    int a = 100;

    cout << "Pass by Value, in main fnc. before call to changeA, a: " << a << endl;
    changeAbyValue(a);
    cout << "Pass by Value, in main fnc. after call to changeA, a: " << a << endl;

    cout << "Pass by reference, in main fnc. before call to changeA, a: " << a << endl;
    changeAbyRef(&a);
    cout << "Pass by reference, in main fnc. after call to changeA, a: " << a << endl;

    return 0;
}
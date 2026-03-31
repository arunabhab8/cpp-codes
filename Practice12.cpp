// Global variables 

#include <iostream>
using namespace std;

void sayHello();
int a;

int main(){

    sayHello();
    cout << "Value of a: " << a << endl;
    return 0;
}

void sayHello(){
    cout << "Saying Hello to a: " << a << endl;
}
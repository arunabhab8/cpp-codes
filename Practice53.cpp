// Reference variables

#include <iostream>
using namespace std;

void changeA(int &a){
    a = 10;

    cout << "Value of a inside changeA: " << a << endl;
}


int main(){

    int a = 20;
    int &b = a;

    cout << "Value of a before calling changeA: " << a << endl;
    changeA(b);
    cout << "Value of a after calling changeA: " << a << endl;

    return 0;
}
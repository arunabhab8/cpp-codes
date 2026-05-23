// Pass by Value


#include <iostream>
using namespace std;

void changeA (int a){
    a = 20;

    cout << "Inside changeA, value of a: " << a << endl;
}

int main(){

    int a = 10;

    changeA(a);

    cout << "Inside main after calling changeA, value of a: " << a << endl;

    
    return 0;
}
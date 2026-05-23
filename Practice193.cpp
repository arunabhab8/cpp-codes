// Pass by reference using reference variable


#include <iostream>
using namespace std;

void changeA(int &b){

    b = 20;

    cout << "Inside changeA, value of a: " << b << endl;

}

int main(){

    int a = 10;

    int &b = a;

    cout << a << endl;
    cout << b << endl;

    b = 20;

    cout << a << endl;
    changeA(a);
    cout << "Inside main after calling changeA, value of a: " << a << endl;
        cout << "Inside main after calling changeA, value of b: " << b << endl;



    return 0;
}
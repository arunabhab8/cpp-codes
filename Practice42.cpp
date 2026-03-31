// Pass by Reference using reference variables

#include <iostream>
using namespace std;

void changeValue(int &b){

    b=20;
    cout << "Value of a in changeValue fnc: " << b << endl;

}

int main(){

    int a=10;
    int &b = a;
    cout << "Value of a in main fnc before function call: " << a << endl;
    changeValue(a);
    cout << "Value of a in main fnc after function call: " << a << endl;

    return 0;
}
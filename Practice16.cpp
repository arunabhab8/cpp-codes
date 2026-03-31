// Ternary Operator

#include <iostream>
using namespace std;

int main(){

    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    a>b? cout << "Larger is a" : cout << "Larger is b";
    cout << endl;
    return 0;
}
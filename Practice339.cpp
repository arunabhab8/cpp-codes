// Print largest of 2 numbers


#include <iostream>
using namespace std;

int main(){

    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    if (a > b){
        cout << "Largest is: " << a << endl;
    } else if (a == b){
        cout << "Both the numbers are equal" << endl;
    } else {
        cout << "Largest is: " << b << endl;
    }

    return 0;
}
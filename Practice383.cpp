// WAF to print (a+b)^2


#include <iostream>
using namespace std;

long wholeSquare (int a, int b){

    return ((a*a) + 2*a*b + (b*b));
}

int main(){

    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << wholeSquare(a, b) << endl;

    return 0;
}
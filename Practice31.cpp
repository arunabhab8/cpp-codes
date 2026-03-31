// WAF to find product of two number

#include <iostream>
using namespace std;

float product(float, float);

int main(){

    float a, b;
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;
    cout << product(a,b) << endl;

    return 0;
}

float product (float a, float b){
    return (a*b);
}
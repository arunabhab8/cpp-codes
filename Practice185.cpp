// WAF which takes two numbers a parameters and outputs (a+b)^2


#include <iostream>
using namespace std;

int calc(int a, int b){

    int res = (a*a) + (b*b) + (2*a*b);
    return res;
}

int main(){

    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Calculated result: " << calc(a, b) << endl;

    return 0;
}
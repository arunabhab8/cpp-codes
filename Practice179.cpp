// WAF to print product of two numbers


#include <iostream>
using namespace std;

int product (int a, int b){
    return (a*b);
}

int main(){

    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;


    cout << "Product is: " << product(a,b) << endl;

    return 0;
}
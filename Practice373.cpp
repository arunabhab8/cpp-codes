// Write a function to find the product of 2 numbers

#include <iostream>
using namespace std;

int product(int a, int b){
    return (a * b);
}

int main(){

    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Product: " << product(a, b) << endl;

    return 0;
}
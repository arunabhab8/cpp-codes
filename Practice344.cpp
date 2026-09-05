// Build a calculator using switch statements


#include <iostream>
using namespace std;

int main(){

    int a, b;
    char op;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter the operator (+ or - or * or /): ";
    cin >> op;

    switch (op){
        case '+': cout << "Addition: " << (a + b) << endl;
                  break;
        case '-': cout << "Substraction: " << (a - b) << endl;
                  break;
        case '*': cout << "Multiplication: " << (a * b) << endl;
                  break;
        case '/': cout << "Division: " << (a / b) << endl;
                  break;
        default:  cout << "Invalid operator" << endl;
    }

    return 0;
}
// Calculator using 4 operators (*,/,+,-) using switch statement

#include <iostream>
using namespace std;

int main(){

    float a, b;
    char op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operator (*,/,+,-): ";
    cin >> op;

    switch(op){

        case '*': cout << "Product: " << (a*b) << endl;
                  break;
        case '/': cout << "Divide: " << (a/b) << endl;
                  break;
        case '+': cout << "Addition: " << (a+b) << endl;
                  break;
        case '-': cout << "Difference: " << (a-b) << endl;
                  break; 
        default: cout << "You have entered an incorrect operator" <<endl;
    }

    return 0;
}
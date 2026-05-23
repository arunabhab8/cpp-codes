// Calculator using switch statement

#include <iostream>
using namespace std;

int main(){

    char op;
    int num1, num2;

    cout << "Enter the value of num1: ";
    cin >> num1;

    cout << "Enter the value of num2: ";
    cin >> num2;

    cout << "Enter the operator: ";
    cin >> op;

    
    switch(op){

        case '+': cout << "Addition: " << (num1 + num2) << endl;
                    break;
        case '-': cout << "Substraction: " << (num1 - num2) << endl;
                    break;
        case '*': cout << "Multiplication: " << (num1 * num2) << endl;
                    break;
        case '/': cout << "Division: " << (num1 / num2) << endl;
                        break;
        default:  cout << "Invalid operator" << endl;
    }

    return 0;
}
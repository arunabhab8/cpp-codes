// Swapping

#include <iostream>
using namespace std;

void swap(int &num1, int &num2){

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    cout << "Inside swap (inside swap fnc): " << "num1: " << num1 << ", " << "num2: " << num2 << endl;

}

int main(){

    int num1, num2;

    cout << "Enter the value of num1: ";
    cin >> num1;

    cout << "Enter the value of num2: ";
    cin >> num2;

    cout << "Before calling swap: " << "num1: " << num1 << ", " << "num2: " << num2 << endl;
    swap(num1, num2);
    cout << "After calling swap (inside main fnc): " << "num1: " << num1 << ", " << "num2: " << num2 << endl;


    return 0;
}
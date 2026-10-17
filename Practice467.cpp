// Factorial using recursion

#include <iostream>
using namespace std;


int factorial (int num){

    if (num == 0) {
        return 1;
    }

    return num * factorial(num-1);
}

int main(){

    int num;

    cout << "Enter the value of num: ";
    cin >> num;

    if (num < 0){
        cout << "Negative number entered, please enter a non-negative number" << endl;
        return 0;
    }

    cout << "Factorial: " << factorial(num) << endl;

    return 0;
}
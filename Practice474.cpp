// Factorial using recursion


#include <iostream>
using namespace std;

int factorial(int n){

    if (n == 0){
        return 1;
    }

    return n * factorial(n-1);
}

int main(){

    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 0){
        cout << "Enter a non-negative number" << endl;
        return 0;
    }

    cout << "Factorial: " << factorial(n) << endl;

    return 0;
}
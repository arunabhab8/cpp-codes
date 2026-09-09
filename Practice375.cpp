// WAF to print factorial of a number 


#include <iostream>
using namespace std;

int factorial(int num){

    int fact = 1;

    for (int i=1; i<=num; i++){
        fact = fact * i;
    }

    return fact;
}

int main(){

    int num;

    cout << "Enter the value of num: ";
    cin >> num;

    if (num < 0){
        cout << "Enter a valid number";
        return 0;
    }
    cout << factorial(num) << endl;

    return 0;
}
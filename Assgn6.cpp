// Check if a number is armstrong or not

#include <iostream>
using namespace std;

int main (){

    int tmp, number, rem, com=0;
    cout << "Enter the number: ";
    cin >> number;
    tmp = number;

    while (number > 0){
        rem = number % 10;
        com  = com + (rem * rem * rem);
        number = number / 10;
    }

    if (com == tmp){
        cout << "Number is Armstrong" << endl;
    }
    else{
        cout << "Number is not Armstrong" << endl;
    }

    return 0;
}
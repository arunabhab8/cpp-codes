// Reverse a given number and print the result

#include <iostream>
using namespace std;

int main(){

    int num, rem, revNum = 0;

    cout << "Enter the value of num: ";
    cin >> num;

    while (num > 0){
        rem = num % 10;
        revNum = (revNum * 10) + rem;
        num = num / 10;
    }

    cout << "Reverse num: " << revNum << endl;

    return 0;
}
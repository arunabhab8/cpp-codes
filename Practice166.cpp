// Check whether a number a is Armstrong or not

#include <iostream>
using namespace std;

int main(){

    int num, rem, temp, newNum=0;
    
    cout << "Enter the value of number: ";
    cin >> num;

    temp = num;

    while (num > 0){
        rem = num % 10;
        newNum = newNum + (rem * rem * rem);
        num = num / 10;
    }

    if (temp == newNum){
        cout << "Number is Armstrong" << endl;
    } else{
        cout << "Number is not Armstrong" << endl;
    }
    return 0;
}
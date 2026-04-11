// Binary to Dec practice

#include <iostream>
using namespace std;

int main(){

    int binNum, rem, decNumber=0, pow = 1;

    cout << "Enter the binary number: ";
    cin >>  binNum;

    while (binNum > 0){
        rem = binNum % 10;
        decNumber = decNumber + rem * pow;
        binNum = binNum / 10;
        pow = pow * 2;
    }

    cout << "Decimal Number: " << decNumber << endl;

    return 0;
}
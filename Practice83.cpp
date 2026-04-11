
// Decimal to Binary Practice

#include <iostream>
using namespace std;


int main(){

    int decNumber, rem, binNumber=0, pow=1;

    cout << "Enter the decimal number: ";
    cin >> decNumber;


    while (decNumber > 0){
        rem = decNumber % 2;
        binNumber = binNumber + (pow * rem);
        decNumber = decNumber / 2;
        pow = pow * 10;
    }

    cout << "Binary number: " << binNumber << endl;

    return 0;
}

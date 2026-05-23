// Convert from binary to decimal


#include <iostream>
using namespace std;


int main(){

    int n, rem, decNumber=0, pow=1;

    cout << "Enter the binary number: ";
    cin >> n;

    while (n > 0){
        rem = n%10;
        decNumber = decNumber + (rem * pow);
        pow = pow * 2;
        n /= 10;
    }

    cout << "Decimal Number: " << decNumber << endl;
    return 0;

}
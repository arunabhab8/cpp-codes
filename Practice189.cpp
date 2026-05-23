// Convert from decimal to binary


#include <iostream>
using namespace std;


int main(){

    int n, binNumber=0, rem, pow=1;

    cout << "Enter the decimal number: ";
    cin >> n;

    while (n > 0){
        rem = n%2;
        binNumber = binNumber + (rem*pow);
        pow = pow * 10;
        n = n/2;
    }

    cout << "Binary number: " << binNumber << endl;
    return 0;
}
// WAP to convert from binary to decimal


#include <iostream>
using namespace std;

int bintoDecimal(int num) {

    int rem, decNum = 0, pow = 1;

    while (num > 0){
        rem = num % 10;
        decNum = decNum + (rem * pow);
        num = num / 10;
        pow *= 2;
    }

    return decNum;
}

int main(){

    int n;

    cout << "Enter the binary number: ";
    cin >> n;

    cout << bintoDecimal(n) << endl;
    return 0;
}
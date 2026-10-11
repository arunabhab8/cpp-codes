// Clear last i bits of a number
// num = 15, i = 2

#include <iostream>
using namespace std;

int clearIBits(int num, int i){

    int bitMask = ~0<<i;

    return (num & bitMask);
}

int main(){

    int num, i;

    cout << "Enter the value of num: ";
    cin >> num;

    cout << "Enter the value of i: ";
    cin >> i;

    cout << clearIBits(num, i) << endl;

    return 0;
}
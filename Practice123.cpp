// Clear last i bits of a number

#include <iostream>
using namespace std;

int main(){

    int num, i;
    cout << "Enter the number: ";
    cin >> num;

    cout << "Enter the value of i: ";
    cin >> i;

    cout << (num & (~0 << i)) << endl;
    return 0;
}
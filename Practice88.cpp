// Clear last ibits of a number

#include <iostream>
using namespace std;

int main(){

    int num, i;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter the value of i: ";
    cin >> i;

    cout << (num << i) << endl;

    return 0;
}
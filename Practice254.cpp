// WAF to clear last i bits of a number

#include <iostream>
using namespace std;

int cleariBits(int num, int i){

    int bitMask = ~0 << i;

    return (num & bitMask);
}

int main(){

    int num, i;

    cout << "Enter the value of num: ";
    cin >> num;

    cout << "Enter the value of i: ";
    cin >> i;

    cout << cleariBits(num, i) << endl;

    return 0;
}
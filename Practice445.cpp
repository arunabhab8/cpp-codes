// Write a function to update ith bit of a number according to given value (0 or 1)
// For eg: num = 7, i = 2, val = 0
// For eg: num = 7, i = 3, val = 1

#include <iostream>
using namespace std;

int clearIthBit(int num, int i){

    int bitMask = 1 << i;

    return (num & ~bitMask);
}

int setIthBit(int num, int i){

    int bitMask = 1 << i;

    return (num | bitMask);
}

int main(){

    int num, i, val;

    cout << "Enter the value of num: ";
    cin >> num;

    cout << "Enter the value of i: ";
    cin >> i;

    cout << "Enter the value of val: ";
    cin >> val;

    if (val == 0){
        cout << clearIthBit(num, i) << endl;
    } else {
        cout << setIthBit(num, i) << endl;
    }

    return 0;
}
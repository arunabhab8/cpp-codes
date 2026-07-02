// Update ith bit of a number according to a given value

#include <iostream>
using namespace std;

int clearIthBit(int num, int i){

    int bitMask = ~(1<<i);
    return num & bitMask;
}

int setIthBit(int num, int i){
    
    int bitMask = 1<<i;

    return (num | bitMask);
}

int main(){

    int num, i, value;

    cout << "Enter the value of num: ";
    cin >> num;

    cout << "Enter the value of i: ";
    cin >> i;

    cout << "Enter the value of value: ";
    cin >> value;

    if (value==0){
        cout << clearIthBit(num, i) << endl;
    }else {
        cout << setIthBit(num, i) << endl;
    }

    return 0;
}
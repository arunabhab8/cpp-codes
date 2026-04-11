// Update ith bit of a number.

#include <iostream>
using namespace std;

int setIthBit(int num, int i){

    int bitMask = (1<<i);
    return (num | bitMask);

}

int clearIthBit(int num, int i){
    int bitMask = ~(1<<i);
    return (num & bitMask);
}

int main(){

    int num, i, value, newValue;
    cout << "Enter the number: ";
    cin >> num;

    cout << "Enter the value of i: ";
    cin  >> i;

    cout << "Enter the value of value: ";
    cin >> value;

    if (value <0 || value >1){
        cout << "Incorrect value provided, program is terminated" << endl;
    }

    if (value){
        newValue = setIthBit(num, i);
    } else{
        newValue = clearIthBit(num, i);
    }
    
    cout << "New value: " << newValue << endl;

    return 0;
}
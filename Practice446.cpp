// Write a function to update ith bit of a number according to given value (0 or 1)
// For eg: num = 7, i = 2, val = 0
// For eg: num = 7, i = 3, val = 1

#include <iostream>
using namespace std;

int updateIthBit(int num, int i, int val){

    int bitMask = val << i;

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

    num = num & ~(1<<i);

   cout << updateIthBit(num, i, val) << endl;

    return 0;
}
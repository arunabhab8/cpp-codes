// Set ith bit of a number

#include <iostream>
using namespace std;

int setIthBit(int num, int i){

    int finalNum = (num | (1<<i));

    return finalNum;
}

int main(){

    int num, i;

    cout << "Enter the value of num: ";
    cin >> num;

    cout << "Enter the value of i: ";
    cin >> i;

    cout << setIthBit(num, i) << endl;

    return 0;
}
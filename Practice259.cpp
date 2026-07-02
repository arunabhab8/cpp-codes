// Clear range of bits from i to j for a given number

#include <iostream>
using namespace std;

int clearIthBit(int num, int i, int j){

    for (int k=i; k<=j; k++){
        num = num & ~(1<<k);
    }

    return num;
}

int main(){

    int num, i, j;

    cout << "Enter the value of num: ";
    cin >> num;
    
    cout << "Enter the value of i: ";
    cin >> i;

    cout << "Enter the value of j: ";
    cin >> j;

    cout << clearIthBit(num, i, j) << endl;

    return 0;
}
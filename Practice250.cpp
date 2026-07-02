// Get ith bit of a number

#include <iostream>
using namespace std;

int main(){

    int num, i;

    cout << "Enter the value of num: ";
    cin >> num;

    cout << "Enter the value of i: ";
    cin >> i;

    if (num & (1 << i)){
        cout << "Value at ith position is 1";
    }else {
        cout << "Value at ith position is 0";
    }

    cout << endl;

    return 0;
}
// Clear ith bit

#include <iostream>
using namespace std;

int main(){

    int num, i;

    cout << "Enter the value of num: ";
    cin >> num;

    cout << "Enter the value of i: ";
    cin >> i;

    int bitMask = ~(1 << i);

    cout << (num & bitMask) << endl;

    return 0;
}
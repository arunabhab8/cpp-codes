// Ternary Operators

#include <iostream>
using namespace std;

int main(){

    int num;
    bool isOddEven;

    cout << "Enter the value of num: ";
    cin >> num;
    isOddEven = (num%2 ==0) ? true: false;

    cout << isOddEven << endl;

    return 0;
}
// Check if a number is armstrong or not

#include <iostream>
using namespace std;

int main(){

    int num, rem = 0, armNum = 0, temp;

    cout << "Enter the value of num: ";
    cin >>num;

    temp = num;

    while (num > 0){
        rem = num % 10;
        armNum = armNum + (rem * rem * rem);
        num /= 10;
    }

    if (temp == armNum){
        cout << "Entered number is armstrong" << endl;
    } else {
        cout << "Entered number is not armstrong" << endl;
    }

    return 0;
}
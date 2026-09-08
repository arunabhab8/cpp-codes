// Check whether a number is armstrong or not


#include <iostream>
using namespace std;

int main(){

    int n, temp, rem, armNum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    temp = n;

    while (n > 0){
        rem = n % 10;
        armNum = armNum + (rem * rem * rem);
        n = n / 10;
    }

    if (armNum == temp){
        cout << "Entered number is armstrong" << endl; 
    } else{
        cout << "Entered number is not armstrong" << endl;
    }

    return 0;
}
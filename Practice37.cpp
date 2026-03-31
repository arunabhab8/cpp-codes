// Binary to decimal

#include<iostream>
using namespace std;

int binToDec (int n){

    int rem, pow=1, decNum=0;

    while (n>0){
        rem=n%10;
        decNum = decNum + rem*pow;
        n /= 10;
        pow = pow * 2;
    }
    return decNum;
}

int main(){

    int num;
    cout << "Enter the number n: ";
    cin >> num;

    cout << binToDec(num) << endl;
    return 0;
}

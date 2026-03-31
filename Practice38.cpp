// Decimal to binary

#include <iostream>
using namespace std;

int decToBin(int n){

    int rem, pow=1, binNum=0;
    while (n>0){

        rem=n%2;
        binNum = binNum + rem*pow;
        n /= 2;
        pow = pow * 10;
    }
    return binNum;

}


int main(){

    int num;
    cout << "Enter the value of n: ";
    cin >> num;
    cout << decToBin(num) << endl;

    return 0;
}
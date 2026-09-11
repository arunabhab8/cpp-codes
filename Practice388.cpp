// WAP to convert decimal to binary


#include <iostream>
using namespace std;

int decToBin(int num){

    int binNum = 0, rem, pow = 1;

    while (num > 0){
        rem = num % 2;
        binNum += rem * pow;
        pow *= 10;
        num /= 2;
    }

    return binNum;
}

int main(){

    int num;

    cout << "Enter the value of num: ";
    cin >> num;

    cout << decToBin(num) << endl;

    return 0;
}
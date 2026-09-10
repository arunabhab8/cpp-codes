// WAF to calculate sum of digits of a number

#include <iostream>
using namespace std;

int sumofDigits(int num){

    int rem, sum = 0;

    while (num > 0){
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    return sum;
}

int main(){

    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << sumofDigits(n) << endl;

    return 0;
}
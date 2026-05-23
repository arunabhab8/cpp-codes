// WAF to calculate sum of digits of a number


#include <iostream>
using namespace std;

int sumofDigits(int n){

    int rem, sum=0;

    while (n > 0){
        rem = n%10;
        sum = sum + rem;
        n /= 10;
    }

    return sum;
}

int main(){

    int n;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Sum of Digits: " << sumofDigits(n) << endl;

    return 0;
}
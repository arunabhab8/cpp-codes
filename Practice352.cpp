// Print sum of odd digits of a number

#include <iostream>
using namespace std;

int main(){

    int num, rem, sumofoddDigits = 0;

    cout << "Enter the value of number: ";
    cin >> num;

    while (num > 0){
        rem = num % 10;
        if (rem % 2 != 0){
            sumofoddDigits = sumofoddDigits + rem;
        }
        num = num / 10;

    }

    cout << "Sum of odd digits of the number: " << sumofoddDigits << endl;

    return 0;
}
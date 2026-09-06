// Sum of digits of a number using while loop

#include <iostream>
using namespace std;

int main(){

    int num, rem, sum = 0;

    cout << "Enter the number: ";
    cin >> num;

    while (num > 0){
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    cout << "Sum of digits of the number: " << sum << endl;

    return 0;
}
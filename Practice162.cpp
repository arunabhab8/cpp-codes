// Reverse a given number

#include <iostream>
using namespace std;

int main(){

    int num, rem, revNumber = 0;

    cout << "Enter the number: ";
    cin >> num;

    while (num > 0){
        rem = num % 10;
        revNumber = revNumber * 10 + rem;
        num = num / 10;
    }

    cout << "Reverse number: " << revNumber << endl;
    return 0;
}
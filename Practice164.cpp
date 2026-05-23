// Factorial of a number

#include <iostream>
using namespace std;

int main(){

    int num, fact = 1;

    cout << "Enter the number: ";
    cin >> num;

    if (num >= 0){

        for (int i=1; i<=num; i++){
         fact = fact * i;
        }

         cout << "Factorial: " << fact << endl;
    } else {
        cout << "Number is negative" << endl;
    }
    return 0;

}
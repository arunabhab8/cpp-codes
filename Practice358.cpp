// Check if a number is prime or not

#include <iostream>
using namespace std;

int main(){

    int num;
    bool isPrime = true;

    cout << "Enter the number: ";
    cin >> num;

    if (num < 2){
        isPrime = false;
    }

    for (int i=2; i<num; i++){
        if (num % i == 0){
            isPrime = false;
            break;
        }
    }

    if (isPrime){
        cout << "Entered number is prime" << endl;
    } else { 
        cout << "Entered number is not prime" << endl;
    }

    return 0;
}
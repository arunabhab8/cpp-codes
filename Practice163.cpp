// Prime or not


#include <iostream>
using namespace std;

int main(){

    int num;
    bool isPrime = true;

    cout << "Enter the number: ";
    cin >> num;

    if (num <2) {
        isPrime = false;
    }

    for (int i=2; i<num; i++){
        if (num % i == 0){
            isPrime = false;
            break;
        }
    }

    if (isPrime){
        cout << "Entered number is a prime number" << endl;
    } else{
        cout << "Entered number is not a prime number" << endl;
    }

    return 0;
}
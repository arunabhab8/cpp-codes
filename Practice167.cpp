// Print all prime numbers from 2 to N

#include <iostream>
using namespace std;

void printPrimes (int n){

    bool isPrime = true;

    if (n < 2){
        isPrime = false;
    }

    for (int i=2; i<n; i++){
        if (n % i == 0){
            isPrime = false;
            break;
        }
    }

    if (isPrime){
        cout << n << " ";
    }
}
int main(){

    int n;

    cout << "Enter the value of N: ";
    cin >> n;

    for (int i=2; i<=n; i++){
        printPrimes(i);
    }

    cout << endl;
    return 0;
}
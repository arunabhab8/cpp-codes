// Primes in the range from 2 to N

#include <iostream>
using namespace std;


int isPrime(int n){
    
    for (int i=2; i*i<=n;i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}


void rangeofPrimes(int n){

    for (int i=2; i<=n;i++){
        if (isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){

    int num;
    cout << "Enter the value of n: ";
    cin >> num;
    rangeofPrimes(num);
}
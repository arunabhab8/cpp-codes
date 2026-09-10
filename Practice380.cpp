// WAF to print all prime numbers from 2 to N


#include <iostream>
using namespace std;

bool isPrime(int num){

    for (int i=2; i*i<=num; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;

}

void rangeofPrimes(int n){

    for (int i=2; i<=n; i++){
        if (isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){

    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    rangeofPrimes(n);

    return 0;
}
// For a positive N, WAP that prints all the prime numbers from 2 to N. (Assume N >= 2)

#include <iostream>
using namespace std;

int main(){

    int n, isPrime;
    
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i=2; i<=n; i++){
        isPrime = true;
        for (int j=2; j<=n-1; j++){
            if (i % j == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

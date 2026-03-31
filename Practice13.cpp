// // Print all primes from 2 to n.

// #include <iostream>
// using namespace std;

// void listofPrimes(int a){

//     int i,j;
//     bool isPrime;

// for (i=2; i<=a; i++){
//     isPrime=true;
//     for (j=2; j*j<=i;j++){
//         if (i%j == 0){ // non-prime
//             isPrime=false;
//             break;
//         }
//     }

//     // cout << "isPrime: " << isPrime;
//     if (isPrime){
//         cout << "Prime numbers are: " << i << endl;
//     }
// }
//     cout << endl;
// }


// int main(){

//     int n;
//     cout << "Enter the range for printing prime nos: ";
//     cin >> n;

//     listofPrimes(n);
//     return 0;
// }

//Alternate approach

#include<iostream>
using namespace std;

int isPrime(int n){

    int i;
    bool isPrime=true;
    for (i=2; i*i <=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


void listofPrimes(int n){
    int i;
    for (i=2; i<=n; i++){
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
    listofPrimes(n);
    return 0;
}

// power of N using recursion (O)(logn)


#include <iostream>
using namespace std;

long power(int n, int pow){

    if (pow == 0){
        return 1;
    }

    long halfpow = power(n, pow/2);

    if (pow % 2 == 0){
        return halfpow * halfpow;
    }else{
        return n * halfpow * halfpow;
    }

}


int main(){

    int n, pow;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of pow: ";
    cin >> pow;

    cout << power(n, pow) << endl;

    return 0;
}
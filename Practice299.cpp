// Sum of N natural numbers using recursion

#include <iostream>
using namespace std;

int sumofNatural(int n){

    if (n<=0){
        return -1;
    }

    if (n==1){
        return 1;
    }

    return n + sumofNatural(n-1);
}

int main(){

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Sum of N natural nos: " << sumofNatural(n) << endl;

    return 0;
}
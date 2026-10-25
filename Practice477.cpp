// Sum of N natural nos. using recursion

#include <iostream>
using namespace std;

int sumofNums(int n){

    if (n == 1){
        return 1;
    }

    return n + sumofNums(n-1);
}

int main(){

    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Sum of first " << n << " natural nos: " << sumofNums(n) << endl;

    return 0;
}
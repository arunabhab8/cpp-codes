// Sum of N natural numbers using recursion

#include <iostream>
using namespace std;

int sumofNums(int n){

    if (n==0){
        return 0;
    }

    return n + sumofNums(n-1);

}

int main(){

    int n;
    
    cout << "Enter the value of n: ";
    cin >> n;

    if (n<0){
        cout << "Negative number entered...\n";
        return 0;
    }

    cout << sumofNums(n) << endl;
    return 0;
}
// Sum of N natural numbers using recursion

#include <iostream>
using namespace std;

int sum(int n){

    if (n==1){
        return 1;
    }else{
        return n + sum(n-1);
    }
}

int main(){

    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    cout << "Sum of N natural numbers: " << sum(n) << endl;

    return 0;
}
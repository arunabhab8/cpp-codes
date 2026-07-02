// Fibonacci Nth number using recursion


#include <iostream>
using namespace std;

int fib(int n){

    if (n<0){
        return -1;
    }

    if (n==0){
        return 0;
    }else if (n==1){
        return 1;
    }

    return fib(n-1) + fib(n-2);

}

int main(){

    int n;
    cout << "Enter the value of n: "; 
    cin >> n;

    cout << fib(n) << endl;
    return 0;
}
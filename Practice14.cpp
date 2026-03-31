// Given n, find f(n) = f(n-1) + f(n-2) fibonacci number

// 0 1 1 2 3 5 8 13 21

#include<iostream>
using namespace std;

int fib(int n){

    int i, j, first=0, second=1, next, sum=0;

    for(i=2;i<=n;i++){

        next = first + second;
        first = second;
        second = next;
    }
    return second;  // we can't return "next" because for f(n)=1, we will return garbage if we had returned "next"
}


int main(){

    int n, num;
    cout << "Enter the value of n: ";
    cin >>n;
   cout << "Fibonaaci number of " << n << " is: " << fib(n) << endl;
   return 0;
}
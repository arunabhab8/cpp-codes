// Fibonacci series upto N

#include<iostream>
using namespace std;

int main(){

    int n, i, third, first=0, second=1;
    cout << "Enter the value of n: ";
    cin >> n;


    for (i=1;i<=n;i++){
       cout << first << " ";
       third = first + second;
       first = second;
       second = third;
    }

    cout << endl;

    return 0;
}
// Using recursion, print numbers in increasing order from 1 to n

#include <iostream>
using namespace std;

void printNums(int n){

    if (n == 0){
        return;
    }

    printNums(n-1);
    cout << n << " ";
}

int main(){

    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0){
        cout << "Enter a positive number" << endl;
        return 0;
    }

    printNums(n);

    cout << endl;

    return 0;
}
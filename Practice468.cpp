// Using recursion, print numbers in decreasing order from n to 1

#include <iostream>
using namespace std;

void printNums(int n){

    if (n == 0){
        return;
    }
    cout << n << " ";

    return printNums(n-1);
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
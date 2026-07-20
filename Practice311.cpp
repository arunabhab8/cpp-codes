// Numbers in descending order (n to 1) using recursion

#include <iostream>
using namespace std;

void printNums(int n){

    if (n==0){
        return;
    }

    cout << n << " ";

    printNums(n-1);
}

int main(){

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    printNums(n);
    cout << endl;

    return 0;
}
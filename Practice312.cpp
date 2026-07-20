// Numbers in ascending order (1 to n) using recursion

#include <iostream>
using namespace std;

void printNums(int n){

    if (n==0){
        return;
    }

    printNums(n-1);
    cout << n << " ";
}

int main(){

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    printNums(n);
    cout << endl;

    return 0;
}
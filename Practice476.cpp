// Print nos. in ascending order from 1 to n using recursion

#include <iostream>
using namespace std;

void printNumbers(int n){

    if (n == 0){
        return;
    }

    printNumbers(n-1);

    cout << n << " ";
}


int main(){

    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    printNumbers(n);
    cout << endl;

    return 0;
}
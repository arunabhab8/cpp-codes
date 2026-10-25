// Print nos. in decreasing order from n to 1 using recursion

#include <iostream>
using namespace std;

void printNumbers(int n){

    if (n == 0){
        return;
    }

    cout << n << " ";
    printNumbers(n-1);
}


int main(){

    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    printNumbers(n);
    cout << endl;

    return 0;
}
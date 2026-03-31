// Mutliplication table of a number

#include <iostream>
using namespace std;

int main(){

    int n, i, j;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Enter multiplication table upto: ";
    cin >> j;

    for (i=1; i<=j; i++){

        cout << n << "* " << i << " = " << (n*i) << endl;
    }

    return 0;
}
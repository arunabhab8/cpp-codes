// Sum of N natural numbers

#include <iostream>
using namespace std;

int main(){

    int i = 1, n, sum = 0;

    cout << "Enter the value of N: ";
    cin >> n;

    while (i<=n){
        sum = sum + i;
        i=i+1;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
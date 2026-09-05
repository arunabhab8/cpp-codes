// Print first N natural numbers


#include <iostream>
using namespace std;

int main(){

    int i = 1, n;

    cout << "Enter the value of N: ";
    cin >> n;

    while (i<=n){
        cout << i << " ";
        i=i+1;
    }
    cout << endl;
    return 0;
}
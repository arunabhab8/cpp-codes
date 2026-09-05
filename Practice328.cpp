// Print multiples of 3

#include <iostream>
using namespace std;

int main(){

    int i = 1, n;

    cout << "Enter the value of n: ";
    cin >> n;

    while (i<=n){
        if (i % 3 == 0){
            cout << i << " ";
        }
        i = i + 1;
    }
    cout << endl;

    return 0;
}
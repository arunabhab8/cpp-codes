// Print prime numbers from 2 to N

#include<iostream>
using namespace std;

int main(){

    int i, n, j;
    cout << "Enter the number: ";
    cin >> n;

    for (i=2; i<=n; i++){

        for (j=2; j<i; j++){
            if (i%j == 0){
                break;
            }
        }
        if (j==i){
        cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
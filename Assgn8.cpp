// Factorial of a number

#include <iostream>
using namespace std;

int main(){

    int i, n, fact=1;

    cout << "Enter the number: ";
    cin >> n;

    if (n==0){
        cout << "Factorial of 0 is: 1" << endl;
    }

    else{
        for(i=1;i<=n;i++){
            fact=fact*i;
        }

        cout << "Factorial of number: " << n << " is: " << fact << endl; 
    }

    return 0;
}
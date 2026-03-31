// Reverse a given number ( 5921 --> 1295 )

#include<iostream>
using namespace std;

int main(){

    int n, rem, res=0;
    cout << "Enter the number: " << endl;
    cin >> n;

    while (n > 0){
        rem = n%10;

        res = (res*10) + rem;
        n=n/10;
    }

    cout << "Reverse number is: " << res << endl;

    return 0;
}
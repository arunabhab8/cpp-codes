// WAF to print binomial co-efficient of a given n & r


#include <iostream>
using namespace std;

int fact(int n){

    int fact = 1;

    for (int i=1; i<=n; i++){
        fact = fact * i;
    }

    return fact;
}

int main(){

    int n, r, res;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of r: ";
    cin >> r;

    res = fact(n)/(fact(r) * fact(n-r));
    
    cout << "Binomial Co-efficient result: " << res << endl;
    return 0;
}
/* WAF to find binomial coefficient for a given n and r.

nCr = n!/r!(n-r)!
*/


#include <iostream>
using namespace std;

int factorial(int num){

    int fact = 1;

    for (int i=1; i<=num; i++){
        fact = fact * i;
    }

    return fact;

}

int binCoef(int n, int r){

    int res = factorial(n)/(factorial(r)*factorial(n-r));

    return res;
}

int main(){

    int n, r;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of r: ";
    cin >> r;

    cout << binCoef(n, r) << endl;

    return 0;
}
/* Binomial Co-efficient:

nCr = n! / (r!)* (n-r)!

*/
#include <iostream>
using namespace std;

int binCoeff(int, int);
int fact(int);

int main(){

    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    cout << "Binomial Co-efficient is: " << binCoeff(n,r) << endl;
    return 0;
}

int binCoeff (int a, int b){
    return fact(a)/(fact(b)*fact(a-b));
}

int fact(int a){
    int fact=1, i;
    for (i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}

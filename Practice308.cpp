// Power of N using recursion

#include <iostream>

using namespace std;

long powerofN(int n, int pow){

    if (pow==0){
        return 1;
    }

    return n * powerofN(n, pow-1);
}

int main(){

    int n, pow;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of pow: ";
    cin >> pow;


    cout << powerofN(n, pow) << endl;

    return 0;
}
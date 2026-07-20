// Using recursion, O(logN), find X^N

#include <iostream>
using namespace std;

long long power(int num, int pow){

    if (pow == 0){
        return 1;
    }

    long long halfRes = power(num, pow/2);

    if (pow %2 == 0){
        return halfRes * halfRes;
    }else{
        return num * halfRes * halfRes;
    }
}

int main(){

    int num, pow;

    cout << "Enter the value of num: ";
    cin >> num;

    cout << "Enter the value of pow: ";
    cin >> pow;

    if (pow < 0){
        cout << "Enter non-negative value of power...\n";
        return 0;
    }

    cout << power(num, pow) << endl;

    return 0;
}
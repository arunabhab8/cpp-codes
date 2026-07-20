// Using recursion, O(N), find X^N

#include <iostream>
using namespace std;

long power(int num, int pow){

    if (pow == 0){
        return 1;
    }

    return num * power(num, pow-1);
}


int main(){

    int num, pow;

    cout << "Enter the value of num: ";
    cin >> num;

    cout << "Enter the value of pow: ";
    cin >> pow;

    if (pow < 0){
        cout << "Enter non-negative value of power..." << endl;
        return 0;
    }

    cout << power(num, pow) << endl;


    return 0;
}
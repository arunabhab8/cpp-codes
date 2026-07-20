// X^N using recursion

#include <iostream>
using namespace std;

int powerofN(int num, int pow){

    if (pow == 0){
        return 1;
    }

    return num * powerofN(num, pow-1);
}


int main(){

    int num, pow;

    cout << "Enter the value of num: ";
    cin >> num;

    cout << "Enter the value of pow: ";
    cin >> pow;

    if (num<=0 || pow <0){
        cout << "Provide valid inputs..." << endl;
        return 0;
    }

    cout << powerofN(num, pow) << endl;

    return 0;
}   
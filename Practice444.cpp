// Power of 2

#include <iostream>
using namespace std;

bool isPowerof2(int num){

    if (!(num & (num-1))){
        return true;
    } else {
        return false;
    }
}

int main(){

    int num;

    cout << "Enter the value of num: ";
    cin >> num;

    cout << isPowerof2(num) << endl;

    return 0;
}
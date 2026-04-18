// Check if a number is a power of 2

#include <iostream>
using namespace std;

bool isPowerof2 (int num){

    if (num <=0){
        return false;
    }

    if (num & (num-1)){
        return false;
    }else{
        return true;
    }
}

int main(){

    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (isPowerof2(num)){
        cout << "Number is a power of 2" << endl;
    } else{
        cout << "Number is not a power of 2" << endl;
    }

    return 0;
}
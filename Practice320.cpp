// Exponentiation using squaring, recursion

#include <iostream>
using namespace std;

int powerofN(int n, int pow){

    if (pow == 0){
        return 1;
    }

    int half = powerofN(n, pow/2);

    if (pow %2 == 0){
        return half * half;
    }else{
        return n * half * half;
    }

}

int main(){


   int num, pow;

    cout << "Enter the value of num: ";
    cin >> num;

    cout << "Enter the value of pow: ";
    cin >> pow;

    if (pow <0){
        cout << "Provide valid inputs..." << endl;
        return 0;
    }

    cout << powerofN(num, pow) << endl;    

    return 0;
}
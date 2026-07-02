// Check if a number is power of 2 using bitwise operator

#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Enter the value of num: ";
    cin >> num;

    if (num>0){

        if (num & (num-1)){
            cout << "Number is not a power of 2" << endl;
        } else{
            cout << "Number is a power of 2" << endl;
        }
    }
    return 0;
}
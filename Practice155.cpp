// Get a number from user and print whether it is positive, negative or zero

#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Enter the number: ";
    cin >> num;

    if (num < 0){
        cout << "Number is negative" << endl;
    }else if (num == 0){
        cout << "Number is equal to zero" << endl;
    } else{
        cout << "Number is positive" << endl;
    }
    return 0;
}
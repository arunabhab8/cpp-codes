// Input number from user and print whether positive, negative or zero


#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Enter the number: ";
    cin >> num;

    if (num > 0){
        cout << "Entered number is positive" << endl;
    } else if (num == 0){
        cout << "Entered number is zero" << endl;
    } else{
        cout << "Entered number is negative" << endl;
    }

    return 0;
}
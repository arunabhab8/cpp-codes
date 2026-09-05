// Ternary Operators


#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Enter the number: ";
    cin >> num;

    bool isEven = (num % 2 == 0) ? true : false;

    cout << isEven << endl;

    return 0;
}
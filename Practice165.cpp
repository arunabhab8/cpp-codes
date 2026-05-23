// Multiplication table of a number entered by user


#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Enter the value of num: ";
    cin >> num;

    for (int i=1; i<=10; i++){
        cout << num * i << endl;
    }

    return 0;
}
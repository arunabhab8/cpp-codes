// WAP to print the multiplication table of a number

#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Enter the number: ";
    cin >> num;

    for (int i=1; i<=20; i++){
        cout << i << " * " << num << " = " << i * num << endl;
    }

    return 0;
}
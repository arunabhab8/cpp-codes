// Write a program where an user can keep entering numbers until they enter a multiple of 10
//(Version-2)

#include <iostream>
using namespace std;

int main(){

    int num;

    while (1){
        cout << "Enter the number: ";
        cin >> num;

        if (num % 10 == 0){
            break;
        }
    }

    return 0;
}
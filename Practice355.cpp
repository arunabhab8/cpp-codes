// Write a program where an user can keep entering numbers until they enter a multiple of 10

#include <iostream>
using namespace std;

int main(){

    int num;

    do{
        cout << "Enter number: ";
        cin >> num;

    } while (num % 10 !=0);


    return 0;
}
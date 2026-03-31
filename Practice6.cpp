// Allow user to keep entering numbers until they enter a multiple of 10

#include<iostream>
using namespace std;

int main(){

    int n;

    while (n%10 != 0){
        cout << "Enter a number: ";
        cin >> n;
    }

    return 0;
}
// Simple Interest Calculator

#include <iostream>
using namespace std;

int main(){

    int Principal, Rate, Time;
    float simpleInterest;

    cout << "Enter Principal: ";
    cin >> Principal;

    cout << "Enter Rate: ";
    cin >> Rate;

    cout << "Enter Time: ";
    cin >> Time;

    simpleInterest = (Principal * Rate * Time)/100;

    cout << "Simple Interest: " << simpleInterest << endl;

    return 0;
}
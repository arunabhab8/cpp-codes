// Simple interest calculator

#include<iostream>
using namespace std;

int main(){
    float principal, rate, simpleInterest;
    int time;
    cout << "Enter Principal amount: ";
    cin >> principal;
    cout << "Enter rate: ";
    cin >> rate;
    cout << "Enter time in years: ";
    cin >> time;

    simpleInterest = (principal * rate * time)/100;
    cout << "Simple Interest: " << simpleInterest << endl;
    return 0;

}
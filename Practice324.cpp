// Simple interest


#include <iostream>
using namespace std;

int main(){

    int principal, time, rate;
    float simpleInterest;

    cout << "Enter the value of principal: ";
    cin >> principal;

    cout << "Enter the value of time: ";
    cin >> time;

    cout << "Enter the value of rate: ";
    cin >> rate;

    simpleInterest = (principal * rate * time)/100;

    cout << "Simple Interest: " << simpleInterest << endl;

    return 0;
}
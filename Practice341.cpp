// Income tax calculator


#include <iostream>
using namespace std;

int main(){

    int income;
    float tax = 0;

    cout << "Enter your income in lakhs: ";
    cin >> income;

    if (income > 10){
        tax = tax + (0.3 * income * 100000);
    } else if (income>=5 && income <=10){
        tax = tax + (0.2 * income * 100000);
    }

    cout << "Total tax: " << tax << endl;

    return 0;
}